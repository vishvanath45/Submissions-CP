// 1040 B CF
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

ll sze,k;

cin>>sze>>k;

ll ok = 2*k+1;

ll rem = sze%ok;

ll mini[ok];


ll miniindex = sze+1;
ll minival = sze+1;

for(int i = 0 ; i < ok ; i++)
{
	mini[i] = 1+ (sze - i - (k+1) + ok-1)/ok;

	if(mini[i] <= minival)
	{
		minival = mini[i];
		miniindex = i+1;
	}
	
}


ll times = minival;

cout<<times<<"\n";
while(times--)
{
	cout<<miniindex<<" ";	
	miniindex += 2*k+1;
}

return 0;
}
