// 712 C CF
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
#define pf(n) printf("%d\n",n)
#define bitget(n) __builtin_popcountll(n)
ll dx[] = {1,1,0,-1,-1,-1,0,1};	
ll dy[] = {0,-1,-1,-1,0,1,1,1};
ll dxx[] = {1,-1,0,0};
ll dyy[] = {0,0,-1,1};
bool isvalid(ll x,ll y,ll n,ll m){
    return (x>=0&&x<n&&y>=0&&y<m);
}
ll modexpo(ll x,ll y){if(y==0)return 1;if(y%2){ll viky=modexpo(x,y/2);
return (((x*viky)%mod)*viky)%mod;}else{ll viky=modexpo(x,y/2);return (viky*viky)%mod;
}}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

string str = "apple";
str.insert(str.begin() + str.length(),'x');
cout<<str;
// ll a,b;

// cin>>a>>b;

// ll arr[3];

// for (int i = 0; i < 3; ++i)
// {
// 	arr[i] = b;
// }

// ll count = 0;

// while(1)
// {
// 	sort(arr, arr+3);

// 	ll x = arr[0];
// 	ll y = arr[1];
// 	ll z = arr[2];

// 	if(x == z && x != b)
// 		break;

// 	if(y+z > a)
// 	{
// 		arr[0] = a;
// 	}
// 	else
// 	{
// 		arr[0] = y+z-1;
// 	}

// 	count++;

// 	// for (int i = 0; i < 3; ++i)
// 	// {
// 	// 	cout<<arr[i]<<" ";  
// 	// }
// 	// cout<<"\n";
// }

// cout<<count;
return 0;
}