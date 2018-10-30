#include<bits/stdc++.h>


#define ll long long int


ll M=1000000007;

using namespace std;

ll fact (ll n)
{
if(n!=1)
    return ((n)%M)*(fact(n-1)%M)%M;
else
    return n%M;
}



int main()
{

    int t;
    cin>>t;

    while(t--)
    {
    int n,k;
    cin>>n>>k;

    ll b= (fact(k)%M)*(fact(n-k)%M);

    ll ans = ((fact(n)%M)*((pow(b,M-2)%M))%M);


    cout<<ans<<"\n";





    }

    return 0;

}
