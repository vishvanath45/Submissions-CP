// 1023 B CF
#include<bits/stdc++.h>
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

ll n,k;

cin>>n>>k;

if(k > n+n-1)
{
	cout<<0;
	return 0;
}

if(k < n)
{
	cout<<(k-1)/2;
	return 0;
}


if(k == n)
{
	if(n%2 == 0)
		cout<<n/2-1;
	else 
		cout<<n/2;
	return 0;
}

// ans is s to n;


ll s = k-n;

ll pp = n-s+1;

if(pp%2 == 0)
	cout<<pp/2;
else 
	cout<<(pp-1)/2;

return 0;

}