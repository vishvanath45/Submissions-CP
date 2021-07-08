// cs academy 54
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

ll n,k;

cin>>n>>k;
ll arr[n];

for (ll i = 0; i < n; ++i)
{
	cin>>arr[i];

}


ll i =0;

ll mini = arr[0];
ll mini_index = 0;

ll flag =0;

for (ll j = 1; (j <=k) &&((i+j)<n) ; j++)
{
	/* code */
	if(arr[i+j] <=mini)
	{
		mini = arr[i+j];
		mini_index = i+j;
		flag =1;
	}
}


if(flag&&arr[i]!=mini)
{

	ll mini_inde_value = arr[mini_index];

	ll pkp = arr[i];
	ll ipos = i;

	for (ll h = 0; h < n; h++)
	{
		/* code */
		if(h == ipos)
		{
			arr[h]=mini_inde_value;
		}
		else if(h == mini_index)
		{
			arr[h]=pkp;
		}

	}



for (ll i = 0; i < n; ++i)
{
	cout<<arr[i]<<" ";
}


return 0;
}


for(ll i = 1 ; i < n - k ; i++)
{
	// cout<<arr[i]<<" "<<arr[i+k]<<"\n";
	if(arr[i]>arr[i+k])
	{
		swap(arr[i],arr[i+k]);
		break;
	}
}




for (ll i = 0; i < n; ++i)
{
	cout<<arr[i]<<" ";
}


return 0;
}
