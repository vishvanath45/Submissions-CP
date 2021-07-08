// QUEUE2 CC
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
ll mini=MAX;
for(ll i=0;i<n;i++)
{
ll current = (m+i+1)*l-arr[i];
	mini = min(current, mini);
}
ll last = (m+n+1)*l-k;
mini = min(mini, last);
cout<<mini<<"\n";
}
return 0;
}
