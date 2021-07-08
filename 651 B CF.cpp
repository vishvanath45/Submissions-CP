// 651 B CF

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mp make_pair
int main()
{

#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif


ll t;

cin>>t;

ll arr[t+1];
ll count[t+5]={0};

arr[0]=0;

for (ll i = 1; i < t+1; ++i)
{
	cin>>arr[i];
}

for (ll i = t; i >0; i--)
{
	count[arr[i]]+=count[arr[i]+1]+1;

	/* code */
}


ll maxi =0;
for (ll i = 1; i <=t; i++)
{
	// cout<<count[i]<<" ";
	if(count[i]>maxi)
		maxi = count[i];
	/* code */
}
cout<<t-maxi;

return 0;
}