// EXTRAN CC

/*
4
5
45 42 46 48 47
3
7 7 8
8
12 156 157 158 159 160 161 162
4
8 7 10 6
*/

#include<bits/stdc++.h>

#define ll long long int
using namespace std;

int main()
{
	ll t;
	cin>>t;

	while(t--)
	{
	ll sze;
	cin>>sze;

	ll arr[sze];

	for(ll i =0;i<sze;i++)
		cin>>arr[i];

	sort(arr,arr+sze);

	ll ans=0;

	for(ll i=0;i<sze-1;i++)
	{
		if((arr[i]==arr[i+1]))
		{
			ans=arr[i];
			break;
		}
		else if(arr[i+1]!=arr[i]+1)
		{
			if(i==0)
				{ans=arr[i];
					break;
				}
			else
				{ans=arr[i+1];
					break;
				}

		}
	}

	cout<<ans<<"\n";



}


return 0;

}
