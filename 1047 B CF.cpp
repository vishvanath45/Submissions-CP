// 1047 B CF
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

ll maxi = -1;

while(t--)
{
	ll a, b;

	cin>>a>>b;

	if(maxi < a+b)
	{
		maxi = a+b;
	}
}


cout<<maxi;

return 0;
}