//205A CF

#include<stdio.h>
#include<algorithm>
using namespace std;
#include<iostream>

int main()
{

int t,xx,min=-1;
cin>>t;

int count=0;
int pos;
int i=-1;


while(++i<t)
{
	cin>>xx;
if(i==0)
{
	pos=0;
	count=0;
	min=xx;
}
else
{
if(xx<min)
{
	min=xx;
	count=0;
	pos=i;
}
else if(xx==min)
{
	count++;
}
}}


if(count>0)
cout<<"Still Rozdil";
else
cout<<pos+1;

return 0;
}

