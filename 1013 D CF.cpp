// 1013 D CF
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

ll n, m, q;
cin>>n>>m>>q;

int rows[n]={0};
int col[m]={0};

for(int i = 0 ; i < q ;i++)
{
	int a, b;
	cin>>a>>b;
	rows[a-1]++;
	col[b-1]++;
}

int remp=0;
int cemp=0;

for(int i = 0 ; i < n; i++)
	{

		if(rows[i] == 0)
		remp++;
}


for(int i = 0 ; i < m; i++)
	{
		
		if( col[i] == 0)
		cemp++;
}
if(remp>cemp)
cout<<remp;
else
cout<<cemp;
return 0;
}