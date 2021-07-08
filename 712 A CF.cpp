//  712 A CF
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
ll a,b;
cin>>a>>b;

// cout<<"asdasd";
ll time =0;
ll o =1;

while(1)
{
	o++;
	if(o>100)
		break;
	if(a<=2&&b<=2)
	{
		break;
	}
	else if(a>b)
	{
		b+=1;
		a-=2;
		time+=1;
	}
	else
	{
		a+=1;
		b-=2;
		time+=1;
	}

}
cout<<time;


return 0;
}