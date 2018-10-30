// 1064 C CF
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

map<char,ll> mp;

ll sze;

cin>>sze;

string s;

cin>>s;


for (int i = 0; i < sze; ++i)
{
    mp[s[i]]++;
    /* code */
}

ll ans = 0;


for(auto i = mp.begin() ; i != mp.end() ; i++)
{
    ll a = i->second;

    for(int j = 0 ; j < a ; j++)
        {
            char ch = i->first;
            cout<<ch;
        }
    // ans += a*(a+1)/2;
}

// cout<<ans;


return 0;
}