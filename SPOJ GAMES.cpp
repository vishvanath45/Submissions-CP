//SPOJ GAMES

#include<bits/stdc++.h>
using namespace std;

int main()
{
int t;
cin>>t;

int k;

while(t--)
{
double d,d1;
cin>>d;
d1=d-floor(d);
if(d1!=0)
k = 1/d1;
else
k=1;

cout<<k<<"\n";
}
return 0;

}
