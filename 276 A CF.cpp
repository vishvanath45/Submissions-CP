//276A CF
#include<stdio.h>
#include<algorithm>
using namespace std;
#include<iostream>

int main()
{

	int n,k;
	cin>>n>>k;

	int arr[n],arr2[n];

	int i=n;

	while(i--)
	{
cin>>arr[i];
cin>>arr2[i];
	}

int joy=-99999999999999999;
int f,t,temp;


for(i=0;i<n;i++)
{
	f=arr[i];
		t=arr2[i];


	if(t<=k)
	{
     joy=(f>joy)?f:joy;
	}
	else if(t>k)
	{
 temp=f-(t-k);
	joy=(temp>joy)?temp:joy;
	}

}


cout<<joy;




return 0;
}
