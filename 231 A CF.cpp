// 231 A CF
#include<bits/stdc++.h>

#define ll long long int
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
cin>>t;
int count=0;

while(t--)
{
int a , b, c;
cin>>a>>b>>c;
if(a+b+c>=2)
	count++;
}
cout<<count;

return 0;
}