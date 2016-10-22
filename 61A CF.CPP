//61A CF
#include<stdio.h>
#include<algorithm>
using namespace std;
#include<iostream>
#include<string.h>

int main()
{

string s, t;

cin>>s;
cin>>t;
int l=s.size();
char ch,ch2;
int l2=l;
int arr[l];
while(l--)
{
ch=s[l];
ch2=t[l];

if((ch=='0'&&ch2=='0')||(ch=='1'&&ch2=='1'))
{
	arr[l]=0;
}
else
{
	arr[l]=1;

}
}
int i=0;
while(i<l2)
{
	cout<<arr[i];
	i++;
	
}

return 0;


}
