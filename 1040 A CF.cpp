// 1040 A CF
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

ll sze, pa, pb;

cin>>sze>>pa>>pb;

ll arr[sze];


for (int i = 0; i < sze; ++i)
{
	cin>>arr[i];
}


ll i = 0;
ll j = sze - 1;
ll cost = 0;

while(i<=j)
{
	///cout<<i<<" "<<j<<" "<<cost<<"\n";
	if(arr[i] == arr[j])
	{
		
		if(arr[i] == 2 && i != j)
			cost += 2*min(pa,pb);
		if(arr[i] == 2 && (i == j))
			{
				cost += min(pa, pb);
			}
	}
	else if(arr[i]+arr[j] == 3)
	{
		cost += pb;
	}
	else if(arr[i] + arr[j] == 2)
	{
		cost += pa;
	}
	else
	{
		cout<<"-1";
		return 0;
	}


		i++;
		j--;
}


cout<<cost;
return 0;
}