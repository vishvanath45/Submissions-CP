// COINS SPOJ
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mp make_pair
#define M (ll)(1e9+7)

ll arr[1000001];

ll dp( ll t)
{	
	if(t > 1000000)
	{
		ll a = t/2;
		ll b = t/3;
		ll c = t/4;
		return  dp(a) + dp(b) + dp(c);	
	}
	else if(arr[t] == -1 && t <= 1000000)
	{
		ll a = t/2;
		ll b = t/3;
		ll c = t/4;

		if(t > dp(a) + dp(b) + dp(c))
			arr[t] = t;
		else
			arr[t] = dp(a) + dp(b) + dp(c);
		return arr[t];
	}
	else if(t <= 1000000)
		return arr[t];

}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

memset(arr,-1, sizeof(arr));

arr[0] = 0;
arr[1] = 1;
arr[2] = 2;
ll t;

while(cin>>t)
{
	ll ans = dp(t);
	cout<<ans<<"\n";
}

return 0;
}