// FASHION SPOJ
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
	ll sze;
	cin>>sze;
	ll arr[sze];
	ll arr2[sze];

	for (int i = 0; i < sze; ++i)
	{
		cin>>arr[i];
	}
	for (int i = 0; i < sze; ++i)
	{
		cin>>arr2[i];
	}

sort(arr, arr+sze);
sort(arr2, arr2+sze);

ll sum = 0;

for (int i = 0; i < sze; ++i)
{
	sum += arr[i] * arr2[i];
}

cout<<sum<<"\n";


}

return 0;
}