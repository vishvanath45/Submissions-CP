// 1060 B CF
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mp make_pair
#define M (ll)(1e9+7)

int gcd(int a, int b){
      if(b == 0)  return a;
    return gcd(b, a%b);
}
int powr(int base, int p)
{
int ans = 1;while(p){if(p&1)ans=(ans*base);base=(base*base);p/=2;}return ans;
}
ll modexp(ll x, ll n)
{
    if(n==0)
        return 1LL;
    if(n%2==0)
    {
        ll y = modexp(x,n/2)%mod;
        return (y*y)%mod;
    }
    return (x*modexp(x,n-1)%mod)%mod;
}

ll powr(ll x, ll n)
{
    ll ans = 1;
    for(int i=1;i<=n;i++)
        ans=ans*x;
    return ans;
}
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

ll rem = 0;

if(t<9)
rem = t;
else if(t<99)
rem = 9;
else if(t<999)
rem = 99;
else if(t<9999)
rem = 999;
else if(t<99999)
rem = 9999;
else if(t<999999)
rem = 99999;
else if(t<9999999)
rem = 999999;
else if(t<99999999)
rem = 9999999;
else if(t<999999999)
rem = 99999999;
else if(t<9999999999)
rem = 999999999;
else if(t<99999999999)
rem = 9999999999;
else if(t<999999999999)
rem = 99999999999;
else if(t<9999999999999)
rem = 999999999999;
else if(t<99999999999999)
rem = 9999999999999;
else if(t<999999999999999)
rem = 99999999999999;


ll rem2 = t - rem ;

cout<<rem2<<" "<<rem<<"\n";

ll sum = 0;

while(rem)
{
	sum += rem%10;
	rem = rem/10;
}


while(rem2)
{
	sum += rem2%10;
	rem2 = rem2/10;
}

cout<<sum<<"\n";


return 0;
}