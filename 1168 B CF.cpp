// 1168 B CF
#include<bits/stdc++.h>
using namespace std;
#define ll int
#define ull unsigned long long int
#define Endl endl
#define mod  1000000007
#define mkp make_pair
#define pb push_back
#define sfl(n) scanf("%d",&n)
#define pfl(n) printf("%d\n",n)
#define sf(n) scanf("%d",&n)
#define pf(n) printf("%d ",n)
#define bitget(n) __builtin_popcountll(n)
#define MAX 1000000000000000000 //10^18
#define MIN -1000000000000000000
#define ipair pair<long long ,long long >

ll dx[] = {1,1,0,-1,-1,-1,0,1};
ll dy[] = {0,-1,-1,-1,0,1,1,1};
ll dxx[] = {1,-1,0,0};
ll dyy[] = {0,0,-1,1};

struct abc
{
  ll maxi;
  ll indx;  
};



ll intpoint(ll x1, ll y1, ll x2, ll y2) { return ( __gcd(abs(x1-x2),abs(y1-y2))+1); }

ll powr(ll x,ll y){if(y==0)return 1;if(y%2){ll ans=powr(x,y/2);
return (((x*ans))*ans);} else{ll ans=powr(x,y/2);return (ans*ans);}
}

bool isvalid(ll x,ll y,ll n,ll m) { return (x>=0&&x<n&&y>=0&&y<m); }

ll modexpo(ll x,ll y){if(y==0)return 1;if(y%2){ll viky=modexpo(x,y/2);
return (((x*viky)%mod)*viky)%mod;}else{ll viky=modexpo(x,y/2);return (viky*viky)%mod;
}}



int main()
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif


ll t;

sfl(t);
ll ans =0;

for(ll i = 1; i*i <t ; i++ )
{
	cout<<i<<"\n";
	if(t%i == 0)
	{	ans+=1;
		if(i*i != t)
			ans+=1;
	}
}

// ll pp;
// if(pp == t/pp)
// 	ans+=1;

pfl(ans);




return 0;
}


