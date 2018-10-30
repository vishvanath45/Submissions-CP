// 1066 E CF
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mp make_pair
#define M (ll)(1e9+7)
#define mod 998244353

char a[200009];
char b[200009];
ll c[200009];
ll pwr[200050];

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

ll szea, szeb;

cin>>szea>>szeb;

string sa, sb;

cin>>sa>>sb;

pwr[0] = 1;

for(ll i = 1; i < 200050; i++)
{
	pwr[i] = (2*(pwr[i-1]))%mod;
}


for(ll i = 0; i < 200009 ; i++)
{
	a[i] = '0';
	b[i] = '0';
	c[i] = 0;
}

ll xx = 200008;
for(ll i = szea-1 ; i >= 0 ; i--)
{
	a[xx] = sa[i];
	xx--;
}

xx = 200008;
for(ll i = szeb-1 ; i >= 0 ; i--)
{
	b[xx] = sb[i];
	xx--;
}

ll ans = 0;

	ll flag = 1;
	for(ll i = 0; i < 200009 ;i++)
	{
		if(b[i] == '1')
		{
			flag = 0;
		}
	}

	if(flag)
	{
		cout<<ans;
		return 0;
	}

	ll counter = 0;

	for(ll i = 0 ; i < 200009 ; i++)
	{
		if(b[i] == '1')
		{
			counter++;
		}
		c[i]= counter;
	}

	for(ll i = 200008; i >= 0 ; i--)
	{
		if(a[i] == '1')
		{
			ans+= (c[i]*pwr[200008-i])%mod;
			ans = ans%mod;

		}
	}


cout<<ans;

return 0;
}