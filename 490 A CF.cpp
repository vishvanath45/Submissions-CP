// 490 A CF
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

int t;
cin>>t;
int k;
cin>>k;

int arr[t];

for(int i  = 0 ;  i < t ; i++)
cin>>arr[i];

int ans = 0;

int mm = 0;
for(int i = 0 ; i < t ; i++)
{
	if(arr[i] <= k)
		{
			ans++;
			mm = i;
		}
	else
	{
		mm = i;
		break;

	}
}


for(int i = t-1 ; i > mm ; i--)
{
	if(arr[i] <= k)
		ans++;
	else
		break;
}

cout<<ans;

return 0;
}