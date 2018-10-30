// 1036 B CF
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
	ll x,y,k;
	cin>>x>>y>>k;

	ll m = 0;
	if(x>y)
	{
		m += abs(x-y);
		ll pp = k-m - min(abs(x),abs(y));
		cout<<pp<<"--";
		if(pp < 0)
			cout<<-1<<"\n";
		else if(pp%2==0)
			cout<<k-m<<"\n";
		else
			cout<<k-m-1<<"\n";
	}
	else
	{	ll pp = k-m - min(abs(x),abs(y));
		m += abs(y-x);
		// cout<<pp<<"--";
		if(pp < 0)
			cout<<-1<<"\n";
		else if(pp%2==0)
			cout<<k-m<<"\n";
		else
			cout<<k-m-1<<"\n";
	}
}

return 0;
}