// RRSTONE CC
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

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);

ll sze, k;

sfl(sze);
sfl(k);

ll arr[sze];

ll even[sze];
ll odd[sze];

ll maxi = -1*1e9;

for (ll i = 0; i < sze; ++i)
{
	ll op;
	cin>>op;
	arr[i] = op;
	maxi = max(maxi, op);
}

ll maxi2 = maxi;
maxi = -1*1e9;

for (ll i = 0; i < sze; ++i)
{
	odd[i] = maxi2-arr[i];
	ll op = odd[i];
	maxi = max(maxi, op);
}

for (ll i = 0; i < sze; ++i)
{
	even[i] = maxi-odd[i];
}


if(k==0)
{
for (ll i = 0; i < sze; ++i)
{
	cout<<arr[i]<<" "; 
}	
}
else if(k%2 == 0)
{
for (ll i = 0; i < sze; ++i)
{
	cout<<even[i]<<" "; 
}
}
else
{
for (ll i = 0; i < sze; ++i)
{
	cout<<odd[i]<<" "; 
}
}



return 0;
}