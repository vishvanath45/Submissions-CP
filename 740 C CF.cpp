// 740 C CF

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
ll t;
ll query;

cin>>t>>query;

ll mini =1000000000;

while(query--)
{
ll l , r;
cin>>l>>r;
ll dist = r-l+1;
if(dist<mini)
{
mini = dist;
}
}

cout<<mini<<"\n";

for(ll i =0 ;i<t;i++)
cout<<i%mini<<" ";


return 0;
}
