// GRAPH02 REC CC

#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long int

int main()
{

int t;
cin>>t;



vector<int> adj[t];

vector<int>::iterator pp;

for(int i=0;i<t;i++)
{

int l,r;
cin>>l>>r;
adj[l-1].pb(r-1);

}

queue<int> q;
q.push(0);

int level[t]={0};

level[0]=1;

int m=0;

while(q.size())
{

for(int dd=0;dd<level[m];dd++)
{
int s = q.front();

q.pop();

for(pp=adj[s].begin();pp<adj[s].end();pp++)
{
q.push(*pp);
}

}

m++;
level[m]=q.size();


}

cin>>m;

cout<<level[m-1];

return 0;


}
