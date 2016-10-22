//155 A CF
#include<stdio.h>
#include<algorithm>

using namespace std;
#include<iostream>

int main()
{
	/* code */
int t,i;
int min,max=-1,ans=0;

cin>>t;

int pkp;
while(t--)
{
cin>>i;
if(max<0)
{
	max=i;
	min=i;

}
else if(i>max)
{
	max=i;
	ans++;

}
else if(i<min)
{
	min=i;
	ans++;
}
else
{

}



}



cout<<ans;

	return 0;
}
