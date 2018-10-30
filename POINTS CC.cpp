// POINTS CC
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
	ll points;
	sfl(points);

	std::vector<pair<ll,ll > > v;

	while(points--)
	{
		ll a, b;
		sfl(a);
		sfl(b);
		b = (-1LL)*b;

		v.pb(mkp(a,b));
	}
	sort(v.begin(), v.end());

	for(ll i = 0 ; i < v.size() ; i++)
	{
		v[i].second = (-1LL)*v[i].second;
	}

	double ans =0;

	for(ll i = 1 ; i < v.size() ; i++)
	{
		double x = v[i].first - v[i-1].first;
		double y = v[i].second - v[i-1].second;

		x = x*x;
		y = y*y;

		ans += sqrt(x+y);
	}

	printf("%.2f\n", ans);
}
return 0;
}