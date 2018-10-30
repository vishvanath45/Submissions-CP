// 1006 A CF
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


set<ll> st;


ll sze;
cin>>sze;

ll arr[sze];

for(ll i = 0 ; i < sze ; i++)
	{
		cin>>arr[i];
		// st.insert(arr[i]);
	}

for(ll i = 0 ; i < sze ; i++)
{
	if(arr[i]%2 == 0)
	{
			arr[i] = arr[i]-1;
	}
}


for(ll i = 0 ; i < sze ; i++)
{
	cout<<arr[i]<<" ";
}

return 0;
}