// BUGLIFE v4 SPOJ

#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long int

int main()
{

    ll t;
    cin>>t;

    for(ll k=1; k<=t; k++)
    {

        ll n,e;  //nodes, edges

        cin>>n>>e;


        ll gender[3000]= {0}; // 1 male -1 female

        vector <int> adj[n];

        vector<int>::iterator pp;

        for(ll i=0; i<e; i++)
        {
            ll l,r;
            cin>>l>>r;
            adj[l-1].pb(r-1);
            adj[r-1].pb(l-1);
        }

        ll flag=0;
        ll previous;

        for(ll i=0; i<n; i++)
        {
            if(gender[i]==0)
            {
                gender[i]=1;


                queue<int> q;
                q.push(adj[i][0]);

                while(q.size())
                {
                    previous=gender[i];

                    for(pp=adj[i].begin(); pp<adj[i].end(); pp++)
                    {
                        if(gender[*pp]==0)
                        {
                            q.push(*pp);
                            gender[*pp]=-1*previous;
                            previous=-1*previous;
                        }
                        else if(gender[*pp]==previous)
                        {
                            flag=1;
                            break;
                        }



                    }
                    q.pop();
                    if(flag)
                        break;
                }
            }
        }

        printf("Scenario #%d:\n",k);
        if(flag==0)
            cout<<"No suspicious bugs found!\n";
        else
            cout<<"Suspicious bugs found!\n";


    }

    return 0;

}
