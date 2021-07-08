//124 A CF

#include<stdio.h>
#include<algorithm>
using namespace std;
#include<iostream>

int main()
{
int n,a,b;
cin>>n>>a>>b;

if(a+b>=n||(a+b==(n-1)))
{
	cout<<n-a;
}
else
{
	cout<<b+1;
	
}




return 0;


}