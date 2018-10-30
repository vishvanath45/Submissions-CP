// BFS IMP AGAIN

#include<bits/stdc++.h>

#define pb push_back

using namespace std;

int main()
{

    int n;

    int visited[6]= {0};


    vector <int> adj[7];


    vector<int>::iterator p;

    adj[1].pb(1);
    adj[1].pb(6);
    adj[6].pb(1);
    adj[1].pb(2);
    adj[2].pb(1);
    adj[1].pb(5);
    adj[5].pb(1);
    adj[5].pb(4);
    adj[4].pb(5);
    adj[4].pb(3);
    adj[3].pb(4);

    queue<int> q;

    q.push(adj[1][0]);


    while(q.size()!=0)
    {

        int q2=q.front();

        cout<<q2<<"***"<<"\n";

        q.pop();


        visited[q2]=1;

        for(p=adj[q2].begin(); p<adj[q2].end(); p++)
        {
            if(visited[*p]!=1)
            {
                visited[*p]=1;
                q.push(*p);
            }

        }




    }



return 0;



}
