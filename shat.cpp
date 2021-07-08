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

    ll i,j,k,l,r,t,n,m;
    ll tt;
    cin>>tt;
    for (ll mm = 0; i < tt; ++mm)
    {
        /* code */
    n = mm;
    ll ans=0;
    ll p=2;
    for(i=1;i<=mm;i++)
    {
        p=p+((i+1)*3-1);
        ll q=n-p;
        if(q>=0)
        {
            if(q%3==0)
                ans++;
        }
        // cout<<p<<" ";
    }
    // cout<<p<<" ";
    // co
    cout<<ans<<" "<< mm<<"\n";
}
return 0;
}