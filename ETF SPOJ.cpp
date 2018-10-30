//ETF SPOJ

#include<bits/stdc++.h>

#define ll long long int

using namespace std;

ll fi(ll n)
{
    ll result = n;
    for(ll i=2; i*i <= n; i++)
    {
        if (n % i == 0) result -= result / i;
        while (n % i == 0) n /= i;
    }
    if (n > 1) result -= result / n;
    return result;
}

int main()
{

ll t;

scanf("%lld",&t);

ll xyz;

ll ans;

while(t--)
{
scanf("%lld",&xyz);

ans = fi(xyz);

printf("%lld\n",ans);

}



return 0;
}
