// RSGAME CC
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



ll arr[10009];

arr[0] = 0;
arr[1] = 0;
arr[2] = 0;
arr[3] = 1;

for(int i = 4 ; i < 10002 ; i++)
{
 	double pp = sqrt(i);

 	if(pp == floor(pp))
 	{
 		ll kk = sqrt(i);
 		arr[i] = (arr[kk]+1)%2;
 	}
 	else
 		arr[i] = (arr[i-1]+1)%2;
}

ll tt;

sfl(tt);

while(tt--)
{
	ll a;

	sfl(a);

	if(arr[a] == 0)
		cout<<"GANDEY\n";
	else
		cout<<"GHATAK\n";
}

return 0;
}

