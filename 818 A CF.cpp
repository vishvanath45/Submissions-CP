// 818 A CF

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

ll n,k;

cin>>n>>k;

ll nd,nc;
nd = (n/2)/(k+1);

nc = k*nd;

ll sim = n-nc-nd;

cout<<nd<<" "<<nc<<" "<<sim<<"\n";

return 0;
}
