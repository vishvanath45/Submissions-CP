// PRGIFT CC
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

while(t--)
{
    ll sze, b;

    cin>>sze>>b;

    ll arr[sze];

    for (int i = 0; i < sze; ++i)
        cin>>arr[i];

    ll count = 0 ;

    for(int j = 0 ; j < sze ; j++)
    {
        if(arr[j]%2 == 0)
            count++;
    }

    if(b != 0)
    {
        if(count >= b)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    else
    {
        if(count == sze)
            cout<<"NO\n";
        else
            cout<<"YES\n";
    }
}


return 0;
}