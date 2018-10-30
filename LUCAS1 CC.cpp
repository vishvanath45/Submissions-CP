// LUCAS1 CC
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mp make_pair
#define M (ll)(1e9+7)

ll done[26];

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
	string s;
	cin>>s;
	ll arr[26];

	for(ll i = 0; i < 26 ; i++)
	arr[i] = 0;

	for(ll i = 0; i < s.length() ; i++)
		arr[s[i]-'a']++;

	std::vector< ll > v;

	for (ll i = 0; i < 26; ++i)
	{
		if(arr[i] > 0)
		{
			v.push_back(arr[i]);
		}
	}

	sort(v.begin(), v.end());

	ll ls[26];

	ls[0] = 2;
	ls[1] = 1;

	for(int i = 2; i < 100 ; i++)
	{
		ls[i] = ls[i-1]+ls[i-2];
	}

	ll flag = 0;




	if(v[0] == 1 && v[1] == 2)
	{

		ll a = v[0];
		ll b = v[1];
		v[0] = b;
		v[1] = a;

	}
	else
	{


	}

} 




return 0;
}