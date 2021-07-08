//  112 A CF
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

string s1,s2;

cin>>s1>>s2;


for(int i =0; i< s1.length(); i++)
{
	s1[i]= tolower(s1[i]);
	s2[i]= tolower(s2[i]);	

	if(int(s1[i])<int(s2[i]))
	{
		cout<<"-1";
		return 0;
	}
	else if(int(s1[i])>int(s2[i]))
	{
				cout<<"1";
		return 0;

	}

}

cout<<0;
return 0;
}