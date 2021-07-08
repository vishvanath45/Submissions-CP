// AE00 SPOJ
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mp make_pair
#define M (ll)(1e9+7)

int arr[26];

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


ll n;
cin>>n;

ll ans = 0;


ans+=sqrt(n);

for(ll i=1;i<=sqrt(n);i++)
    for(ll j=i+1;i*j<=n;j++)
        ans++;


cout<<ans;

return 0;
}