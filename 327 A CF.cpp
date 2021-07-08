//327 A CF

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

	int arr[t];

	for(int i =0;i<t;i++)
		cin>>arr[i];

	int ansarr[t]={0};

	int deadi=0;

	int contizero=0;
	int sum=0;

	for(int i =0;i<t;i++)
	{
		sum+=arr[i];

		if(arr[i]==1)
		{
			ansarr[deadi]=contizero;
			contizero=0;
			deadi++;

		}
		else
			contizero++;
	}

	ansarr[deadi]=contizero;
	deadi++;

	sort(ansarr,ansarr+t);

	int qw= ansarr[t-1];

	if(sum!=t)
	cout<<qw+sum<<"\n";
	else
	cout<<sum-1<<"\n";



return 0;
}
