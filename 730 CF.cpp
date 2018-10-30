// 730 CF dummy

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
    // hellp

ll t;
cin>>t;

set<string> stk;

string s[t];

for (int i = 0; i < t; ++i)
{
	cin>>s[i];
	/* code */
}

for (ll i = 0; i < t; i++)
{
	/* code */
ll flag =0;

for(ll hh = 0; hh=s[i].size();hh++)
{
	string pkp;
	ll flag = 0;


	for(ll j =0;j<s[i].size()-1 ; j++)
	{


		if(s[i][j]=='u')
		{
			flag =1;
			pkp+="oo";
		}
		else if(s[i][j]=='k'&&s[i][j+1]=='h')
		{
			flag =1;
			pkp+="h";
			j++;
		}
		else
		{
			// cout<<"added"<<
			pkp+=s[i][j];
			// cout<<"**\n";
		}
	}
	ll dummy = s[i].size()-1;

	if(s[i][dummy]=='u')
	{
		pkp+="oo";
	}
	else if(s[i][dummy]!='h')
	{
		pkp+=s[i][dummy];
	}
	else if(s[i][dummy]=='h'&&dummy==0)
	{
		pkp+=s[i][dummy];
	}
	else if(dummy>=1&&s[i][dummy]=='h'&&s[i][dummy-1]!='k')
	{
		pkp+=s[i][dummy];
	}



	s[i]=pkp;
	 // cout<<pkp<<"\n";

	if(!flag)
		break;
}
}

for(ll i =0 ; i<t ; i++)
{
	string doit ;

	for(ll h = 0; h <s[i].size() ;h++)
	{
		
			doit+=s[i][h];
		
	}
	// cout<<doit<<"\n";
	stk.insert(doit);
}

// }
// cout<<s[i]<<"\n";
// stk.insert(s[i]);



cout<<stk.size();

return 0;

}
