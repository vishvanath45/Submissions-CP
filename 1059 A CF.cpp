// 1059 A CF
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
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


ll n, l , a;

cin>>n>>l>>a;
ll sum = 0;

ll p[n+2];
ll q[n+2];
p[0] = 0;
q[0] = 0;

for (ll i = 1; i <= n; i++)
{
    ll  b, c;

    cin>>b>>c;

    p[i] = b;
    q[i] = b+c;
    /* code */
}
p[n+1] = l;
q[n+1] = 0;


ll ans = 0;
for(ll i = 1; i <= n+1 ; i++)
{
    ll k = p[i] - q[i-1];
    ans += k/a;

}

if(n == 0)
{
    cout<<l/a;
    return 0;
}


cout<<ans;

return 0;
}