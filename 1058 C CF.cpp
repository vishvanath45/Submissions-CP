// 1058 C CF
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mp make_pair
#define M (ll)(1e9+7)

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

ll sze;

// cin>>sze;

ll n,d;
cin>>n>>d;

bool flag =1;

ll x,y;
cin>>x>>y;

ll l = -d;
ll r = d;
ll z = y-x;
if(z<l or z >r) flag = 0;
l =d;
r = 2*n-d;
z = x+y;
if(z<l or z>r) flag = 0;
if(flag)cout<<"yes\n";
else cout<<"no";





for(ll i = 0 ; i < sze; i ++)
	// cout<<i;
// string s;

// cin>>s;
// vector<ll> v;


// ll sum = 0;
// for(int i = 0 ; i < sze ;i++)
// {
// 	ll k2 = s[i] - '0';

// 	v.push_back(k2);

// 	sum+=k2;
// }


// ll parts = 2;

// ll flag = 0;

// ll sumreq;


// map<ll,ll>mp;
// // cout<<sum<<" sum\n";
// while(parts <= sze)
// {
// 	ll sumeachg = sum/parts;

// 	if(sumeachg == ceil((float)sum/parts))
// 	{
// 		// cout<<sum<<" "<<parts<<" sum/parts\n";
// 		ll gsum =0;
// 		for(ll i = 0 ; i < sze ; i++)
// 		{
// 			// cout<<gsum<<" -- "<<sumeachg<<"\n";

// 				gsum += v[i];
			
// 			if(gsum == sumeachg)
// 			{
// 				mp[gsum]++;
// 				ll kkk = mp[gsum];
// 				gsum = 0;
// 			}
// 			if(gsum > sumeachg)
// 			{
// 				break;
// 			}
// 		}
// 	}

// parts++;
// }

// for(auto it = mp.begin() ; it != mp.end() ; it++)
// {
// 	// cout<<it->first<<" "<<it->second<<"\n";
// 	if(it->first * it->second == sum)
// 	{
// 		cout<<"YES\n";
// 		return 0;
// 	}
// }
// cout<<"NO\n";
// return 0;
return 0;
}