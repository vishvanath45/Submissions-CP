//112A CF
#include<stdio.h>
#include<algorithm>
using namespace std;
#include<iostream>
#include <string>

int main()
{
	string s1,s2;
	char ch,ch2;
	cin>>s1;

	cin>>s2;
	int l= s1.size();
	int i=0;
int ans=0;
int a1=0,a2=0;
	while(i<l)
	{
		ch=s1[i];
		ch2=s2[i];
		s1[i]=tolower(ch);
		s2[i]=tolower(ch2);
		i++;
	}
while(l--)
{
	ch=s1[l];
	ch2=s2[l];
	a1+=(int)ch;
	a2+=(int)ch2;
	
}
if(a1!=a2)
{
	ans=((a1>a2)?1:-1);
}
cout<<ans;
	return 0;
}
