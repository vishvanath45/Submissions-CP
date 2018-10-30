//priyanka and toys hr
#include<bits/stdc++.h>

#define ll long long int

using namespace std;

int main()
{

	ll t;
	cin>>t;

	ll arr[t];

	for(int i=0;i<t;i++)
		cin>>arr[i];

	sort(arr,arr+t);


ll begin =arr[0]+4;
ll taken =1;
for(ll i=0;i<t;i++)
{
	if(begin<arr[i])
	{
		begin=arr[i]+4;
		taken++;

	}

}

cout<<taken<<"\n";




return 0;

}
