	//219 A CF
	#include<bits/stdc++.h>

	using namespace std;

	int main()
	{
int kstr;
cin>>kstr;

	char s[1001];
	cin>>s;

	int l=strlen(s);
int i=0;
	int kk;

	int hash[26]={0};
	while(l--)
	{
	kk=s[l]-'a';

	hash[kk]++;

	}

	for(kk=0;kk<26;kk++)
	{
		if(hash[kk]%kstr!=0)
		{
			cout<<-1;
			exit(0);
		}

	}
	int orgy;

	while(kstr--)
	{
		for(kk=0;kk<26;kk++)
	{
	if(hash[kk]>0)
	{
		int  chh;
		chh=kk+'a';
		char ch2;
		ch2=chh;
		cout<<ch2;
		hash[kk]--;


	}

	}
	}
	return 0;



	}
