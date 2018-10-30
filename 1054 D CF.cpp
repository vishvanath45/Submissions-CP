// 1054 D CF
#include<bits/stdc++.h>
#include <bitset>
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

ll sze, k;
cin>>sze>>k;

ll arr[sze];

ll bit[sze][k];
ll notbit[sze][k];


for(ll i = 0; i < sze ; i++)
	for(ll j = 0 ; j < sze ; j++)
		bit[i][j] = 0;

for(ll i = 0; i < sze ; i++)
	for(ll j = 0 ; j < sze ; j++)
		notbit[i][j] = 0;

for (ll i = 0; i < sze; ++i)
	cin>>arr[i];


string binary = bitset<50>(k).to_string(); //to binary
cout<<binary<<"\n";

unsigned long decimal = bitset<k>(binary).to_ulong();
cout<<decimal<<"\n";


// for(ll i = 0; i < sze ; i++)
// {

// }


return 0;
}