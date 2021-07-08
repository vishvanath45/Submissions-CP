// HR A
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mp make_pair
#define M (ll)(1e9+7)
#include<string>


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

ll hash[101];


for(ll i = 0 ; i<=100 ; i++ )
	hash[i] = 0;


for (ll i = 0; i < t; i++)
{
	cin>>arr[i];
	hash[arr[i]]++;
}

ll unque = 0;
ll mt2 = 0;


for (int i = 1; i <= 100; ++i)
{
	if(hash[i] == 1)
		unque++;
	else if(hash[i] > 2)
		mt2++;
}

string ans;
if(unque%2 ==1 && mt2 == 0)
{
	cout<<"NO\n";
	return 0;
}
else
{
	

	if(unque%2 == 0)
	{

	ll uc = unque/2;

	for (int i = 0; i < t; ++i)
	{
		/* code */
		if(hash[arr[i]] == 1)
		{
			if(uc > 0)
			{
				ans += 'A';
				uc--;
			}
			else
				ans+='B';

		}
		else
			ans+='A';
	}
	}
	else
	{

ll x = -1;
ll k;

ll uc = unque/2;
	for (int i = 0; i < t; ++i)
	{

		// cout<<uc<<" 000 ";

		if(hash[arr[i]] == 1)
		{
			if(uc > 0)
			{
				ans += 'A';
				uc--;
			}
			else
				ans+='B';

		}
		else
		{
			if(hash[arr[i]] > 2 && x == -1)
			{
				ans+='A';
				x = arr[i];
			}
			else if(x == arr[i])
			{
				ans +='B';
			}
			else
			ans+='A';
		}


	}



}
}

cout<<"YES\n";

cout<<ans;

return 0;
}