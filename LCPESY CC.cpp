// LCPESY CC
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define Endl endl
#define mod  1000000007
#define mkp make_pair
#define pb push_back
#define sfl(n) scanf("%lld",&n)
#define pfl(n) printf("%lld\n",n)
#define sf(n) scanf("%d",&n)
#define pf(n) printf("%d\n",n)
ll dx[] = {1,1,0,-1,-1,-1,0,1};
ll dy[] = {0,-1,-1,-1,0,1,1,1};
ll dxx[] = {1,-1,0,0};
ll dyy[] = {0,0,-1,1};
bool isvalid(ll x,ll y,ll n,ll m){
    return (x>=0&&x<n&&y>=0&&y<m);
}
ll modexpo(ll x,ll y){if(y==0)return 1;if(y%2){ll viky=modexpo(x,y/2);
return (((x*viky)%mod)*viky)%mod;}else{ll viky=modexpo(x,y/2);return (viky*viky)%mod;
}}

ll sieve[1000009];

void eros()
{
	// 0 means prime;
	// 1 means non prime;
	sieve[0] = 1;
	sieve[1] = 0;
	sieve[2] = 0;
	for(int i = 2 ; i*i < 1000009 ; i++)
		if(sieve[i] == 0)
			for(int j = i*2 ; j < 1000009 ; j+=i)
					sieve[j] = 1;
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);

ll t;

sfl(t);

while(t--)
{
	string a;
	string b;

	cin>>a>>b;

	map<char, ll> mpa;
	map<char, ll> mpb;

	for (int i = 0; i < a.length(); ++i)
	{
		mpa[a[i]]++;
	}
	for (int i = 0; i < b.length(); ++i)
	{
		mpb[b[i]]++;
	}	
ll ans = 0;

for(auto it = mpa.begin() ; it != mpa.end() ; it++)
{
	//cout<<it->first<<" "<<it->second<<"\n";
	if(mpb.find(it->first) == mpb.end())
	{
		// not find;
	}
	else
	{
		 ans += min(mpb[it->first], it->second); 
	}

}
cout<<ans<<"\n";
}

return 0;
}