// 415 D CF

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mp make_pair
int main()
{

#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif

ll t;
cin>>t;

if(t==1)
{cout<<2;
return 0;}

if(t%2==0)
{
    cout<<t+(t/2)<<"\n";
    
    for(ll i=2;i<=t;i+=2)
    cout<<i<<" ";
    
    for(ll i = 1; i<=t;i+=2)
    cout<<i<<" ";
    
    for(ll i =2;i<=t;i+=2)
    cout<<i<<" ";


    return 0;
    
}else
{
    cout<<t/2 + t/2 + t/2 +1;
    cout<<"\n";
     for( ll i =2 ; i<=t ;i+=2)
     cout<<i<<" ";
     
     for(ll i =1; i<=t;i+=2)
     cout<<i<<" ";
     
     for(ll i =2; i<=t;i+=2)
     cout<<i<<" ";


     
     return 0;
    
}
return 0;
}