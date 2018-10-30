
// 415 D CF

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mp make_pair
int main()
{

#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif

int a,b;

cin>>a>>b;

std::vector<int> v[2009];


for (int i = 1; i < a+1; ++i)
{

for(int j = i; j <a+1;j+=i)
{

		v[j].pb(i);
	
}
}

// for( ll i =1 ; i <=a ; i++)
// {
//     for(ll j = 0 ; j <v[i].size(); j++)
//     cout<<v[i][j]<<" ";
//     cout<<"\n";
// }


int dp[2009][2009];

for(int i = 1; i<a+1 ;i++ )
dp[1][i]=1;


for(int i=2;i<=b;i++)
{
	for(int j = 1; j<=a;j++)
	{
		for (int k = 0; k < v[j].size(); k++)
		{
			/* code */
			ll facto = v[j][k];
			// cout<<facto<<"*\n";
			dp[i][j] +=dp[i-1][facto];
			dp[i][j] = dp[i][j]%(1000000007);
		}
// 		cout<<dp[i][j]<<" ";
	}
	// cout<<"\n";
}

int aa=0;

for (int i = 1; i <= a; i++)
{
	aa+=dp[b][i];
	aa=aa%(1000000007);
	/* code */
}

cout<<aa;

// cout<<"Asdasda";

return 0;
}