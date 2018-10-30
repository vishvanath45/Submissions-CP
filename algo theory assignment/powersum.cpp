#include<bits/stdc++.h>
using namespace std;
#define ll long long int


ll power(ll b,ll p)
{
    if(p==1)
     {   return b;
    ll co=power(b,(p-1)/2);
    
    }
    else if(p%2==0)
        {
        return power(b,(p-1)/2)*power(b,(p-1)/2);
       
        }
        else{
             return b*power(b,(p-1)/2)*power(b,(p-1)/2);
        }
}

int main()
{
        #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif

    ll i,n,r,p;
    cin>>n;
    cin>>p;
    r=power(n,p);
    cout<<r;
    return 0;
}



