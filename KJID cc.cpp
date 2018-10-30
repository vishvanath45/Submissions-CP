//KJID cc

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int l;
	string s;
	cin>>s;
	int arr[26]={0};
	l=s.length();
	char ch;

	for(int i=0;i<l;i++)
	{
		ch=s[i];
		int ss=ch;
		ss=ss%97;

		arr[ss]++;

	}
	for(int i=0;i<26;i++)
	{
		arr[i]=arr[i]%2;
	}
	int sum=0;

	for(int i=0;i<26;i++)
	{
		sum+=arr[i];
	}
	if(sum==0||sum==1)
	{
		cout<<"YES\n";
	}
	else
	{
		cout<<"NO\n";
	}


return 0;

}
