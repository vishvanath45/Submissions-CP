// 879 B CF
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


ll n,k;
cin>>n>>k;

ll arr[3*n];

for (ll i = 0; i < n; ++i)
{
	cin>>arr[i];
	arr[i+n]=arr[i];
	arr[i+2*n]=arr[i];
	/* code */
}

ll times =0;

ll currpow = arr[0];
ll currmaxrow = 1;
for (ll i = 1; i < 3*n; ++i)
{

if(arr[i]<currpow)
{
	currmaxrow++;
	if(currmaxrow>=k+1|| currmaxrow>=n)
	{
		cout<<currpow;
		return 0;

	}
}
else
{
	currpow = arr[i];
	currmaxrow =1;
}


}

return 0;
}








