// 832 A CF

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

long long int n;

cin>>n;
long long int k;
cin>>k;

long long int p = n/k;

if(p%2==0)
	cout<<"NO\n";
else
	cout<<"YES\n";

return 0;
}