// LEDIV CC
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define Endl endl
#define mod  1000000007
#define mkp make_pair
#define pb push_back
#define sfl(n) scanf("%lld",&n)
#define pfl(n) printf("%lld\n",n)
#define sf(n) scanf("%d",&n)
#define MAX 1000000000000000000 //10^18
#define MIN -1000000000000000000

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

ll t;
sfl(t);

while(t--)
{
ll n,m,k,l;
sfl(n);
sfl(m);
sfl(k);
sfl(l);
ll arr[n];
for (ll i = 0; i < n; ++i)
	sfl(arr[i]);

sort(arr, arr+n);
ll mini = MIN;
ll value;
for (ll i = 0; i < n; ++i)
{
	ll pp = (arr[i]/l) - i - 1;
	if(pp > mini)
	{
		mini = pp;
		value = arr[i]%l;
	}
}

ll ans = m*l- value -mini*l;
ll mega = m  + n - k/l ;
ll kkk = (m  + n + 1)*l;
kkk -=k;
ll ans2 = min(ans, kkk);
if(mega < 0)
	cout<<ans<<"\n";
else
	cout<<ans2<<"\n";
}


return 0;
}
