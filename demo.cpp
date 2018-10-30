// 1013 C CF
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mp make_pair
#define M (ll)(1e9+7)

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

ll n,m;

ll t;
cin>>t;

while(t--)
{
cin>>n>>m;


ll np = n/m;


ll count = 0;
while(np>0)
{
  count += 1;
  if(np == 1)
    break;
  np = ceil((float)np/m);
  //cout<<" np "<<np<<"\n";
}

cout<<count<<"\n";
}

return 0;
}