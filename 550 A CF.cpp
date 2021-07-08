// 550 A CF
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mp make_pair
#define M (ll)(1e9+7)
#define debug(x) printf("here %d\n",x);

ll recursive(ll arr[],ll l, ll r)
{
	cout<<"here\n";
	if(l==r&&arr[l]==0)
		return 0;
	if(l==r)
		return 1;

	ll mini = arr[l];

	for (ll i = l; i<=r; i++)
	{
		if(arr[i]<mini)
			mini = arr[i];
		/* code */
	}
	cout<<mini<<"\n";
	ll mini_count =0;
	for (ll i = l; i <=r; i++)
	{
		/* code */
		if(arr[i]==mini)
			mini_count++;
	}
	cout<<mini_count<<"\n\n";

ll to_send =0;


if(mini_count>=mini)
{
	to_send+=mini;

for (ll i = l; i  <=r; i++)
{
	arr[i]-=mini;
	/* code */
}

}
else
{
	to_send+=mini_count;
	for (ll i = l; i<=r; i++)
{
	arr[i]-=mini;
	/* code */
}

}

ll low =-1;
ll high=-1;
for (ll i = l; i <=r; i++)
{
	if(arr[i]==0)
	{	
		if(high!=-1)
		{
			to_send+=recursive(arr,low+1,high);
			// cout<<low+1<<" "<<high<<"\n";
			high=-1;
		}
		low =i;
	}
	else if(arr[i]>0)
	{
		high=i;
	}
}

if(high!=-1)
{
	// cout<<low+1<<" "<<high<<"\n";
	to_send+=recursive(arr,low+1,high);
}

// cout<<to_send<<"*\n";
return to_send;

}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);

ll t;
cin>>t;

ll arr[t];

for (ll i = 0; i < t; ++i)
{
	cin>>arr[i];
}

ll count = recursive(arr,0,t-1);

cout<<count;
return 0;
}
