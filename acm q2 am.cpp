//acm q2 am


#include<stdio.h>
#include<algorithm>
using namespace std;
#include<iostream>

int main()
{
int ans;
int d;
int rem;
int nineocc;
int t;
cin>>t;
while(t--)
{
cin>>d;
if(d>=9)
{
nineocc=d/9;
rem=d%9;
ans=rem+1;
}
else
{

ans=d+1;

}


cout<<ans<<"\n";
}
return 0;


}
