// 1066 C CF
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


vector<ll > l;
vector<ll > r;


ll t;

cin>>t;

map<ll, ll> lmp;
map<ll, ll> rmp;

while(t--)
{

string s;
ll k;
cin>>s>>k;

if(s == "L")
	{
		l.push_back(k);
		lmp[k] = l.size();
	}
else if(s == "R")
	{
		r.push_back(k);
		rmp[k] = r.size();
	}
else
{
	if(rmp.find(k) != rmp.end())
	{
		ll x = rmp[k];
		ll a = x-1+l.size();
		ll b = r.size()-x;
		cout<<min(a,b)<<"\n";
	}
	else
	{
		ll x = lmp[k];
		ll a = x-1+r.size();
		ll b = l.size()-x;
		cout<<min(a,b)<<"\n";
	}
}

}



return 0;

}	