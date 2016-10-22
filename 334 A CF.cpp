#include<stdio.h>
#include<algorithm>
using namespace std;
#include<iostream>

int main()
{
	int n;
	cin>>n;

	int arr[n*n];

	for(int i=1;i<=n*n;i++)
	{
		arr[i-1]=i;
	}
	int lpos=0,rpos;
	rpos=(n*n)-1;
int t;
	while(lpos<((n*n)/2))
	{t=1;
		for(;t<=(n/2);t++)
		{
			cout<<arr[lpos++]<<" ";
		}
		t=1;
		for(;t<=(n/2);t++)
		{
			cout<<arr[rpos--]<<" ";
		}

	cout<<"\n";

	}


	return 0;
}
