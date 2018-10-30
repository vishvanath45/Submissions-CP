// COOK98B P2 CC
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define Endl endl
#define mod  1000000007
#define mkp make_pair
#define pb push_back
#define sfl(n) scanf("%lld",&n)
#define pfl(n) printf("%lld\n",n)
#define sf(n) scanf("%d",&n)
#define pf(n) printf("%d\n",n)
#define bitget(n) __builtin_popcountll(n)
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

string str1 = "papa";

reverse(str1.begin()+1, str1.begin()+3);


cout<<str1;

// ll t;

// sfl(t);

// while(t--)
// {
// 	ll nstk;
// 	sfl(nstk);

// 	string p1;
// 	cin>>p1;

// 	ll startby = 1;

// 	if(p1 == "Dee")
// 		startby = 0;


// 	std::vector<string> v;

// 	ll c00 = 0;
// 	ll c01 = 0;
// 	ll c10 = 0;
// 	ll c11 = 0;
// 	for (int i = 0; i < nstk; ++i)
// 	{
// 		string s;
// 		cin>>s;

// 		if(s[0] == '0' && s[s.length()-1] == '0')
// 		{
// 			c00++;
// 		}
// 		if(s[0] == '0' && s[s.length()-1] == '1')
// 		{
// 			c01++;
// 		}
// 		if(s[0] == '1' && s[s.length()-1] == '0')
// 		{
// 			c10++;
// 		}
// 		if(s[0] == '1' && s[s.length()-1] == '1')
// 		{
// 			c11++;
// 		}
// 	}


// ll end =  1;

// ll currp = startby;

// while(end)
// {
// 	if(currp == 0)
// 	{
// 		if(c01 > 0)
// 		{
// 			c01--;
// 			c11++;
// 		}
// 		else if(c00 >0 )
// 			c00--;
// 		else
// 		{
// 			cout<<"Dee\n";
// 			end = 0;
// 		}

// 		currp = 1;
// 	}
// 	else
// 	{
// 		if(c10 > 0)
// 		{
// 			c10--;
// 			c01++;
// 		}
// 		else if(c11 > 0)
// 		{
// 			c11--;
// 		}
// 		else
// 		{
// 			cout<<"Dum\n";
// 			end =0;
// 		}
// 		currp = 0;
// 	}
// }


// }


return 0;
}