// 356A CF
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

void buildsegtree(ll input[], ll segarr[], ll low, ll high, ll pos)
{
	if(low == high)
	{
		segarr[pos] = input[low];
	}
	else
	{
		ll mid = low + (high - low)/2;
		buildsegtree(input, segarr, low, mid, 2*pos+1);
		buildsegtree(input, segarr, mid+1, high, 2*pos+2);
		segarr[pos] = 0;
	}
}


void update(ll segarr[], ll i, ll j, ll low, ll high)
{

	if()

}


int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
