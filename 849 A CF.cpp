//849 A CF
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


for(int i =0 ; i < t; i++)
cin>>arr[i];

if((arr[0]%2==0)||(arr[t-1]%2==0))
{cout<<"No\n";
return 0;
}

std::vector<int> v;

if(t%2!=0)
{
	cout<<"Yes\n";
	return 0;
}

	for(int i =0 ; i<t ; i++)
	{
		if(arr[i]%2!=0)
		{
			// cout<<i<<"**";
			v.push_back(i);
		}
	}


std::vector<int> v2;
int count=0;
for(int i =0 ; i< v.size()-1; i++)
{
	// cout<<v[i]<<"*\n";
	v2.push_back(abs(v[i+1]-v[i]+1));
	if(v2[i]%2!=0)
	{
		count++;
	}
}
	if(count%2!=0)
		{
	cout<<"Yes\n";
}
else
{
	cout<<"No\n";
}


return 0;
}