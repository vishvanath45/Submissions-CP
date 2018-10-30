// QUALPREL CC
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

ll t;

cin>>t;

while(t--)
{
	ll sze, t;
	cin>>sze>>t;

	ll arr[sze];

	for(ll i = 0 ; i <sze ; i++)
		cin>>arr[i];

	sort(arr, arr+sze, greater<ll>());
	
	ll value = arr[t-1];
	ll ans = t; 

	for(ll i = t-1 ; i < sze ; i++)
	{
		if(arr[i] == value)
		{
			ans = i+1;
		}
		else
		{
			break;
		}
	}

	cout<<ans<<"\n";
}

return 0;
}