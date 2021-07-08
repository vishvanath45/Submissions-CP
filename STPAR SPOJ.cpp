// STPAR SPOJ
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

while(cin>>t)
{

	if(t==0)
		return 0;

	ll arr[t];

	for(ll i = 0; i < t; i++)
		cin>>arr[i];

stack<ll> st;

ll tofind = 1;

for(int i = 0; i < t ; i++)
{
	// cout<<tofind;
	if(arr[i] == tofind)
	{
		tofind++;
	}
	else if(!st.empty() && st.top() == tofind)
	{
		st.pop();
		tofind++;
		i--;
	}
	else
	{
		st.push(arr[i]);
	}
}

while(tofind <=t )
{
	if(st.top() == tofind)
	{
		tofind++;
		st.pop();
	}
	else
	{
		break;
	}
}
if(tofind == t+1)
	cout<<"yes\n";
else
	cout<<"no\n";


}



return 0;
}