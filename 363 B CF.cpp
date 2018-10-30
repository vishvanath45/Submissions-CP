//363 B CF
#include<bits/stdc++.h>

using namespace std;

int main()
{


#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif

int t;

int k;

cin>>t>>k;

int isum=0;

int arr[t];
for(int i=0;i<t;i++)
{
	cin>>arr[i];
	if(i<k)
		isum+=arr[i];
}

int dumbsum[t-k+1]={0};

int pos =0;

dumbsum[pos]=isum;
pos++;

for(int i=k;i<t;i++)
{
	int lol = isum+arr[i]-arr[i-k];
	dumbsum[pos]=lol;
	isum=lol;
	pos++;

}

int sumbsumsize=t-k+1;


int anspos=0;

int min = INT_MAX;


for(int i =0;i<sumbsumsize;i++)
{
	if(dumbsum[i]<min)
	{
		min=dumbsum[i];
		anspos=i+1;
	}
}

cout<<anspos;

return 0;

}

