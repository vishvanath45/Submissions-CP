// 407 A CF

#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
ll n,k;

cin>>n>>k;


ll arr[n];

for(ll i =0; i<n;i++)
cin>>arr[i];

ll sumsofar=0;

ll oddcount=0;

for(ll i =0; i<n;i++)
{
sumsofar+=arr[i]/k;
arr[i]=arr[i]%k;

if(arr[i]!=0)
oddcount++;

}

ll ans = (sumsofar+oddcount+1)/2;

cout<<ans;
return 0;



}
