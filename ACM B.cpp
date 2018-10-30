// ACM B
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ull unsigned long long int
#define Endl endl
#define mod  1000000007
#define mkp make_pair
#define pb push_back
#define sfl(n) scanf("%lld",&n)
#define pfl(n) printf("%lld\n",n)
#define sf(n) scanf("%d",&n)
#define pf(n) printf("%d ",n)
#define bitget(n) __builtin_popcountll(n)
#define MAX 1000000000000000000 //10^18
#define MIN -1000000000000000000
#define ipair pair<long long ,long long >

ll dx[] = {1,1,0,-1,-1,-1,0,1};
ll dy[] = {0,-1,-1,-1,0,1,1,1};
ll dxx[] = {1,-1,0,0};
ll dyy[] = {0,0,-1,1};

struct abc
{
  ll x;
  ll y;  
};

bool func( abc a, abc b){
  if(a.x<b.x)
    return true;
    return false;
}

ll intpoint(ll x1, ll y1, ll x2, ll y2) { return ( __gcd(abs(x1-x2),abs(y1-y2))+1); }

ll powr(ll x,ll y){if(y==0)return 1;if(y%2){ll ans=powr(x,y/2);
return (((x*ans))*ans);} else{ll ans=powr(x,y/2);return (ans*ans);}
}

bool isvalid(ll x,ll y,ll n,ll m) { return (x>=0&&x<n&&y>=0&&y<m); }

ll modexpo(ll x,ll y){if(y==0)return 1;if(y%2){ll viky=modexpo(x,y/2);
return (((x*viky)%mod)*viky)%mod;}else{ll viky=modexpo(x,y/2);return (viky*viky)%mod;
}}


int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        ll n=s.length();
        ll i,j,a[n],d=0;
        for(i=0;i<n;i++)
          a[i]=0;
        for(i=0;i<n;i++)
        {
            if(s[i]!='.')
            {
                ll p=s[i]-48;
                ll l=max(i-p,d);
                ll r=min(i+p,n-1);
                for(j=l;j<=r;j++)
                {
                  a[j]++;
                }
            }
        }
        ll f=0;
        for(ll i=0;i<n;i++)
        {
            if(a[i]>1)
            {
            f=1;
            break;
            }
        }
        if(f==0)
         cout<<"safe"<<endl;
        else
          cout<<"unsafe"<<endl;
    }

    
return 0;
}


// printf("%.6lf",x);
// auto i : V
// std::greater<int>()
// (a%p*modexpo(b,p-2)%p)%p;

// sort (arr,arr+n);
// do 
// {

// } while ( std::next_permutation(arr,arr+n));

//  a.lower_bound(item); //for set only

// (binary_search(arr, arr + n, item));
