//BUGLIFE SPOJ

#include<bits/stdc++.h>
#define pb push_back
#include<queue>
using namespace std;

#define ll long long int

int main()
{
    #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
    #endif
int t;
cin>>t;

for(int hh=0; hh<t; hh++)
{
    int n; //no. of nodes
    cin>>n;

    int sex[n]= {0};

    vector<int> adj[n];

    vector<int>::iterator pp;

    int k; //no. of edges
    cin>>k;

    adj[0].pb(0);

    for(int i=0; i<k; i++)
    {
        int l,r;
        cin>>l>>r;
        adj[l-1].pb(r-1);
        adj[r-1].pb(l-1);
    }

    int flag=0;

    queue<int> q;


    for(int sk=0;sk<n;sk++)

    q.push(adj[0][0]);

    sex[0]=1;  //given male


    while(q.size())
    {
        int q2=q.front();
        q.pop();

        int previous=sex[q2];

        for(pp=adj[q2].begin(); pp<adj[q2].end(); pp++)
        {
            if(sex[*pp]==0)
            {
                q.push(*pp);

                if(previous==1)
                {
                    sex[*pp]=-1;
                    previous=-1;
                }
                else if(previous == -1)
                {
                    sex[*pp]=1;
                    previous=1;
                }
            }
            else
            {
                if(sex[*pp]==previous)
                {
                    cout<<"lalala\n ";
                    flag=1;
                  break;
                }

            }

            if(flag==1)
            break;

        }


    }
    if(flag==1)
    {printf("Scenario #%d\n",hh+1);
    printf("Suspicious bugs found!\n");
    }
    else
    {printf("Scenario #%d\n",hh+1);
    printf("No Suspicious bugs found!\n");
    }

}
return 0;


}
