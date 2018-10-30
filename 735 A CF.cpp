//735 A
//compiled successfully 
#include<stdio.h>
#include<algorithm>
using namespace std;
#include<iostream>
#include<string.h>

int main()
{
int n,j;
string s;
cin>>n>>j;

cin>>s;

int l=s.length();

int gpos,ipos;

int i=0;
int arr[l]={0};

char ch;

while(i<l)
{

ch=s[i];
if(ch=='.')
s[i]=0;
else if(ch=='#')
s[i]=-1;
else if(ch=='G')
{
	s[i]=2;
	gpos=i;
}
else if(ch=='T')
{
	s[i]=1;
	ipos=i;
}

i++;

}


int counter=-1;
if(gpos<ipos)
{
	while(gpos<l)
	{
		gpos+=j;
		if(s[gpos]==1)
		{
			counter=0;
		}
		else if(s[gpos]==-1)
		{
			break;
		}
	}
}
else if(gpos>ipos)
{
	while(gpos>-1)
	{
		gpos-=j;
		if(s[gpos]==1)
		{
			counter=0;
		}
		else if(s[gpos]==-1)
		{
			break;
		}
	}
}


if(counter==0)
cout<<"YES";
else
cout<<"NO";


return 0;

}