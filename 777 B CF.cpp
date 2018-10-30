// 777 B CF
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

string sh, mor;
cin>>sh>>mor;

map<ll, ll> mp;

for(ll i = 0; i < sze ; i++)
{
	ll kk = mor[i]-'0';
	mp[kk]++;
}

// min for mor;
ll minmor = 0;

for(int i = 0 ; i < sze ; i++)
{
	ll kk = sh[i] - '0';
	ll flag = 0;

	for(int j = kk ; j <10 ;j++)
	{
		if(mp[j] > 0)
		{
			mp[j]--;
			flag = 1;
			break;
		}
	}
	

	if(flag == 0)
		{
			minmor++;
			for(int j = 0 ; j < kk ; j++)
			{
				if(mp[j] > 0)
				{
					mp[j]--;
					break;
				}
			}
		}

}

// max for sherlock

mp.clear();


for(ll i = 0; i < sze ; i++)
{
	ll kk = mor[i]-'0';
	mp[kk]++;
}


ll maxsh = 0;

for(int i = 0 ; i < sze ; i++)
{
	ll kk = sh[i] - '0';

	ll flag = 0;

	for(int j = kk+1 ; j <10 ;j++)
	{
	if(mp[j] > 0)
		{
			mp[j]--;
			flag = 1;
			maxsh++;
			break;
		}
	
	}
	if(flag == 0)
		{	
			for(int j = 0 ; j <= kk ; j++)
			{
				if(mp[j] > 0)
				{
					mp[j]--;
					break;
				}
			}
		}

}


cout<<minmor<<"\n"<<maxsh<<"\n";

return 0;
}