// binary search on array of n int

#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{

// #ifndef ONLINE_JUDGE
//     // for getting input from input.txt
//     freopen("input.txt", "r", stdin);
//     // for writing output to output.txt
//     freopen("output.txt", "w", stdout);
// #endif

int t;
cin>>t;

int arr[t];

for( int i =0 ;i < t;i++)
cin>>arr[i];




int notobefound;
cin>>notobefound;


int l =0;
int r =t-1;

while(l<r)
{

int mid = (l+r)/2;

if(arr[mid]==notobefound)
{
	cout<<"no found at "<<mid+1<<"\n";
	return 0;
}
else if(arr[mid]>notobefound)
	r = mid-1;
else
	l = mid+1;
}



cout<<"no not found\n";


return 0;



}