// BUGLIFE v3 SPOJ

#include<bits/stdc++.h>

using namespace std;
#define pb push_back

int main()
{

    int t;
    cin>>t;

    while(t--)
    {

        int n,e;  //nodes, edges

        cin>>n;
        cin>>e;

        int sex[n]= {0};

        vector<int> adj[n];

        vector<int>::iterator pp;

        int flag=0;

        for(int i=0; i<e; i++)
        {
            int l,r;
            cin>>l>>r;
            adj[l-1].pb(r-1);
            adj[r-1].pb(l-1);
        }



        for(int tt=0; tt<n; tt++)
        {

            if(sex[tt]==0)
            {

                queue<int> q;

                sex[tt]=1;   //defalt

                q.push(adj[tt][0]);

                while(q.size())
                {

                cout<<"q size is "<<q.size()<<"\n";

                    int rnd = q.front();

                    q.pop();
                cout<<"after pooping "<<q.size()<<"\n";

                    int psex= sex[rnd];

                    for(pp=adj[rnd].begin(); pp<adj[rnd].end(); pp++)
                    {
                        if(sex[*pp]==0)
                        {
                            q.push(*pp);
                            if(psex==1)
                            {
                                sex[*pp]=-1;
                                psex=-1;
                            }
                            else if(psex == -1)
                            {
                                sex[*pp]=1;
                                psex=1;
                            }
                        }

                        else
                        {
                            if(sex[*pp]==psex)
                            {
                                cout<<"lalala\n ";
                                flag=1;
                                break;
                            }

                            if(flag)
                                break;

                        }
                        if(flag)
                            break;

                    }
                        if(flag)
                            break;
                }
                if(flag)
                break;
            }
            if(flag)
                break;

        }




        if(flag)
        {
            cout<<"bugs found\n";
        }
        else
            cout<<"no bugs found\n";












    }

    return 0;

}
