// GRID CC 
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

	string arr[sze];

	for (ll i = 0; i < sze; ++i)
	{
		cin>>arr[i];
	}

	ll matrix[sze][sze];

	for (ll i = 0; i < sze; i++)
	{
		for (ll j = 0; j < sze; j++)
		{
			matrix[i][j] = 0;
		}
	}


	for(ll i = 0 ; i < sze ; i++)
	{
		for( ll j = 0 ; j < arr[i].length() ; j++)
		{
			if(arr[i][j] == '#')
				matrix[i][j] = 0;
			else
				matrix[i][j] = 1;
		}
	}

	for (ll i = 0; i < sze; i++)
	for (ll j = sze-2; j >=0; j--)
	{
		if(matrix[i][j] != 0)
		matrix[i][j] += matrix[i][j+1];
	}

	// for (ll i = 0; i < sze; i++)
	// {
	// 	for (ll j = 0; j < sze; j++)
	// 	{
	// 		cout<<matrix[i][j]<<" ";
	// 	}
	// 	cout<<"\n";
	// }

ll count  = 0;

	for(ll i = sze-1 ; i >= 0 ; i--)
	{
		for(ll j = sze-1 ; j >= 0 ; j--)
		{
			if(matrix[j][i] > 0)
			{
				if(matrix[j][i] == sze - i)
					count++;
			}
			else
			{
				break;
			}

		}
	}

pfl(count);
}

return 0;
}