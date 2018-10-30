// 978 C CF
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

ll hall;
ll card;

cin>>hall>>card;

ll cumhall[hall+1];

cumhall[0] = 0;
ll roomnow = 0;

for(ll i =1; i <=hall ; i++)
{
	ll indiroom;
	cin >> indiroom;
	roomnow += indiroom;
	cumhall[i] = roomnow;

	// cout<<cumhall[i]<<" ";
}

ll cumsum = 0;

ll index = 0;


for (ll i = 0 ; i < card ; i++)
{
	ll cardno;

	cin>>cardno;

	while(cumhall[index] < cardno)
	{
		index++;
	}

	if(cumhall[index] >= cardno)
	{
		ll dormnumber = index;
		ll roomnumber = cardno - cumhall[index-1];
		cout<<dormnumber << " "<< roomnumber <<"\n";
	}




}

return 0;
}