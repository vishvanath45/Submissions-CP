// ALTARAY CC
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mp make_pair
#define M (ll)(1e9+7)

int main()
{
	int t;
	cin>>t;

	while(t--)
	{
		int k;
		cin>>k;

		int arr[k];
		for(int i = 0; i < k ; i++)
			cin>>arr[i];
		int dp[k];

		dp[k-1]=1;

		for(int i = k-2 ; i>=0 ; i--)
		{
			if((arr[i]>=0 && arr[i+1] <0)||(arr[i]<0 && arr[i+1]>=0))
			{
				dp[i] = dp[i+1]+1;
			}
			else
			{
				dp[i] = 1;
			}
		}
		for(int i = 0; i < k ; i++)
			cout<<dp[i]<<" ";
			cout<<"\n";

	}
	return 0;
}