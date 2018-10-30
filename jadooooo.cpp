#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mp make_pair
#define M (ll)(1e9+7)

ll gcd(ll a, ll b) {
  if (b == 0) return a;
  return gcd(b, a%b);
}


ll lcm(ll a[], ll n) {
  ll res = 1, i;
  for (i = 0; i < n; i++) {
    res = res*a[i]/gcd(res, a[i]);
  }
  return res;
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);



ll sze;

cin>>sze;


ll arr[sze];


set<ll> set1;

for (int i = 0; i < sze; ++i)
{
	cin>>arr[i];
	set1.insert(arr[i]);
	/* code */
}

ll set1sze = set1.size();

set<ll> set2;


for (int i = sze-1; i >=0; i--)
{
	set2.insert(arr[i]);

	if(set2.size()==set1sze)
	{
		cout<<arr[i];
		return 0;
	}
}






return 0;
}