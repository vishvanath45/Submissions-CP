// Dijikstra

#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long int

set < pair<int, int > > s;


vector < pair <int, int >> adj[1000];


int main()
{

    int n,e;
    cin>>n>>e;


    for(int i=0; i<e; i++)
    {
        int l,r,weight;
        cin>>l>>r>>weight;
        adj[l].push_back(make_pair(r,weight));
    }


vector <int > v(1000, INT_MAX);




}
