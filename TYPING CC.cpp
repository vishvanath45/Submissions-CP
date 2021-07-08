// TYPING CC
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

ll t;
cin>>t;

while(t--)
{

map <string, double > mp;

ll sze;

cin>>sze;

double ans = 0;

while(sze--)
{
	string s1;
	cin>>s1;

if(mp.count(s1) > 0)
{
	ans += (mp[s1]/2);
}
else
{
	string s2 = s1;

	for(ll i = 0; i < s1.length(); i++)
	{
		if(s1[i] == 'd' || s1[i] == 'f')
			s1[i] = '1';
		else
			s1[i] = '0';
	}


double timecount = 0.2;

if(s1.length() == 0)
	timecount = 0;

for(ll i = 1; i < s1.length(); i++)
{
	if(s1[i] != s1[i-1])
		timecount+=0.2;
	else
		timecount+=0.4;
}


mp[s2] = timecount;
ans += mp[s2];

}

}

cout<<ans*10<<"\n";
mp.clear();

}

return 0;
}