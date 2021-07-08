// 777 D CF
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

ll sze;

cin>>sze;

vector<string> v;

for (int i = 0; i < sze; ++i)
{
	string s;
	cin>>s;
	v.pb(s);
	/* code */
}



for(int i = sze-1 ; i >0 ; i--)
{

	string a = v[i];
	string b = v[i-1];

	ll count =0;

	if(a<b)
	{
		ll start = 0;
		ll end = b.length()-1;

		string bs="",ans="";


		while(start <= end)
		{
			ll mid = (start + end)/2;

			bs = b.substr(0, mid+1);
 	

			if(bs <= a)
			{
				start = mid+1;
				ans = bs;

			}
			else
			{
				end = mid-1;


			}

		}


		b = ans;
		v[i-1]= ans;
		
	}
}


for(int i = 0 ; i  < v.size() ; i++)
	cout<<v[i]<<"\n";
return 0;
}