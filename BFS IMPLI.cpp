//BFS IMPLI

#include<bits/stdc++.h>

#include<queue>
using namespace std;

#define ll long long int

int main()
{

    queue<int> q;

    int visit[100]={0};




    vector<int> adj[4];


    vector<int>::iterator p;

    adj[0].push_back(2);
    adj[1].push_back(2);
    adj[1].push_back(3);
    adj[2].push_back(0);
    adj[2].push_back(3);
    adj[3].push_back(1);
    adj[3].push_back(2);


    q.push(adj[0][0]);

    while(q.size())
    {


        int q2=q.front();

        cout<<q2<<"****\n";

        q.pop();

        visit[q2]=1;

        for( p= adj[q2].begin(); p<adj[q2].end(); p++ )
        {
            if(visit[*p]!=1)
            {
                visit[*p]=1;
                q.push(*p);


            }

        }
    }
}
