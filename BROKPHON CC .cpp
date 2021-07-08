// BROKPHON CC 
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
#define bitget(n) __builtin_popcountll(n)
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


int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
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

	set<ll> stk;

	for (ll i = 0; i < sze-1 ; ++i)
	{
		if(arr[i] != arr[i+1])
		{
			stk.insert(i);
			stk.insert(i+1);
		}
	}

	ll oo = stk.size();
	pfl(oo);

}
return 0;
}