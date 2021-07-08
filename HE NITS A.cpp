// HE NITS A
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back	
#define mp make_pair
#define M (ll)(1e9+7)

ll arr[1000009];

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
	ll a, b;
	cin>>a>>b;
	ll psum = 0;
	ll tsum = 0;
	for(ll i = 1 ; i <= 1000000 ; i++)
	{
		string s = to_string(i);

		ll ce =0;
		ll co = 0;

		for(ll j = 0; j < s.size() ; j++)
		{
			if(s[j] == '0')
				{
					ce = 0;
					co = 0;
				}
			else if((s[j] - '0')%2 == 0)
			{
				ce++;
				tsum += (s[j]-'0');
				co = 0;
			} 
			else
			{
				co++;
				tsum += (s[j]-'0');
				ce = 0;
			}

			if(ce > 2 || co > 2)
			{
				tsum = 0;
				break;
			}
		}
		psum += tsum;
		tsum = 0;
	}

	cout<<psum<<"\n";
}

return 0;
}
