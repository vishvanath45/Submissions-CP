//104 A CF
#include<stdio.h>
#include<algorithm>
using namespace std;
#include<iostream>

int main(void)
{
	/* code */

int t;

int ans=0;

cin>>t;
int t2=t-10;
if(t2>=1&&t2<=11)
{


if(t2==10)
{
	ans=15;
}
else
ans=4;
}
cout<<ans;
	return 0;
}
