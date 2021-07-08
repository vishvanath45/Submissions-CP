// 1015 C CF
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

ll m;
ll cap;

cin>>m>>cap;

ll os[m], cs[m];

std::vector<ll> saving;

ll totalsze = 0;
ll maxcompress =0;

for(ll i = 0 ; i < m ; i++)
{
	ll a, b;
	cin>>a>>b;
	os[i]=a;
	cs[i]=b;
	totalsze += a;
	maxcompress += b;
	saving.push_back(a-b);
}

if(maxcompress > cap )
{
	cout<<-1;
	return 0;
}
else if(maxcompress == cap)
{
	cout<<m;
	return 0;
}

sort(saving.begin(), saving.end());

ll ans = 0;

if(totalsze <= cap)
{
	cout<<ans;
	return 0;
}

for(ll i = saving.size()-1; i >=0 ; i--)
{
	totalsze = totalsze - saving[i];
	ans++;

if(totalsze <= cap)
{
	cout<<ans;
	return 0;
}

}

return 0;

}

