// 1041 A CF
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

ll arr[t];

for(int i = 0 ; i < t ; i++)
	cin>>arr[i];

sort(arr, arr+t);

ll ans = 0 ;


for(int i = 1 ; i < t ; i++)
{
	if(arr[i] != arr[i-1] + 1)
		ans += arr[i] - arr[i-1] - 1;
}

cout<<ans;


return 0;
}