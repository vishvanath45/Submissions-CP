
#include<bits/stdc++.h>

#define pb push_back
using namespace std;

int main()
{

    int n,e;
    scanf("%d%d",&n,&e);


    vector <int> adj[n];

    int indegree[100000]= {0};

    int l,r;


    for(int i =0 ; i< e; i++)
    {
        scanf("%d%d",&l,&r);

        adj[l-1].pb(r-1);
        indegree[r-1]++;

    }

    set <int> s;

    for(int i =0 ; i <n; i++)
    {
        if(indegree[i]==0)
            s.insert(i);
    }

    int llau;

    vector <int> ans;

    while(s.size())
    {
   set<int>::iterator it = s.begin();
       // cout<<*it+1<<" ";
        int p = *it;

        ans.pb(p+1);

        for(vector<int>::iterator ite = adj[p].begin(); ite !=adj[p].end(); ite++)
        {
            indegree[*ite]--;
            if(indegree[*ite]==0)
            {
               s.insert(*ite);
            }
        }

        s.erase(it);

    }


    if(ans.size()!=n)
    printf("Sandro fails.");
    else
    {
    for(int i =0 ; i <ans.size();i++)
    cout<<ans[i]<<" ";
    }

    cout<<"\n";
return 0;



}
