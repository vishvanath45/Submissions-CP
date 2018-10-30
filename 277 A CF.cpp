// 277 A CF

#include<bits/stdc++.h>


#define ll int
using namespace std;

int main()
{

	ll n,m;
	cin>>n>>m;


	int arr[m]={0};

	int noofl=0;

	for(int i=0;i<n;i++)
	{
		cin>>noofl;

		for(int j=0;j<noofl;j++)
		{
			int pos;
			cin>>pos;
			arr[pos-1]=1;
		}

	}

int	sum=0;

	for(int i=1;i<m;i++)
	{
		sum+=arr[i];
	}

	cout<<m-1-sum;
	return 0;

}
