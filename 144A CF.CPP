// 144A CF
#include<stdio.h>
#include<algorithm>
using namespace std;
#include<iostream>

int main()
{
	long long int i,t,minpos,maxpos,answer,maxele=0;
	cin>>t;

	long long int arr[t];
	long long int minele=arr[t-1];
for(i=0;i<t;i++)
{
	cin>>arr[i];
}

for(i=0;i<t;i++)
{
	if(arr[i]>maxele)
	{
		maxpos=i;
		maxele=arr[i];
	}
}

while(i--)
{
	if(minele>arr[i])
	{
		minpos=i;
		minele=arr[i];
	}
}

answer=maxpos+(t-minpos-1);

if(maxpos>minpos)
{
	answer--;
}


cout<<answer<<"\n";



	return 0;
}
