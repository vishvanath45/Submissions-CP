// HE NITS C
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back	
#define mp make_pair
#define M (ll)(1e9+7)

ll arr[1000009];

ll modular_pow(ll base, ll exponent)
{
    ll result = 1;
    while (exponent > 0)
    {
        if (exponent % 2 == 1)
            result = (result * base) % M;
        exponent = exponent >> 1;
        base = (base * base) % M;
    }
    return result;
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
	ll a, b, c;

	cin>>a;

	b = modular_pow((ll)3, a);

	if(a%2 == 0)
	{
		b+=1;
	}
	else
	{
		b-=1;
	}

	b = b/2;

	b += (a*modular_pow((ll)7, a))%M;

	cout<<b<<"\n";

}


return 0;
}
 