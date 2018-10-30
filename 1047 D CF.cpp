// 1047 D CF
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

	ll x,y;

	cin>>x>>y;

	ll ans;

	if(x>3 && y>3)
	{
		ans = x*y;
		// return 0;
	}
	else if( (x>3 && y>1) || (x>1 && y>3))
	{
		ans = x*y;
		// return 0;
	}
	else if(x>3 && y==1)
	{
		if(x == 4)
			ans = 2;
		else if(x == 5)
			ans = 4;
		else if(x >= 6)
			ans = x;

		// cout<<ans<<"\n";
		// return 0;
	}
	else if(y>3 && x==1)
	{
		if(y == 4)
			ans = 2;
		else if(y == 5)
			ans = 4;
		else if(y >= 6)
			ans = y;

		// cout<<ans<<"\n";
		// return 0;
	}
	else if(x == 3 && y == 3)
	{
		ans = 8;
	}
	else if((x == 3 && y == 2)||(y == 3 && x == 2))
	{
		ans = 4;
	}
	else if((x == 3 && y == 1)||(y == 3 && x == 1))
	{
		ans = 0;
	}
	else if((x <= 2 && y <= 2))
	{
		ans = 0;
	}
	else
	{
		ans = 0;
	}
	cout<<ans<<"\n";

 return 0;
}