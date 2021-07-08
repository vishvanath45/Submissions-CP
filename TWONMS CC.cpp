//  TWONMS CC
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



ll t, a, b, c;
cin>>t;

while(t--)
{
	cin>>a>>b>>c;

	
	for(int i = 0;i<c;i++)
		if(i%2==0)
			a*=2;
		else
			b*=2;

	cout<<max(a,b)/min(a,b)<<"\n";



}

return 0;
}