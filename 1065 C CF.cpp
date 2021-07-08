// 1065 C CF
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

ll sze, k;

cin>>sze>>k;

ll arr[sze];

for(ll i = 0 ; i < sze ; i++)
	cin>>arr[i];

sort(arr, arr+sze);


ll begin = arr[0];

ll pp = 0;

ll kk = 0;

std::vector<ll> v;

for(ll i = 0 ; i < sze ; i++)
{
	if(arr[i] != begin)
	{
		ll add = (arr[i]- begin)*(sze-i);
		for(ll k = 0 ; k < arr[i] - begin ; k++)
			v.push_back(sze-i);
		begin = arr[i];	
	}
}

ll sum = 0;
// ll xx =0 ;
// for(ll i = 0; i < v.size(); i++)
// {
// 	sum+= v[i];
// 	cout<<v[i]<<" "<<sum<<"\n";
// 	if(sum >= k )
// 	{
		
// 		xx += (sum+k-1)/k;
			
// 		sum=0;
// 	}

// }

// if(sum > 0)
// {
// 	xx++;
// }

// cout<<xx;

sum = 0;
ll yy  =0 ;
for(ll i = v.size()-1; i >= 0; i--)
{
	sum+= v[i];
	if(sum >= k )
	{
		yy += (sum+k-1)/k;
		sum=0;
	}
}

if(sum > 0)
{
	yy++;
}

cout<<yy;

// cout<<min(xx,yy);

return 0;

}	