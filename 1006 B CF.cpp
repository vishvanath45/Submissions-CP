// 1006 B CF
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

std::vector< pair<ll, ll > > v;
for(ll i = 0 ; i < sze ; i++)
{
	cin>>arr[i];
	v.push_back( make_pair(arr[i], i));
}

sort(v.begin(), v.end() );

ll k2 = k;

ll i = v.size()-1;

ll sum =0 ;
while(k2--)
{
	sum += v[i].first;
	arr[v[i].second] = -1;
	i--;
}


cout<<sum<<"\n" ;

ll pp = 0;
ll count = 0;

for(ll i = 0; i < sze ; i++)
{
	// cout<<arr[i]<<"* ";
if(arr[i] == -1)
{	pp++;
	if(pp != k)
		{
			cout<<count+1<<" ";
			
		}
		else
		{
			cout<<count+sze-i;
		}
count = 0;

}
else
{
	count++;
}

}

// cout<<sze-last;

return 0;
}

