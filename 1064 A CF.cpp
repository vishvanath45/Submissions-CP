// 1064 A CF
#include<bits/stdc++.h>
using namespace std;
#define ll int
#define pb push_back    
#define mp make_pair
#define M (ll)(1e9+7)

ll visited[511];
vector<pair<ll,ll> >v[511];
void chichi(){
    for(ll i=0;i<511;i++){
        visited[i] = 0;
    }
}

void dfs(ll s){
    visited[s] = 1;
    for(ll i=0;i<v[s].size();i++){
        if(!visited[v[s][i].first]){
            dfs(v[s][i].first);
        }
    }
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


ll arr[3];

for(int i = 0; i < 3 ; i++)
	cin>>arr[i];

sort(arr, arr+3);

ll ans = 0;

ans = max( arr[2] - (arr[0]+arr[1])+1, ans);

cout<<ans;


return 0;
}