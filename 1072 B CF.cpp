// 1072 B CF
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
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
ll sze;

cin>>sze;

ll a[sze-1];
ll b[sze-1];

for (int i = 0; i < sze-1; ++i)
{
	cin>>a[i];
}
for (int i = 0; i < sze-1; ++i)
{
	cin>>b[i];
}

ll final[sze];
ll final2[sze];

for (int i = 0; i < sze; ++i)
{
	final[i] = -1;
	final2[i] = -1;
}

for(int kkk = 0 ; kkk < sze-1 ; kkk++)
{
	for(int i = 0 ; i <= 3 ; i++)
	{
		ll flag = 0;
		for(int j = 0; j <= 3; j++)
		{
			if(((i|j) == a[kkk]) && ((i&j) == b[kkk]))
			{
				// cout<<a[kkk]<<" "<<b[kkk]<<"\n";
				// cout<<i<<" "<<j<<"\n\n";
				
				if(final[kkk] == j)
				{
					final[kkk+1] = i; 
				}
				else
				{
					final[kkk] = i;
					final[kkk+1] = j;
				}

				if(final2[kkk] == i)
				{
					final2[kkk+1] = j;
				}
				else
				{
					final2[kkk] = j;
					final2[kkk+1] = i;					
				}
				flag = 1;
			}
			if(flag == 1)
				break;
		}
		if(flag == 1)
			break;
	}
}

ll fail1 = 0;
ll fail2 = 0;

for (int i = 0; i < sze; ++i)
{
	if(final[i] == -1)
	{
		fail1 = 1;
		break;
	}
}


if(fail1 == 0)
for(int i =0 ; i < sze-1 ; i++)
{
	ll k1 = final[i]|final[i+1];
	ll k2 = final[i]&final[i+1];

	if(k1 != a[i] || k2 != b[i])
	{
		fail1 = 1;
		break;	
	}
}

for (int i = 0; i < sze; ++i)
{
	if(final2[i] == -1)
	{
		fail2 = 1;
		break;
	}
}

if(fail2 == 0)
for(int i =0 ; i < sze-1 ; i++)
{
	ll k1 = final2[i]|final2[i+1];
	ll k2 = final2[i]&final2[i+1];

	if(k1 != a[i] || k2 != b[i])
	{
		fail2 = 1;
		break;	
	}
}

// cout<<fail1<<" "<<fail2<<"\n";

if(fail1 == 1 && fail2 == 1)
{
	cout<<"NO\n";
	return 0;
}

if(fail1 == 0)
	{
		cout<<"YES\n";
	for (int i = 0; i < sze; ++i)
		{
			cout<<final[i]<<" ";
		}
	}
else
	{
		cout<<"YES\n";
	for (int i = 0; i < sze; ++i)
		{
			cout<<final2[i]<<" ";
		}	
	}
return 0;
}