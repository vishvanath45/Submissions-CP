// 1051 A CF
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mp make_pair
#define M (ll)(1e9+7)
#include<string>


int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

ll t;

cin>>t;

while(t--)
{
	string s;
	cin>>s;

	ll cb = 0;
	ll pb;
	ll cs = 0;
	ll ps;
	ll cn = 0;
	ll pn;

	for (ll i = 0; i < s.length(); ++i)
	{
		if(s[i] >= 'a' && s[i] <= 'z' )
			{
				cs++;
				ps = i;
			}
		else if(s[i] >= '0' && s[i] <= '9')
			{
				cn++;
				pn = i;
			}
		else
			{
				cb++;
				pb = i;
			}
	}

	if(cs > 0 && cn >0 && cb >0)
	{
		// cout<<s<<"\n";
	}
	else if(cs == 0 && cn >0 && cb > 0)
	{
	
		if(cn == 1)
		{
			if(s[0] >= '0' && s[0] <= '9' )
			{
				s[1] = 'a';
			}
			else
			{
				s[0] = 'a';
			}

		}
		else if(cb == 1)
		{
			if(s[0] >= 'A' && s[0] <= 'Z' )
			{
				s[1] = 'a';
			}
			else
			{
				s[0] = 'a';
			}

		}
		else
		{
			s[0] = 'a';
		}		

	}
	else if(cs > 0 && cn == 0 && cb > 0)
	{
	
		if(cs == 1)
		{
			if(s[0] >= 'a' && s[0] <= 'z' )
			{
				s[1] = '0';
			}
			else
			{
				s[0] = '0';
			}

		}
		else if(cb == 1)
		{
			if(s[0] >= 'A' && s[0] <= 'Z' )
			{
				s[1] = '0';
			}
			else
			{
				s[0] = '0';
			}

		}
		else
		{
			s[0] = '0';
		}		

	}
	else if(cs > 0 && cn >0 && cb == 0)
	{
	
		if(cn == 1)
		{
			if(s[0] >= '0' && s[0] <= '9' )
			{
				s[1] = 'A';
			}
			else
			{
				s[0] = 'A';
			}

		}
		else if(cs == 1)
		{
			if(s[0] >= 'a' && s[0] <= 'z' )
			{
				s[1] = 'A';
			}
			else
			{
				s[0] = 'A';
			}

		}
		else
		{
			s[0] = 'A';
		}		

	}
	else if(cs ==0 && cb == 0 )
	{
		s[0] = 'a';
		s[1] = 'A';
	}
	else if(cs == 0 && cn == 0)
	{
		s[0] = 'a';
		s[1] = '1';
	}
	else if(cb == 0 && cn == 0)
	{
		s[0] = 'A';
		s[1] = '1';

	}

	cout<<s<<"\n";

}

return 0;
}