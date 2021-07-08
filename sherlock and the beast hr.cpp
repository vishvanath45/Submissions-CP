//sherlock and the beast hr

#include<bits/stdc++.h>

#define ll long long int

using namespace std;

int main()
{
ll t;
cin>>t;

while(t--)
{
ll n;
cin>>n;

ll no5=n;
ll no3=0;
ll flag=0;

while(no5%3!=0||no3%5!=0)
{

cout<<"value of no5 and no3"<<no5<<" "<<no3<<"\n";
	no5-=1;
	no3+=1;

if(no5<0||no3<0)
{flag=1;
break;
}
}


if(flag==0)
{for(int i =0;i<no5;i++)
cout<<5;

for(int i=0;i<no3;i++)
cout<<3;

cout<<"\n";

}
else
{cout<<-1;
cout<<"\n";
}
}



return 0;

}
