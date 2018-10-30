// 501 B CF
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

for (ll i = 0; i < t; ++i)
{
	cin>>arr[i];
}

ll lmin=0;
ll lmax=0;


for (ll i = 1; i < t-1; i++)
{
	if(arr[i]>arr[i-1]&&arr[i]>arr[i+1])
	{
		lmin++;
	}
	else if(arr[i]<arr[i-1]&&arr[i]<arr[i+1])
	{
		lmax++;
	}
}


cout<<lmax+lmin;

return 0;
}
