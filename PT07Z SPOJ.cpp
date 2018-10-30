// PT07Z SPOj

#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long int


/*
11
1 2
1 3
2 4
2 5
4 6
4 7
6 8
7 11
5 9
9 10
*/


int visited[10005]={0};

vector <int> adj[10005];

int x=0;

vector <int> v;

set< pair <int,int> > v2;


void DFS( int n1,int ori)
{

v2.insert(make_pair(ori,n1));

visited[n1]=1;


        for(vector <int>::iterator pp = adj[n1].begin() ; pp!=adj[n1].end(); pp++)
        {
           // cout<<n1<<"  visiting "<<*pp<<endl;

            if(visited[*pp]!=1)
            {
                DFS(*pp,ori+1);
            }

        }
        //cout<<x++;
        return;
}

int main()
{

    int n,e;
    cin>>n;

    e = n-1;


    for(int i=0;i<e;i++)
    {
    int l,r;
    cin>>l>>r;
    adj[l-1].pb(r-1);
    adj[r-1].pb(l-1);

    }

    DFS(0,0);

    set <pair<int,int > >::iterator i =v2.end();

    i--;


   // cout<<(i)->first;
   // cout<<(i)->second;

    int pkp = i->second;


    v2.clear();


    for(int i =0;i<=n;i++)
    visited[i]=0;


    DFS(pkp,0);

    i =v2.end();

    i--;


    cout<<(i)->first;


    return 0;


}
