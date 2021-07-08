//842 A CF
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

ll l,r,x,y,k;
cin>>l>>r>>x>>y>>k;

for(int i = x; i <= y ; i++)
{
	double ss =  (double)k*i;

	if(floor(ss)==ss&&ss>=l&&ss<=r)
	{
		cout<<"YES\n";
		return 0;
	}

}

cout<<"NO\n";
return 0;
}