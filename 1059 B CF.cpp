// 1059 B CF
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

ll r,c;

cin>>r>>c;
ll arr[r][c];


for(ll i = 0 ; i < r; i++)
{
	string s;
	cin>>s;

	for(ll j  = 0 ; j < c ; j++)
	{
		if(s[j] == '.')
			arr[i][j] = -1;
		else
			arr[i][j] = 2;
	}
}


for(ll i = 1; i < r-1 ; i++)
{
	for(ll j = 1 ; j < c-1 ; j++)
	{

		if(arr[i-1][j-1] > 0 && arr[i-1][j] >0 && arr[i-1][j+1] >0 && arr[i][j+1] >0 && arr[i+1][j+1] >0 && 
			arr[i+1][j] > 0 && arr[i+1][j-1] >0 && arr[i][j-1] > 0)
		{
			arr[i-1][j-1]*=2;
			arr[i-1][j]*=2;
			arr[i-1][j+1]*=2;
			arr[i][j+1]*=2;
			arr[i+1][j+1]*=2;
			arr[i+1][j]*=2;
			arr[i+1][j-1]*=2;
			arr[i][j-1]*=2;
		}
	}
}

for(ll i = 0; i < r ; i++)
{
	for(ll j = 0 ; j < c ; j++)
	{
		//cout<<arr[i][j]<<" ";
		if(arr[i][j]==2)
		{
			cout<<"NO";
			return 0;
		}
	}
	//cout<<"\n";
}

cout<<"YES";

return 0;
}

