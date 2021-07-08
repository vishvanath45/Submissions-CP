//  450 A CF
#include<bits/stdc++.h>
using namespace std;
#define ll long long int  

int main()
{
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
    #endif

int n,m;

cin>>n>>m;

int arr[n];

int sum=0;
for(int i =0; i<n; i++)
	{
		cin>>arr[i];
		sum+=arr[i];
	}

int i =0;
while(1)
{

	if(arr[i%n]>m)
	{
		sum-=m;
		arr[i%n]-=m;
		if(sum==0)
			break;

	}
	else
	{
		sum-=arr[i%n];
		arr[i%n]-=arr[i%n];
		if(sum==0)
			break;

	}
	i++;

}

cout<<i%n+1;

return 0;
}