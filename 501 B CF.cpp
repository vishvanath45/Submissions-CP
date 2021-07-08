// 501 B CF
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

ll k;
cin>>k;
string s;
cin>>s;


std::vector<ll> v;

for (ll i = 0; i < s.length(); i++)
{
	if(s[i]=='1')
	{
		// hash[i]=1;
		v.push_back(i);
	}
}

ll ans= 0;
ll firstoccurance = 0;
ll lastoccurance = s.length()-1;
ll endpos;
ll afterendpos;
ll startpos;
ll beforestartpos;
ll length =v.size();


if(k>length)
{
	cout<<0;
	return 0;
}
for (ll i = 0; i <=length-k; i++)
{

// cout<<v[i]<<" v[i]\n";
	if(i+k>=v.size())
	{
		afterendpos = s.size();
	}
	else
	{
		afterendpos = v[i+k];
	}

	endpos = v[i+k-1];
	startpos = v[i];

	if(i>=1)
	beforestartpos = v[i-1];


	// cout<<beforestartpos<<" "<<startpos<<" - "<<afterendpos<<" "<<endpos<<" &&\n";
	ll zerobegin;
	
	if(i>0)
	{
	 zerobegin = startpos - beforestartpos -1 ;
	}
	else
	{
		zerobegin = v[0];
	}

	ll zeroafter = afterendpos - endpos-1;
// cout<<zerobegin<<" -- "<<zeroafter<<"\n";
	ans+= zeroafter*zerobegin + zeroafter+zerobegin ;
	// cout<<ans<<"\n";
}

cout<<ans+v.size()-k+1;


return 0;
}