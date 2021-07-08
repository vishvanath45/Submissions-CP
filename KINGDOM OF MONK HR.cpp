// KINGDOM OF MONK HR


#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long int


/*
4 3
1 2
2 3
3 1
1 2 3 5
*/

int visited[1000]= {0};


vector <int> adj[1000];

int value[1000]= {0};

int x=0;

int DFS( int n1,int counter,int kkk[] )
{

    counter+=value[n1];

    visited[n1]=1;
    kkk[n1]=1;

    for(vector <int>::iterator pp = adj[n1].begin() ; pp!=adj[n1].end(); pp++)
    {
        //cout<<n1<<"  visiting "<<*pp<<endl;

        if(kkk[*pp]!=1)
        {

            counter = DFS(*pp,counter,kkk);

        }
    }
    //cout<<x++;
    return counter;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int n,e;
    cin>>n>>e;


    for(int i=0; i<e; i++)
    {
        int l,r;
        cin>>l>>r;
        adj[l-1].pb(r-1);
        adj[r-1].pb(l-1);
    }

    for(int i=0; i<n; i++)
        cin>>value[i];

    // for unconnected
    vector <int> length;
    for(int i=0; i<n; i++)
    {
        if(visited[i]==0)
        {
        int kkk[100000]={0};

            int k=DFS(i,0,kkk);
            length.pb(k);
        }
    }

int maxi=0;

    for(int i=0; i<length.size(); i++)
        {
        if(maxi<length[i])
        maxi=length[i];
        }

        cout<<maxi<<"\n";

    }
    return 0;


}
