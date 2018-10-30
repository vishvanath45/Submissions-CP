// modified bubble sort

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


int t;
cin>>t;
int swap =0;
int arr[t];

for(int i =0;i<t;i++)
cin>>arr[i];

for(int i =t-1; i>=1; i--)
{
	swap =0;
for(int j =0 ;j<i ;j++)
{
	if(arr[j]>arr[j+1])
	{
		arr[j]=arr[j+1]+arr[j];
		arr[j+1]=arr[j]-arr[j+1];
		arr[j]=arr[j]-arr[j+1];
		swap=1;
		cout<<"swapped\n";
	}
}
if(swap==0)
{
	cout<<"no swap \n";
break;
}
}
for(int i =0 ;i<t;i++)
cout<<arr[i]<<" ";


return 0;
}
