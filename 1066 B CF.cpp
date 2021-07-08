// 1066 B CF
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mp make_pair
#define M (ll)(1e9+7)

ll proxi[100000];

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

ll sze, r;
cin>>sze>>r;
ll arr[sze];

for(ll i = 0; i <sze ; i++)
cin>>arr[i];

ll counter = 0;

for(ll i = 0 ; i < sze ; i++)
{
	if(arr[i] == 1)
	{
		counter++;

		ll c1 = 0;
		ll c2 = 0;

		proxi[i] -=1;

		for(ll j = i-1 ; j >=0; j--)
		{

			if(c1 == r-1)
				break;

			c1++;
			proxi[j]-=1;


		}

		for(ll j = i+1 ; j < sze ; j++)
		{
			if(c2 == r-1)
				break;
			
			c2++;
			proxi[j] -=1;

			
		}

	}
}

ll ans = 0;
ll flag = 0;

// for (int i = 0; i < sze; ++i)
// {
// 	cout<<proxi[i]<<" ";
// }
// cout<<"\n";


for (ll i = 0; i < sze; ++i)
{
	if(proxi[i] == 0)
	{
		cout<<-1;
		return 0;
	}
}


for(ll i = 0 ; i < sze ; i++)
{
	flag = 0;

	if(arr[i] == 1)
	{
		ll c1 = 0;
		ll c2 = 0;

		if(proxi[i] ==-1)
			flag = 1;

		for(ll j = i-1 ; j >=0; j--)
		{
			if(c1 == r-1)
				break;
			c1++;
			if(proxi[j] ==-1)
				flag = 1;

		}

		for(ll j = i+1 ; j < sze ; j++)
		{
			if(c2 == r-1)
				break;
			c2++;
			if(proxi[j] ==-1)
				flag = 1;

		}

		if(flag == 0)
		{

		ans++;

		ll c1 = 0;
		ll c2 = 0;

		proxi[i]+=1;
		for(ll j = i-1 ; j >=0; j--)
		{
			if(c1 == r-1)
				break;
			c1++;
			proxi[j]+=1;

		}

		for(ll j = i+1 ; j < sze ; j++)
		{
			if(c2 == r-1)
				break;
			c2++;

			proxi[j]+=1;

		}

		}


	}


// for (int i = 0; i < sze; ++i)
// {
// 	cout<<proxi[i]<<" ";
// }
// cout<<"\n";

}

cout<<counter -ans<<"\n";

return 0;
}