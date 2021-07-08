//347 A CF
#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	int arr[t];
	int i=-1;
	while(++i<t)
	cin>>arr[i];

	sort(arr,arr+t);

	int smallest= arr[0];
	int largest =arr[t-1];
	cout<<largest<<" ";

	for(i=1;i<t-1;i++)
	cout<<arr[i]<<" ";

	cout<<smallest;

	return 0;
	

}