// CHEFRUN CC

#include<bits/stdc++.h>
using namespace std;

int main()
{   int n;
	int t;
	cin>>t;
	while(t--)
	{
	cin>>n;
	int tarr[n][2]={0};

	for(int i=0;i<n;i++)
	cin>>tarr[i][0];

	for(int ssp=0;ssp<n;ssp++)
	{
	int sp;
	sp=ssp;
	while(tarr[sp][1]!=1)
	{
	tarr[sp][1]=1;
	sp=sp+tarr[sp][0]+1;
	sp=sp%n;
	}
	}

	int count =0;
	for(int i=0;i<n;i++)
	{
	if(tarr[i]>0)
	count++;
	}

	cout<<count<<"#$$#$#\n";

	}

	return 0;

}
