// 1054 B CF
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define Endl endl
#define mod  1000000007
#define mkp make_pair
#define pb push_back
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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

ll sze;

cin>>sze;

ll arr[sze];

for (int i = 0; i < sze; ++i)
{
	cin>>arr[i];
}


ll curr = 0;
ll i = 0;

if(arr[i] != 0)
{
	cout<<1;
	return 0;
}


for(i = 1 ; i < sze ; i++)
{
	if(arr[i] == curr+1 || arr[i] <= curr)
	{
		if(arr[i] > curr)
			curr = arr[i];
	}
	else
	{
		break;
	}
}




if(i == sze)
cout<<-1;
else
cout<<i+1;

return 0;
}