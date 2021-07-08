#include <bits/stdc++.h>
using namespace std;

#define ll long long int
int main()
{
   ll n;
   ll k;
   ll s;
    ll i,j;
   cin>>n;
   cin>>k;
   ll hash[999]={0};

    ll pos;

   for (ll i = 0; i < n; i++)
    {
      cin >> s;
      pos =s%k;
      hash[pos
    }

   ll ans=0;
   j=k-1;
    for(i=1;i<j;i++,j--)
        {
        if(hash[i]>hash[j])
            ans+=hash[i];
        else
            ans+=hash[j];\

    }

    if(((i==j)&& hash[i]>=1))
    ans++;

    if((ans>0)&&hash[0]>=1)
    ans++;



    cout<<ans<<"\n";



    return 0;

}
