//281 A CF
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


string S;

cin>>S;

if(int(S[0])>=97)
{
	S[0]=S[0]-32;
}

cout<<S;

return 0;
}