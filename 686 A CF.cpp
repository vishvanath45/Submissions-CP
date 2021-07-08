//  686 A CF
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

 
ll n,x,pkp=0,disc=0;
char ch;
cin>>n>>x;

while(n--)
{
	cin>>ch;
	cin>>pkp;

	if(ch=='+')
		x+=pkp;
	else
	{
		if(pkp>x)
			disc++;
		else
		{
			x-=pkp;
		}
	}
}

cout<<x<<" "<<disc<<"\n";


return 0;
}