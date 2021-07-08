// 1065 A CF
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
ll n, e;
cin>>n>>e;

ll kk = 0;

ll nfc;
ll er = e;
ll nr = n;

ll maxi = 0;

if(e==0)
{
    cout<<n<<" "<<n<<"\n";
    return 0;
}

for(ll i = 1 ; i <= 100000 ; i++)
{
    er = (i*(i-1))/2;

    if(er >= e)
    {
        maxi = i;
        break;
    }
}



ll mini = max(kk,n-2*e);

cout<<mini<<" "<<n-maxi<<"\n";

return 0;
}