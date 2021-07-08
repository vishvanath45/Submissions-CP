// GRAPHS05 CC REC

#include<bits/stdc++.h>
#define pb push_back
using namespace std;

int visited[100001]= {0};
int counter=0;
vector <int> adj[100001];

int DFS(int i, int counter)
{



    visited[i]++;

    for(vector<int>::iterator pp = adj[i].begin(); pp!=adj[i].end(); pp++)
    {
            if(visited[*pp]!=1)
            {

             //   cout<<i<<"  visiting "<<*pp<<endl;

                counter = DFS(*pp,counter+1);
            }
    }

    return counter;

}

int main()
{
int n,e;
cin>>n>>e;


for(int i =0;i<e;i++)
{
int l,r;
cin>>l>>r;
adj[l-1].pb(r-1);
adj[r-1].pb(l-1);

}

vector <int> length;

int maxi;

for(int i =0;i<n;i++)
{
//memset(visited,0,sizeof(visited));
if(visited[i]==0)
{
cout<<"not visited "<<i+1<<"\n";
maxi=DFS(i,0);
length.pb(maxi);

}

}
length.pb(0);

int maxo=0;
cout<<"length size "<<length.size()<<"\n";
for(int i=0;i<length.size();i++)
{

cout<<length[i]<<"\n";
//if(length[i]>maxo)
//maxo=length[i];
}

//cout<<maxo<<"\n";
return 0;

}






