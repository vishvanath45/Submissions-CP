// 1020 B CF
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

ll n,m;	

cin>>n>>m;

ll sum=0;

ll c = 0;

while(sum<=n)
{
	sum+=4;
	c++;
	cout<<4;
}
cout<<"\n";
for(int i = 0 ; i < c-1; i++)
{
	cout<<5;
}
cout<<6;
// ll p = n ;

// ll x = 0;

// while(p)
// {
// 	if(p>9)
// 	{
// 		x = x*10 + 9;
// 		p = p - 9;
// 	}
// 	else
// 	{
// 		x = x*10 + p;
// 		p = 0;
// 	}
// }

// cout<<x;


return 0;
}