// 849A CF
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

ll t;

cin>>t;

if(t%2 == 0)
{
	cout<<"No\n";
}
else
{
	ll arr[t];
	for(int i = 0; i < t ; i++)
	{
		cin>>arr[i];
	}
	if(arr[0]%2 == 0 || arr[t-1]%2 == 0)
	{
		cout<<"No";
	}
	else
		cout<<"Yes";
}
return 0 ;

}
