// IOPC17C CC


#include<bits/stdc++.h>

using namespace std;

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

while(t--)
{
	int sze;
	cin>>sze;

	int arr[sze];

	for(int i=0;i<sze;i++)
	cin>>arr[i];


	sort(arr,arr+sze);

	if(arr[0]==arr[sze-1])
	cout<<0<<"\n";
	else
	{
	for(int i = sze-2;i>=0;i--)
	{
	if(arr[i]!=arr[sze-1])
	{
	cout<<arr[i]<<"\n";
	break;
	
	}
	}

	}


}



return 0;

}
