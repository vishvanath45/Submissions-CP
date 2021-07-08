// 554 B CF
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

ll n;

cin>>n;
ll arr[n]={0};
map<string,ll> mp;

string s;

for (ll i = 0; i < n; ++i)
{
cin>>s;


for(ll j = 0 ; j<n ; j++)
{
	if(s[j]=='0')
	{
		arr[j]=1;
	}
}

string mm;

for (ll i = 0; i < n; ++i)
{
	/* code */
	if(arr[i]==1)
	{
		mm+='1';
		arr[i]=0;
	}
	else
	{
		mm+='0';
	}
}

mp[mm]++;
// cout<<mm<<"\n";
}


ll maxi =0;

map<string,ll>::iterator it;

for (it = mp.begin() ; it!= mp.end();it++)
{

	if(maxi < it->second)
	{
		maxi = it->second;
	}
	/* code */
}

cout<<maxi;


return 0;
}