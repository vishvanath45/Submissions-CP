// INSQ17Z cc
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

ll t;
cin>>t;

while(t--)
{
ll size;
cin>>size;
unsigned long long  arr1[size];
unsigned long long  arr2[size];

for(int i =0 ; i< size; i++)
{
	cin>>arr1[i];
}

for(int i =0 ; i< size; i++)
{
	cin>>arr2[i];
}


sort(arr1, arr1+size);
sort(arr2, arr2+size);
int count1=0;
int count2=0;
for(int i = size-1; i>=0; i--)
{
	if(arr1[i]==arr1[size-1])
		count1++;
}

for(int i = size-1; i>=0; i--)
{
	if(arr2[i]==arr2[size-1])
		count2++;
}



cout<<count1*count2<<"\n";


}



return 0;
}