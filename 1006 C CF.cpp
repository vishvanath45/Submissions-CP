// 1006 C CF
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

ll arr[sze];

ll presum[sze];
 
// presum[0]

for (ll i = 0; i < sze; ++i)
{
	cin>>arr[i];
	/* code */
}

presum[0] = arr[0];
for (ll i = 1; i < sze; ++i)
{
	presum[i] = presum[i-1]+arr[i];
}

ll postsum[sze];

postsum[sze-1]= arr[sze-1];

for (ll i = sze-2; i >=0; i--)
{
	postsum[i] = postsum[i+1]+arr[i];
}


ll maxi = -1;

for(ll i = sze-1; i >= 0 ; i--)
{	
	//cout<<presum[i]<<" "<<postsum[i]<<"\n";

	if(binary_search(presum, presum+i, postsum[i]))
	{
		maxi = max(maxi, postsum[i]);
	}
}

maxi = max((ll)0, maxi);
cout<<maxi;

return 0;
}