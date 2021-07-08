// 550 A CF
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

while(t--)
{


ll a;
cin>>a;

std::vector<ll> v;

std::vector<pair<ll,ll>> computednos;
ll b = a;

ll sumofdigit =0;

string stra = to_string(a);
while(b)
{
	sumofdigit+=b%10;	
	v.pb(b%10);
	b/=10;
}

if(v[0]%2==1&&(sumofdigit-v[0]%3)==0)
{
	for (int i = v.size()-1; i >0; i--)
	{
		cout<<v[i];
		/* code */
	}
	continue;
}

set<ll> stk;
if(sumofdigit%3==1)
{
	stk.insert(1)

}


return 0;
}