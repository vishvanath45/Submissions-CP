// longest incresing subsequence

#include<bits/stdc++.h>

#define ll long long int
#define fr(a,b) for(a=0;a<b;a++)
using namespace std;

ll DP[1000005];

ll LIS(ll arr[],ll sze)
{
    for(ll i =0; i<sze; i++)
        for(ll j =0; j <i ; j++)
        {
            if(arr[j]<arr[i]&&(DP[i]<DP[j]+1))
            {
                    DP[i]=DP[j]+1;
            }
        }


ll maxi =DP[0];

for(ll i =1;i<sze;i++)
{
if(maxi<DP[i])
maxi = DP[i];
}
        return maxi;

}


int main()
{



    ll t;
    cin>>t;


for(ll i = 0 ; i<t+1; i++)
    DP[i]=1;

    ll arr[t];

    ll i;

    fr(i,t)
    cin>>arr[i];

    ll ans = LIS(arr, t);


    cout<<ans;


    return 0;

}
