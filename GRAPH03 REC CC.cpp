// GRAPH03 REC CC
#include<bits/stdc++.h>

using namespace std;
#define pb push_back

int main()
{

    int v,e;

    cin>>v>>e;

    vector<int> adj[v];


    for(int i=0; i<e; i++)
    {
        int l,r;
        cin>>l>>r;
        adj[l-1].pb(r-1);
        adj[r-1].pb(l-1);

    }

    int visited[v]= {0};
    int headnode;
    cin>>headnode;
    headnode-=1;

    visited[headnode]=1;

    queue<int> q;

    q.push(headnode);

    vector<int>::iterator pp;


    while(q.size())
    {

        int xx = q.front();
        q.pop();

        for(pp=adj[xx].begin(); pp<adj[xx].end(); pp++)
        {


       // cout<<*pp+1<<"\n";
            if(visited[*pp]==0)
            {
                q.push(*pp);
                visited[*pp]=1;

            }
        }
    }

    int sum=0;
    for(int i =0; i<v; i++)
    {
        if(visited[i]==0)
            sum+=1;
    }

    cout<<sum<<"\n";


    return 0;
}



