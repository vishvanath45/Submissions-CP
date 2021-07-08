// 1041 C CF
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

set < pair<ll, ll> > st;

ll n, m, k;
cin>>n>>m>>k;

ll arr[n];

for(ll i = 0 ; i < n ; i++)
{
	cin>>arr[i];
	st.insert(make_pair(arr[i], i));
}

ll day = 0 ;
ll ans[n];
while(!st.empty())
{
	day +=1;

	ll pp  =st.begin()->second;
	ans[pp] = day;
	st.erase(st.begin());

	while(1)
	{
		auto it = st.lower_bound(make_pair(arr[pp]+1+k,0));

		if(it == st.end())
			break;
		pp = it->second;
		st.erase(it);
		ans[pp] = day;
	} 
}

cout<<day<<"\n";

for(ll i = 0 ; i < n ; i++)
cout<<ans[i]<<" ";



return 0;
}
