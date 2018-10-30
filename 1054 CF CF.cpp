// 1054 CF CF
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define Endl endl
#define mod  1000000007
#define mkp make_pair
#define pb push_back
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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

ll sze;

cin>>sze;

ll l[sze];
ll r[sze];

for (ll i = 0; i < sze; ++i)
	cin>>l[i];

for (ll i = 0; i < sze; ++i)
	cin>>r[i];


ll flag = 0;

ll d[sze];

for (ll i = 0; i < sze; ++i)
{
	d[i] = l[i]+r[i];

	if(l[i] == r[i] && l[i] == 0)
		flag = 1;
}

if(flag == 0)
{
	cout<<"NO\n";
	return 0;
}

if(l[0] != 0 || r[sze-1] != 0)
{
	cout<<"NO\n";
	return 0;
}


for(ll i = 0 ; i < sze ; i++)
{
	if(l[i] > i)
	{
		cout<<"NO\n";
		return 0;
	}
}

for(ll i = 0 ; i < sze ; i++)
{
	if(r[i] > sze - i -1)
	{
		cout<<"NO\n";
		return 0;
	}
}


vector<pair<ll,ll> > v;

for (ll i = 0; i < sze; ++i)
{
	v.push_back(mkp(d[i],i));
}

sort(v.begin(), v.end());


ll lol = sze+1;

ll ans[sze];

ll last = -1;

for(ll i = 0 ; i < v.size() ; i++)
{
	if(v[i].first == last)
	{
		ans[v[i].second] = lol;
	}
	else
	{
		lol--;
		ans[v[i].second] = lol;
		last = v[i].first;
	}
}


ll prol[sze];

ll pror[sze];

for(ll i = 0; i < sze ; i++)
{
	ll count = 0;
	for(ll j = i+1 ; j < sze ; j++)
	{
		if(ans[i] < ans[j])
			count++;
	}
	pror[i] = count;
}

for(ll i = 0; i < sze ; i++)
{
	ll count = 0;
	for(ll j = 0 ; j < i ; j++)
	{
		if(ans[i] < ans[j])
			count++;
	}
	prol[i] = count;
}


ll flaga =1;
ll flagb =1;

for (ll i = 0; i < sze; ++i)
{
	if(prol[i] != l[i])
		flaga = 0;
	if(pror[i] != r[i])
		flagb = 0;
}

if(flaga + flagb < 2)
{
	cout<<"NO\n";
	return 0;
}


cout<<"YES\n";
for(ll i = 0 ; i < sze ; i++)
cout<<ans[i]<<" ";

return 0;
}
