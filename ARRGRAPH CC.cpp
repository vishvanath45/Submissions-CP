// ARRGRAPH CC
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define Endl endl
#define mod  1000000007
#define mkp make_pair
#define pb push_back
#define sfl(n) scanf("%lld",&n)
#define pfl(n) printf("%lld",n)
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

ll cc(ll a, ll b)
{
	if(__gcd(a,b) == 1)
		return 1;
	else
		return 0;
}

ll visited[55]={0};

vector <ll> adj[55];

void DFS(ll n1)   
{
    visited[n1]=1;
    for(vector <ll>::iterator pp = adj[n1].begin() ; pp!=adj[n1].end(); pp++)
    {
        if(visited[*pp]!=1)
        {
            DFS(*pp);
        }
    }
    return;
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

set<ll> stk2;

stk2.insert(29);
stk2.insert(31);
stk2.insert(37);
stk2.insert(41);
stk2.insert(43);
stk2.insert(47);

while(t--)
{
	ll sze;
	sfl(sze);
	ll arr[sze];
	set<ll> stk;

	ll pika = 0;
	for (int i = 0; i < sze; ++i)
	{
		ll ppp;
		sfl(ppp);
		arr[i] = ppp;
		stk.insert(arr[i]);

		// if(stk2.count(ppp) > 0)
		// {
		// 	pika = 1;
		// }
	}

	if(sze == 1)
	{
		printf("0\n");
		printf("%lld ",arr[0]);
		continue;
	}
	if(stk.size() == 1)
	{
		if(arr[0] == 47)
			arr[0]=11;
		else
			arr[0] = 47;
			
			printf("1\n");

		for(ll i = 0 ; i < sze ; i++)
			{	
				printf("%lld ",arr[i]);
			}
				printf("\n");
		continue;
	}

	if(pika)
	{
			printf("0\n");

		for(ll i = 0 ; i < sze ; i++)
			{	
				printf("%lld ",arr[i]);
			}
				printf("\n");
		continue;
	}

	for(ll i = 0 ; i < sze ; i++)
	{
		for(ll j = i+1 ; j < sze ; j++)
		{
			if((cc(arr[i], arr[j])) == 1)
			{
				adj[arr[i]].pb(arr[j]);
				adj[arr[j]].pb(arr[i]);
			}
		}
	}

	DFS(arr[0]);
	ll flag = 0;
	for(ll i = 0; i <sze ; i++)
	{
		if(visited[arr[i]] == 0)
			flag = 1;
	}

	if(flag == 0)
	{
		printf("0\n");

		for (ll i = 0; i < sze; ++i)
			{	
				printf("%lld ",arr[i]);
			}

		printf("\n");
	}
	else
	{
		arr[0] =47;
		printf("1\n");
		for(ll i = 0 ; i < sze ; i++)
			{	
				printf("%lld ",arr[i]);
			}
		printf("\n");
	}
	

// adj.clear();


for (ll i = 0; i < 55; ++i)
{
	visited[i] = 0;
	adj[i].clear();
}


}

return 0;
}