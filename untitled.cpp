//818 B CF
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


int n,m;
cin>>n>>m;

int arr[n]={0};

int leaderpos[m];

for(int i =0;i<m;i++)
cin>>leaderpos[i];


for(int i =0 ;i<m-1;i++)
{

int dumb;

dumb=leaderpos[i+1]-leaderpos[i];

if(dumb<=0)
	dumb+=n;

arr[leaderpos[i]-1]=dumb;

if(dumb==0)
{
	cout<<"-1\n";
	return 0;
}
}

for(int i =0;i<n;i++)
cout<<arr[i]<<" ";

return 0;
}

