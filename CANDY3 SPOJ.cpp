// CANDY3 SPOJ
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mp make_pair
#define M (ll)(1e9+7)

int arr[26];

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

while(t--)
{
	ll sze;
	cin>>sze;

	ll sum = 0;

	for(ll i = 0; i < sze ; i++)
	{
		ll a;
		cin>>a;
		sum += a;
	}
	if(sum % sze == 0)
		cout<<"YES\n";
	else
		cout<<"NO\n";
}

return 0;

}