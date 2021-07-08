// 787 A CF

#include<bits/stdc++.h>
#define pb push_back
using namespace std;


int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b%a, a);
}


int main()
{

int a,d,b,c; // a+(n-1)d  , b+(m-1)c;

cin>>d>>a;
cin>>c>>b;


int x, y;


int xxyyzz=gcd(d,c);

if((a-b)%xxyyzz!=0)
    {cout<<"-1"<<"\n";
        return 0;
        }


int pkp =1;

double m2;

while(1)
{

m2 = float(a-b + pkp*d -d +c)/c;

if(m2==ceil(m2)&&m2>0)
break;
else
pkp++;

}


//cout<<"pkp is "<<pkp<<"\n";

//cout<<"m2 is "<<m2<<"\n";

cout<<a+(pkp-1)*d<<"\n";



return 0;

}
