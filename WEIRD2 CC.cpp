// WEIRD2 CC
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ull unsigned long long int
#define Endl endl
#define mod  1000000007
#define mkp make_pair
#define pb push_back
#define sfl(n) scanf("%lld",&n)
#define pfl(n) printf("%lld\n",n)
#define sf(n) scanf("%d",&n)
#define pf(n) printf("%d ",n)
#define bitget(n) __builtin_popcountll(n)
#define MAX 1000000000000000000 //10^18
#define MIN -1000000000000000000
#define ipair pair<long long ,long long >


int main()
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif

ll t;
sfl(t);

while(t--)
{
	ll sze;
	sfl(sze);
	ll arr[sze];

	for (ll i = 0; i < sze; ++i)
	{
		sfl(arr[i]);
	}

	map<ll, ll> mp;

	for (ll i = 0; i < sze; ++i)
	{
		mp[arr[i]]++;
	}

	ll ans = 0;

	map<ll,ll>::iterator it,it2;

	set<pair<ll, ll > > stk;

	for (it = mp.begin() ; it != mp.end() ; it++)
	{
		ll n1,c1,n2,c2;
		n1 = it->first;
		c1 = it->second;

			for(it2 = mp.begin(); it2 != mp.end() ; it2++)
			{
				
				if(it2->first > c1 )
					break;


					n2 = it2->first;
					c2 = it2->second;

					// cout<<n1<<" "<<c1<<" "<<n2<<" "<<c2<<"\n";
					if(c2 >= n1 && c1 >= n2)
					{
						ans++;
						// cout<<n1<<" "<<c1<<" "<<n2<<" "<<c2<<"\n";
						// if( (stk.count(mkp(n1,n2)) >0 ) || (stk.count(mkp(n2,n1)) >0 ))
						// {
						// 	//
						// }
						// else
						// {
						// 	stk.insert(mkp(n1,n2));
						// 	// ans+= max(c1,c2);
						// 	ans++;
						// }

					}
				// }

			}
		}

	// cout<<stk.size()<<"\n";
	cout<<ans<<"\n";
	}



return 0;
}