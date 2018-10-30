// LEDIV CC
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
#define MAX 1000000000000000000 //10^18
#define MIN -1000000000000000000

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

ll t;
sfl(t);

while(t--)
{
	ll sum;
	sfl(sum);
	ll k;
	sfl(k);

	ll arr[k];

	if((k*(k+1))/2 > sum)
		{
			cout<<"-1\n";
			continue;
		}

	if(k%2 == 0)
	{
		ll avg = sum/k;

		for (ll i = 0; i < k; ++i)
			arr[i] = avg;

		ll sumnow = avg*k;
		ll rem = sum - sumnow;

		for (ll i = 0; i < k/2; ++i)
			{
				arr[i] -= (k/2-i);
			}

		for (ll i = k/2; i < k; ++i)
			{
				arr[i] += i-(k/2)+1;
			}

		// for (ll i = 0; i < k; ++i)
		// {
		// 	cout<<arr[i]<<" ";
		// }
		// 	cout<<rem<<"\n";
		while(rem>0)
		{

			if(rem > 0)
			for (ll i = k/2-1; i >=0 ; i--)
			{
				if(rem > 0)
				{
					arr[i]++;
					rem--;
				}
			}

			if(rem > 0)
			for (ll i = k-1; i >= k/2; i--)
			{
				if(rem > 0)
				{
					arr[i]++;
					rem--;
				}
			}

		}

		// for (ll i = 0; i < k; ++i)
		// {
		// 	cout<<arr[i]<<" ";
		// }

	}
	else
	{
		ll avg = sum/k;

		for (ll i = 0; i < k; ++i)
			arr[i] = avg;

		ll mid = k/2;

		for (ll i = k/2-1; i >=0 ; i--)
		{
			arr[i] = arr[i+1]-1;
		}
		for (ll i = k/2+1; i < k ; i++)
		{
			arr[i] = arr[i-1]+1;
		}
		ll sumnow = avg*k;

		ll rem = sum - sumnow;

		while(rem>0)
		{
			for(ll i = k-1; i >= 0; i--)
			{
				if(rem > 0)
				{
					arr[i] += 1;
					rem--;
				}
			}
		}

	// for (ll i = 0; i < k; ++i)
	// 	{
	// 		cout<<arr[i]<<" ";
	// 	}
	}

	ll ansss =1;

	for (ll i = 0; i < k; ++i)
	{
		// ansss = (ansss*arr[i])%mod;
		// ansss = (ansss*(arr[i]-1))%mod;

		ansss = (ansss%mod * ((arr[i]*arr[i]) - arr[i])%mod)%mod;
	}
	cout<<ansss%mod<<"\n";

}


return 0;
}
