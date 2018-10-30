// MONKS BIRTHDAY HE
//CORRECT

#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long int


/*
8 6
1 2
1 3
2 4
2 5
3 6
7 8
*/

vector <int> adj[1000];

int x=0;

int DFS( int n1,int counter,int visited[] )
{

        counter++;

        visited[n1]=1;

        for(vector <int>::iterator pp = adj[n1].begin() ; pp!=adj[n1].end(); pp++)
        {
           // cout<<n1<<"  visiting "<<*pp<<endl;
            if(visited[*pp]!=1)
            {

               counter= DFS(*pp,counter,visited);

            }
        }
        //cout<<x++;
        return counter;
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

    }

    // for unconnected
    vector <int> length;
    for(int i=0;i<n;i++)
    {
   // if(visited[i]==0)
  int visited[1000]={0};
    {
    int k=DFS(i,0,visited);
    length.pb(k);
    }
    }

int min = length[0];

for(int i=1;i<length.size();i++)
    {if(min>length[i])
        min=length[i];

//    cout<<length[i]<<"\n";
    }

cout<<min<<"\n";
    return 0;


}
