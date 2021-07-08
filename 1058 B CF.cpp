// 1058 B CF
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

ll n,d;

cin>>n>>d;

ll t;

cin>>t;

while(t--)
{
ll x,y;
cin>>x>>y;


if(((y-x+d)*(y-x-d) <= 0 ) && ( (x+y-d)*(y+x+d-2*n) <=0 ))
{
	cout<<"YES\n";
}
else
{
	cout<<"NO\n";
}

}


return 0;
}