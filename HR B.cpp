// HR B
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mp make_pair
#define M (ll)(1e9+7)
#include<string>


int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

ll nodes, edges;

cin>>nodes>>edges;

std::vector< ll > v[nodes];

ll arr[nodes];

for (ll i = 0; i < nodes; ++i)
{
	cin>>arr[i];
}

for (ll i = 0; i < edges; ++i)
{
	ll a,b;

	cin>>a>>b;

	v[a-1].push_back(b-1);
	v[b-1].push_back(a-1);
}


ll max_sum = -1;

ll max_s_id = -1;

for (ll i = 0; i < nodes; i++ )
{
	ll sum = 0;

	for(ll j = 0 ; j < v[i].size() ; j++)
	{
		sum+=arr[v[i][j]];
	}

	sum += arr[i];

	if(sum > max_sum)
	{
		max_s_id = i;
		max_sum = sum;
	}
}

set<ll> st;

// max_sum += arr[max_s_id];

for (ll i = 0; i < nodes; ++i)
{
	st.insert(arr[i]);
}


// cout<<max_sum <<"\n";

for(ll j = 0 ; j < v[max_s_id].size() ; j++)
{
	//cout<<v[max_s_id][j]<<" -- ";
	st.erase(arr[v[max_s_id][j]]);
}

st.erase(arr[max_s_id]);

if(st.size() > 0)
{
auto it = st.rbegin();

cout<<max_sum + *it;
}
else
cout<<max_sum;

return 0;
}