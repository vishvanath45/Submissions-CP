//BFS

// finally ab recognoze kar le raha h ki kitne graphs h iss cuurve mai


/*
6 5
1 2
1 3
1 4
2 5
2 6


6 4
1 2
2 3
4 4
5 6
*/
#include<bits/stdc++.h>

#define pb push_back
using namespace std;

int visited[10000];

int main()
{

    int n,e;
    cin>>n>>e;

    vector<int> adj[n];

    for(int i=0; i<e; i++)
    {
        int l,r;
        cin>>l>>r;
        adj[l-1].pb(r-1);
        adj[r-1].pb(l-1);

    }

        queue<int> q;

    for(int i =0; i<n ; i++)
    {
        if(visited[i]==0)
        {
        cout<<"now visiting "<<i+1<<"\n";
            visited[i]=1;
            q.push(i);

            while(q.size())
            {
                int kk = q.front();
                q.pop();


                for(vector<int>::iterator pp = adj[kk].begin(); pp!=adj[kk].end(); pp++)
                {
                    if(visited[*pp]==0)
                    {
                    cout<<"visiting "<<*pp+1<<"\n";
                        q.push(*pp);
                        visited[*pp]=1;
                    }
                }

            }


        }
    }
    return 0;
}
