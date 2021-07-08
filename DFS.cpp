// DFS & topological sort

#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long int

int visited[1000]={0};

vector <int> adj[1000];

int x=0;

vector <int> v;

void DFS(int n1)   
{

        cout<<n1+1<<"\n";
                visited[n1]=1;
        for(vector <int>::iterator pp = adj[n1].begin() ; pp!=adj[n1].end(); pp++)
        {
           // cout<<n1<<"  visiting "<<*pp<<endl;

            if(visited[*pp]!=1)
            {
                DFS(*pp);
            }


        }
        //only thing done for topo sort
        // v.push_back(n1);

        //cout<<x++;
        return;
}

int main()
{

    int n,e;
    cin>>n>>e;

    for(int i=0;i<e;i++)
    {
    int l,r;
    cin>>l>>r;
    adj[l-1].pb(r-1);
    adj[r-1].pb(l-1);

    }

    // for unconnected
    for(int i=0;i<n;i++)
    {
    if(visited[i]==0)////
        DFS(i);

    }

for(int i = v.size()-1;i>=0;i--)
    cout<<v[i]<<" * \n ";




    return 0;


}
