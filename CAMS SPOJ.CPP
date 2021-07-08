//CAM5 SPOJ
// just maine vector memset nahi kiya tha.
#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll int


ll visited[100005]={0};

vector <vector<int> > adj(100005);

ll x=0;

void DFS(ll n1)
{

      //  cout<<n1<<"\n";
        if(visited[n1]==1)
        return;
        else
        {
        visited[n1]=1;
        for(vector <int>::iterator pp = adj[n1].begin() ; pp!=adj[n1].end(); pp++)
        {
           // cout<<n1<<"  visiting "<<*pp<<endl;
            if(visited[*pp]!=1)
            {
                DFS(*pp);
            }
            //cout<<"** \n";
        }
        }
        //cout<<x++;

}
int main()
{

ll t;
    scanf("%lld",&t);
while(t--)
{

   ll n,e;
    cin>>n>>e;
    memset(visited,0,sizeof visited);
    for(int i=0;i<n;i++)
        adj[i].clear();

    for(ll i=0;i<e;i++)
    {

   ll l,r;
    cin>>l>>r;

    adj[l].pb(r);
    adj[r].pb(l);

    }
   ll counte=0;
    // for unconnected
    for(ll i=0;i<n;i++)
    {

    if(visited[i]==0)
       {
       counte++;
       DFS(i);

        }
    }


    printf("%d \n",counte);


}


    return 0;


}
