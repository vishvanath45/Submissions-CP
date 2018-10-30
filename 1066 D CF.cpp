// 1066 D CF
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mp make_pair
#define M (ll)(1e9+7)

ll proxi[100000];

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

ll sze, m, k;

cin>>sze>>m>>k;

ll arr[sze];
for(ll i = 0 ;i<sze ; i++)
cin>>arr[i];

ll sum =0 ;

ll ans =0 ;

for (int i = sze-1; i >= 0; i--)
{

	sum += arr[i];
	ans++;

	if(sum > k)
	{
		ans--;
		i++;
		sum = 0;
		m--;
	}
	else if(sum == k)
	{
		sum = 0;
		m--;
	}

	if(m == 0)
	{
		cout<<ans;
		return 0;

	}

}


cout<<ans;


return 0;
}