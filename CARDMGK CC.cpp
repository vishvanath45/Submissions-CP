// CARDMGK CC
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define Endl endl
#define mod  1000000007
#define mkp make_pair
#define pb push_back
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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

ll t;
cin>>t;

while(t--)
{
ll sze;
cin>>sze;

ll arr[sze];

for(ll i = 0; i < sze ; i++)
	cin>>arr[i];


ll count = 0;

for (ll i = 0; i < sze-1; ++i)
{
	if(arr[i] <= arr[i+1])
	{
		//
	}
	else
	{
		count++;
	}
}

if(count > 1)
{
	cout<<"NO\n";
}
else if (count == 1)
{
	if(arr[0] >= arr[sze-1])
	{
		cout<<"YES\n";
	}
	else
	{
		cout<<"NO\n";
	}
}
else if(count == 0)
{
	cout<<"YES\n";
}

}

return 0;
}