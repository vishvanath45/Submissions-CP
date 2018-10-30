// 888 C CF
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

string 
cin>>;

ll sze = .length();

vector<ll> v[26];

for (ll i = 0; i < 26; i++)
{
	v[i].pb(-1);
}

for (ll i = 0; i < sze; ++i)
{
	v[[i]-'a'].pb(i);
}

for (ll i = 0; i < 26; i++)
{
	v[i].pb(sze);
}

std::vector<ll> v2[26];

for (ll i = 0; i < 26; i++)
{
	for (ll j = 0; j < v[i].size()-1; j++)
	{
		v2[i].pb(v[i][j+1]-v[i][j]);
	}
}

std::vector<ll> v3;


for (int i = 0; i < 26; ++i)
{
	ll maxx =0;
	for (int j = 0; j < v2[i].size(); j++)
	{
		if(v2[i][j]>maxx)
		{
			maxx = v2[i][j];
		}
	}
	v3.pb(maxx);
}

ll mini = 100001;


for (int i = 0; i <v3.size(); ++i)
{

	if(mini > v3[i])
	{
		mini = v3[i];
	}

}

cout<<mini;

return 0;
}