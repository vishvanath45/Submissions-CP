// 888 B CF
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


ll sze;
cin>>sze;

string s;

cin>>s;

ll ucount=0;
ll dcount=0;
ll rcount=0;
ll lcount=0;


for (ll i = 0; i < sze; ++i)
{
	/* code */
	if(s[i]=='U')
		ucount++;
	else if(s[i]=='D')
		dcount++;
	else if(s[i]=='R')
		rcount++;
	else
		lcount++;
}

ll ans1= min(ucount,dcount);
ll ans2= min(rcount,lcount);

ll ans = ans1+ans2;
ans*=2;

cout<<ans;

return 0;
}