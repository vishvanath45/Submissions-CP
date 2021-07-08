// 1041 B CF
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mp make_pair
#define M (ll)(1e9+7)

ll gcd(ll a, ll b) 
{ 
    if (a == 0) 
        return b; 
    return gcd(b % a, a); 
} 

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

ll a, b, x, y;

cin>>a>>b>>x>>y;

ll pika = __gcd(x, y);

x = x/pika;
y = y/pika;

ll ans = 0;

if(x <= a && y <= b)
{
	ll timesx = a/x;
	ll timesy = b/y;

	ans = min(timesy, timesx);
}

cout<<ans;
return 0;
}