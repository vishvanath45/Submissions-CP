#include<stdio.h>
#include<algorithm>
using namespace std;
#include<iostream>
#include<string.h>
#include<streambuf>
#include<sstream>
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	string s;
	int ans=0;

	cin>>s;
	int l=s.length();

	int i=-1;
	char ch,ch2;

	while(++i<l-1)
	{
		ch=s[i];
		ch2=s[i+1];

		if(ch=='<'&&ch2=='>')
		{
			ans++;
		}


	}

cout<<ans<<"\n";

}
}