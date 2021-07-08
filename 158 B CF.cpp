// 158 B CF
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

ll sze;

cin>>sze;

ll arr[5];

for(int i = 0; i < 5 ; i++)
	arr[i] = 0;


for(int i = 0; i < sze ; i++)
{
	ll k;
	cin>>k;
	arr[k]++;
}

ll ans = 0;
ans+= arr[4];

ll a = arr[3];
ll b = arr[1];

if(a < b)
{
	ans+= arr[3];
	arr[1] -= arr[3];
	arr[3] = 0;
}
else
{
	ans += arr[1];
	arr[3] -= arr[1];
	ans += arr[3];
	arr[3] = 0;
	arr[1] = 0;
}




if(arr[2]%2 == 0)
{
	ans += arr[2]/2;
}
else
{
		ans+= (arr[2]+1)/2;

		arr[1] -= min((ll)2, arr[1]);
}


ans += (arr[1]+3)/4;

cout<<ans;

return 0;
}