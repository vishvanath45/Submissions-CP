// 1168 A CF
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

ll dx[] = {1,1,0,-1,-1,-1,0,1};
ll dy[] = {0,-1,-1,-1,0,1,1,1};
ll dxx[] = {1,-1,0,0};
ll dyy[] = {0,0,-1,1};

struct abc
{
  ll x;
  ll indx;  
};

bool func( abc a, abc b){
  if(a.x<b.x)
    return true;
    return false;
}

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

while(t--)
{
	ll r,c;
	sfl(r);
	sfl(c);
ll mat[r][c];

ll count  = 0;

vector<pair< ll, ll > > v;

for (ll i = 0; i < r; ++i)
{
	string str;
	cin>>str;
	for (ll j = 0; j < c; ++j)
	{
		if(str[j] == '#')
		{
			count++;
			mat[i][j] = 1;
		}
		else
			mat[i][j] = 0;
	}
}

if(count == r*c)
{
	cout<<"YES\n";
	continue;
}

for (ll i = 0; i < r; ++i)
{
	for (ll j = 0; j < c; ++j)
	{
		if(mat[i][j] == 0)
		{
			if(isvalid(i+1, j+1,r,c) && isvalid(i+1, j,r,c) && isvalid(i, j+1,r,c))
			{
				if( (mat[i+1][j+1]%2 == 0) && (mat[i+1][j]%2 == 0) && (mat[i][j+1]%2 == 0))
				{
					mat[i+1][j+1]=2;
					mat[i+1][j] = 2;
					mat[i][j+1] = 2;
					mat[i][j] = 2;
				}
			}

			if(isvalid(i, j+1,r,c) && isvalid(i-1, j,r,c) && isvalid(i-1, j+1,r,c))
			{
				if( (mat[i][j+1]%2 == 0) && (mat[i-1][j]%2 == 0) && (mat[i-1][j+1]%2 == 0))
				{
					mat[i][j+1]=2;
					mat[i-1][j] = 2;
					mat[i-1][j+1] = 2;
					mat[i][j] = 2;
				}
			}

			if(isvalid(i+1, j,r,c) && isvalid(i, j-1,r,c) && isvalid(i+1, j-1,r,c))
			{
				if( (mat[i+1][j]%2 == 0) && (mat[i][j-1]%2 == 0) && (mat[i+1][j-1]%2 == 0))
				{
					mat[i+1][j]=2;
					mat[i][j-1] = 2;
					mat[i+1][j-1] = 2;
					mat[i][j] = 2;
				}
			}

			if(isvalid(i-1, j,r,c) && isvalid(i, j-1,r,c) && isvalid(i-1, j-1,r,c))
			{
				if( (mat[i-1][j]%2 == 0) && (mat[i][j-1]%2 == 0) && (mat[i-1][j-1]%2 == 0))
				{
					mat[i-1][j]=2;
					mat[i][j-1] = 2;
					mat[i-1][j-1] = 2;
					mat[i][j] = 2;
				}
			}
		}
	}
}
ll f = 1;

for (ll i = 0; i < r; ++i)
{
	for (ll j = 0; j < c; ++j)
	{
		if(mat[i][j] == 0)
		{
			f=0;
			break;	
		}
		// cout<<mat[i][j]<<" ";
	}
	// cout<<"\n";
}


if(f)
	cout<<"YES\n";
else
	cout<<"NO\n";
}




return 0;
}


