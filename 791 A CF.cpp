//  791 A CF
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


int a;
int b;
cin>>a>>b;

int counter=0;

while(1)
{
	a=a*3;
	b=b*2;
	counter++;
	if(a>b)
		break;

}

cout<<counter;

return 0;
}