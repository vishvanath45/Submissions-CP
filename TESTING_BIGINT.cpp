// TESTING_BIGINT
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
// #define mp make_pair
#define M (ll)(1e9+7)
namespace mp = boost::multiprecision; 
using namespace std;

int main() { 
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    mp::cpp_int fac=1;
    for(int i=1;i<=n;i++)
    { 
    	fac=fac*i;
    } 
    cout<<fac; 
    return 0; 
}