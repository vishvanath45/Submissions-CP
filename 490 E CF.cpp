// 490 E CF
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mp make_pair
#define M (ll)(1e9+7)

int visited[100005]={0};
vector<int> adj[100005];

int visited_n[100005]={0};

void DFS1(int n1)   
{		
        visited_n[n1]=1;
        for(vector <int>::iterator pp = adj[n1].begin() ; pp!=adj[n1].end(); pp++)
        {
            if( visited_n[*pp]!=1)
            {
                DFS1(*pp);
            }
        }
        return;
}


void DFS(int n1)   
{		
        visited[n1]=1;
        for(vector <int>::iterator pp = adj[n1].begin() ; pp!=adj[n1].end(); pp++)
        {
            if( visited[*pp]!=1)
            {
                DFS(*pp);
            }
        }
        return;
}

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

for(int i = 0 ;i < m ; i++)
{
	int o,p;
	cin>>o>>p;
	adj[o-1].push_back(p-1);
}

DFS(s-1);

std::vector<int> unvisited_nodes;

for(int i  = 0 ; i < n ; i++)
{
	if(visited[i] == 0)
		unvisited_nodes.push_back(i);
}

std::vector< pair<int, int> > xx;

for(int i = 0 ; i < unvisited_nodes.size() ; i++)
{	
	//cout<<unvisited_nodes[i]<<"\n";
	DFS1(unvisited_nodes[i]);
	int count = 0;

	for(int j = 0 ; j < n ; j++)
	{
		if(visited_n[j] == 1 && visited[j] == 0)
			count++;
	}

	xx.push_back(make_pair(count, unvisited_nodes[i]));

	for(int i = 0 ; i < n ; i++)
	{
		visited_n[i] = visited[i];
	}
}

sort(xx.begin(), xx.end());

int ans =0;

for(int i = xx.size()-1 ; i>=0; i-- )
{
	//cout<<xx[i].first<<" "<<xx[i].second<<'\n';
	if(visited[xx[i].second] == 0)
	{ 
		DFS(xx[i].second);
		ans++;
	}
}



cout<<ans;
return 0;
}s