// 1036 A CF
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mp make_pair
#define M (ll)(1e9+7)

int arr[26];

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);	

ll a, b;

cin>>a>>b;

ll k = b/a;

ll rem = b%a;

if(rem>0)
{
	cout<<k+1;
}
else
	cout<<k;



return 0;
}