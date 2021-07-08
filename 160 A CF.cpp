//  160 A CF
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
int sum =0;
for(int i =0 ; i< t; i++)
	{
		cin>>arr[i];
		sum+=arr[i];
	}

sort(arr, arr+t);



int counter=0;
int pkp=0;
for(int i =t-1; i>=0; i--)
{
	pkp+=arr[i];
	counter++;
	if(pkp>sum-pkp)
	{
		break;
	}
}

cout<<counter;
return 0;
}