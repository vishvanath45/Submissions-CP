//  194 A CF
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

ll nexam, sum;

cin>>nexam>>sum;

if(sum-2*nexam>nexam)
{
	cout<<0;
	return 0;
}
else
{
	cout<<nexam-(sum-2*nexam);
}

return 0;
}