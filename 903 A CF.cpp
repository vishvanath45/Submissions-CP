// 903 A CF
#include <bits/stdc++.h>
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
	ll n;
	cin>>n;

ll timesseven = n/7;
ll rem  = n%7;

rem = rem%3;

if(rem == 0 )
	cout<<"YES\n";
else if(rem == 1 && timesseven>=2)
	cout<<"YES\n";
else if(rem ==2 && timesseven >=1)
	cout<<"YES\n";
else 
	cout<<"NO\n";

}

return 0;

}
