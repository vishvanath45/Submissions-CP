// 1027 B CF
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

ll sze, q;
cin>>sze>>q;

ll r, c;

while(q--)
{
	cin>>r>>c;


		ll pos = (r-1)*sze + c;

		if((r+c)%2 == 0)
		{
			cout<<(pos+1)/2<<"\n";
		}
		else
		{
			cout<<(pos+1)/2 + (sze*sze+1)/2<<"\n";
		}
}

return 0;
}