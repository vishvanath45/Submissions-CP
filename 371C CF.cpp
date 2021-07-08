// 371C CF
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

ll s[t]={0};
ll d[t]={0};

for (ll i = 0; i < t; ++i)
{
	cin>>s[i]>>d[i];
	/* code */
}
std::vector<ll> v;

ll firstday = s[0];
v.pb(firstday);


for (ll i = 1; i < t; ++i)
{
if(s[i]>firstday)
{
	firstday =s[i];
	v.pb(firstday);
	continue;
}
ll kk = (firstday - s[i])/d[i];

kk+=1;

ll mm = s[i]+(kk-1)*d[i];
if((mm)<=firstday)
{
	kk+=1;
}
mm = s[i]+(kk-1)*d[i];

v.pb(mm);
firstday = mm;
// cout<<mm<<"**\n";
}

cout<<v[v.size()-1];

return 0;
}