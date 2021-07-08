//  527 A CF
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

ll a;
ll b;

cin>>a>>b;


ll counter =0;


while(1)
{
	if(a>b)
	{
		counter+=a/b;
		a=a%b;
		if(a==0)
			break;

	}
	else
	{
		counter+=b/a;

		b=b%a;
		if(b==0)
			break;
	}
}
cout<<counter;
return 0;
}