// CRAWA CC
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define Endl endl
#define mod  1000000007
#define mkp make_pair
#define pb push_back
#define sfl(n) scanf("%lld",&n)
#define pfl(n) printf("%lld\n",n)
#define sf(n) scanf("%d",&n)
#define pf(n) printf("%d\n",n)
ll dx[] = {1,1,0,-1,-1,-1,0,1};
ll dy[] = {0,-1,-1,-1,0,1,1,1};
ll dxx[] = {1,-1,0,0};
ll dyy[] = {0,0,-1,1};
bool isvalid(ll x,ll y,ll n,ll m){
    return (x>=0&&x<n&&y>=0&&y<m);
}
ll modexpo(ll x,ll y){if(y==0)return 1;if(y%2){ll viky=modexpo(x,y/2);
return (((x*viky)%mod)*viky)%mod;}else{ll viky=modexpo(x,y/2);return (viky*viky)%mod;
}}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);

ll t;

sfl(t);

while(t--)
{
	ll x, y;

	sfl(x);
	sfl(y);

ll in = 0;

	ll yu,yd, xl,xr;

	 
	if(y%2 == 0)
	{
		if(y > 0 )
		{
			xl = (-1)*y;
			xr = y-1;

			if(x<=xr && x>=xl)
				in = 1;
		}
		else
		{
			xl = (-1)*y;
			xr = abs(y)+1;

			if(x<=xr && x>=xl)
				in = 1;
		}
	}


	if(x>=0)
	{
		if(x%2 == 1)
		{
			yu = x+1;
			yd = (-1)*x+1;

			if(y>=yd && y <= yu)
				in = 1;
		}
	}
	else if(x<0)
	{
		if(x%2 == 0)
		{
			yu = abs(x);
			yd = x;

			if(y>=yd && y <= yu)
				in = 1;			
		}
	}

	if(in)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;

}




// vector< pair<ll, ll> > v;


// ll x = 0, y = 0;

// ll count = 0;

// v.pb(mkp(x,y));

// while((x < 1e9+7 && x > (-1)*(1e9+7)) || (y > (-1)*(1e9+7) && y < 1e9+7))
// {
// 	count+=1;
// 	x +=count;
// 	v.pb(mkp(x, y));

// 	count+=1;
// 	y += count;
// 	v.pb(mkp(x,y));

// 	count+=1;
// 	x += -1*(count);
// 	v.pb(mkp(x,y));

// 	count+=1;
// 	y += -1*(count);
// 	v.pb(mkp(x,y));

// 	if(count > 10000)
// 		break;
// }

// for (int i = 0; i < v.size(); ++i)
// {
// 	/* code */
// 	cout<<v[i].first<<" "<<v[i].second<<"\n";
// }
// cout<<v.size();

return 0;
}
