//CHEFKEY CC

#include<stdio.h>
#include<algorithm>
using namespace std;
#include<iostream>

int main()
{
long long int i,n,m,c,kk;
int count;

int t;
cin>>t;
while(t--)
{
cin>>n>>m>>c;
count=0;

int min=(n>=m?m:n);
int max=(n>=m?n:m);
for(i=1;i<=min;i++)
{
if(c%i==0)
{
kk= c/i;
if(kk<=max)
count++;

}


}


cout<<count<<"\n";

}
return 0;


}