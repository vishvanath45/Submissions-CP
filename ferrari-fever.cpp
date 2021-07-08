// 888 B CF
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

ll n,x;

while(t--)
{

	cin>>n;

	ll sum =0 ;
	ll aa =0;
	cin>>x;

	for(ll i =0 ; i < n; i++)
	{
		cin>>aa;
		sum+=aa;

	}

	if(sum%x == 0)
	{
		cout<<"Yes\n";
	}
	else
	{
		cout<<"No\n";
	}




}

return 0;
}