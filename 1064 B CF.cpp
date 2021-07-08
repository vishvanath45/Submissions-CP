// 1064 B CF
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

ll t;

cin>>t;

ll i ;

for( i = 0 ; i <= t ; i ++)
{
    ll a = i;
    ll count = 0;
    for(ll p = 0 ; p <= a ; p++)
    {
        if( (a^p) == (a-p) )
            count++;
    }
    cout<<a<<" "<<count<<"\n";
}

return 0;
}