// ELEVSTRS CC

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

int t;
cin>>t;

float n,v1,v2;
while(t--)
{
	cin>>n>>v1>>v2;

	if((sqrt(2)*n)/v1>(2*n/v2))
		cout<<"Elevator\n";
	else
		cout<<"Stairs\n";
	

}


return 0;
}