// 841 A CF

#include<bits/stdc++.h>

using namespace std;
#define ll long long int

int main()
{
#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif

int ball,fri;
cin>>ball>>fri;

int hash[26]={0};

 
string s;

cin>>s;

for(int i =0 ; i< s.length(); i++)
{
	hash[s[i]-'a']++;
}

for(int i =0 ; i< 26 ; i++)
{
	if(hash[i]>fri)
	{
		cout<<"NO\n";
		return 0;
	}
}

cout<<"YES\n";

return 0;
}
