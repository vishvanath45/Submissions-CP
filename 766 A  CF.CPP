// 766 B  CF

#include<bits/stdc++.h>

#define ll long long int

using namespace std;

int main()
{

ll t;

ll arr[t];
ll i;

for(i=0;i<t;i++)
{
	cin>>arr[i];
}


sort(arr,arr+t);

for(i=0;i<n-1;i++)
{
	if((arr[i]+arr[i+1]>arr[i+2])&&(arr[i+1]-arr[i]<arr[i+2]))
	{
		cout<<"YES\n";
		return 0;
	}
}

cout<<"NO\n";

	return 0;
	
}