// 490 E CF
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mp make_pair
#define M (ll)(1e9+7)


int visited[100005];

int dfs(int paren			)



int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

int n,m,s;

cin>>n>>m>>s;

vector<int> vtk[n];

for(int i = 0 ;i < m ; i++)
{
	int o,p;
	cin>>o>>p;
	vtk[o].push_back(p);
}


return 0;
}