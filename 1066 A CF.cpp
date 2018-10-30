// 1066 A CF
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


ll t;

cin>>t;

while(t--)
{

ll a, b, c, d;

cin>>a>>b>>c>>d;

ll nl = a/b;

ll k = (c+b-1)/b;
ll p = d/b;

k = p-k+1;

cout<<nl-k<<"\n";


}


return 0;
}