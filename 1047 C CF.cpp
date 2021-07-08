// 1047 C CF
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mp make_pair
#define M (ll)(1e9+7)

ll arrrrr[10000];

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

ll arr[t];

ll maxi = -1;

ll x = 1;

ll ggcd;
for (ll i = 0; i < t; i++)
{
	cin>>arr[i];

	if(x)
	{
		ggcd = __gcd(arr[i], arr[i]);
		x = 0;
	}
	else
		ggcd = __gcd(ggcd, arr[i]);
	if(arr[i] > maxi)
		maxi = arr[i];
}


for (ll i = 0; i < t; i++)
{
	arr[i] = arr[i]/ggcd;
}




ll max_pos = sqrt(maxi);


ll sieve[max_pos + 2];

for (ll i = 0; i < max_pos+2; ++i)
	sieve[i] = -1;

sieve[0] = 0;
sieve[1] = 0;


for (ll i = 0; i < max_pos +2; ++i)
{
	if(sieve[i] == -1)
	{
		for(ll j = i*i ; j < max_pos + 2 ; )
		{
			sieve[j] = 0;
			j += i;
		}
	}
}

std::vector<ll> prim;

for (ll i = 0; i < max_pos + 2; ++i)
{
	if(sieve[i] == -1)
		prim.push_back(i);
}


// for (int i = 0; i < prim.size(); ++i)
// {
// 	cout<<prim[i]<<" ";
// }


ll k = 10;

for (ll i = 0; i < t; i++)
{
	for(ll j = 0 ; j < prim.size() ; j++)
	{	
		// cout<<arr[i]<<" "<<prim[j]<<"\n";
		if(arr[i]%prim[j] == 0)
		{
			arrrrr[prim[j]]++;
		}
		while(arr[i]%prim[j] == 0)
		{
			ll k = arr[i];
			ll k2 = prim[j];
			ll k3 = k/k2;
			arr[i] = k3;
		}
	}
}

std::map<ll, ll> mapkk;

for(ll i = 0 ; i < t ; i++)
{
	if(arr[i] != 1)
	{
		mapkk[arr[i]]++;
	}
}

maxi = 0;

for(ll i = 0; i <= 10000 ; i++)
{
	if(maxi < arrrrr[i])
	{
		maxi = arrrrr[i];
	}
	// cout<<i->first<<" "<<i->second<<" \n";
}


for(auto i = mapkk.begin() ; i != mapkk.end() ; i++)
{
	maxi = max(maxi, i->second);
}

if(t - maxi <= 0 || maxi == 0)
{
	cout<<-1;
}
else
cout<<t-maxi;



return 0;
}