//  118 A CF
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

string s1;
cin>>s1;

for(int i =0 ; i< s1.length(); i++)
{

	s1[i]= tolower(s1[i]);

	if(s1[i]=='a'||s1[i]=='y'||s1[i]=='e'||s1[i]=='i'||s1[i]=='o'||s1[i]=='u')
	{

	}
	else
	{
		cout<<".";
		cout<<s1[i];

	}




}

return 0;
}