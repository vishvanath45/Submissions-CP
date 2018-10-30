// 1042 A CF
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

ll t,m;

cin>>t>>m;

ll sum = 0 ;
ll max = -1;

ll arr[t];
for (int i = 0; i < t; ++i)
{
	cin>>arr[i];
	if(arr[i] > max)
	{
		max = arr[i];
	}
	/* code */
}



for(int i = 0 ; i < m ; i++)
{
	sort(arr, arr+t);
	arr[0] += 1;
}

sort(arr, arr+t);


	cout<<arr[t-1]<<" "<<max + m<<"\n";
return 0;
}
