// max among array 

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

int max;

for(int i =0;i<t;i++)
{

cin>>arr[i];

if(i==0)
{
max=arr[i];
}

if(max<arr[i])
max= arr[i];

}

cout<<max<<"\n";

return 0;

	
}