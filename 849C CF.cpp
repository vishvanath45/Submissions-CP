// 849C CF
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
if(t==0)
{
	cout<<"a";
	return 0;
}
string s;

ll p = t;

// ll count = 0;

vector<ll> v;
while(p)
{
	//cout<<p<<"<--\n";
	if(p == 1)
	{
		v.push_back(2);
		p = 0;
		break;
	}
	ll x = (1+ sqrt(1+8*p))/2;

	v.push_back(x);

	p = p - x*(x-1)/2;

}

ll j=97;
for(ll i = 0 ; i < v.size() ; i++)
{
	for(ll k=0;k<v[i];k++)
	{
		cout<<(char)j;
	}
	j++;
}
return 0;
}