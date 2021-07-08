// SUBGCD CC
#include<bits/stdc++.h>
using namespace std;
#define ll int
#define pb push_back    
#define mp make_pair
#define M (ll)(1e9+7)

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
    ll x;
    cin>>x;

    ll ans = 0;
    ll p = x;
    while(x--)
    {
        ll k;
        cin>>k;

        ans = __gcd(ans, k);
    }

    if(ans == 1)
        cout<<p<<"\n";
    else
        cout<<"-1\n";
}
return 0;
}