// DP01 REC CC

#include<bits/stdc++.h>

#define ll long long int
using namespace std;

ll DP[10000001];

ll mod = 1000000009;



int main()
{

    DP[1]=1;
    DP[2]=10;
    DP[3]=25;

    ll t;

   scanf("%lld",&t);

    ll pkp;


    for(ll t =4 ; t<10000005;t++)
    {
    DP[t] = (DP[t-2] + (4*((t-2)%mod)*(t-2)%mod)%mod + (10*(t%mod)-10)%mod)%mod;

    }

    for(ll i =0 ;i < t; i++)
    {
        scanf("%lld",&pkp);
        ll ans = DP[pkp];

        printf("%lld\n",ans);


    }
    return 0;
}
