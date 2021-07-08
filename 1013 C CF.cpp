// 1013 C CF
#include<bits/stdc++.h>
using namespace std;
// #define ll long long int
#define pb push_back
#define mp make_pair
#define M (ll)(1e9+7)

int main()
{

    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--)
    {
        int nodes;
        cin>>nodes;

        int arrr[5000];

        for(int i = 0 ; i < nodes ; i++)
            cin>>arrr[i];

    int ll = nodes + 1;
    int lvl = log(ll)/log(2);

    // cout<<ll<<" "<<lvl<<" -- ";

    vector<int> nodev ;
    
    for(int i = nodes -1 ; i >= 0 ; i--)
    {
        nodev.push_back(arrr[i]);
    }
    
    // cout<<"asd";
    vector<int> vp;
    
    while(lvl > 0)
    {   
        vp.clear();
        int nodes_at_lvl = pow(2,(lvl-1));

        if(nodes_at_lvl == 1)
        {
            cout<<nodev[0]<<"\n";
            break;
        }
        if(nodes_at_lvl == 2)
            {
                cout<<nodev[0]+nodev[1]+nodev[2]<<"\n";
                break;
            }
        
        for(int i = 0 ; i < nodes_at_lvl;)
        {
            int a = nodev[i];
            int b = nodev[i+1];
            i+=2;
            vp.push_back(max(a,b));
        }

        // for(int i = 0 ;i < vp.size() ;i++)
        //     cout<<vp[i]<<" ";
        
    for(int i = 0 ; i < nodes_at_lvl;)
        {
            nodev.erase(nodev.begin());
            i++;
        }
        
        for(int i = 0 ; i < vp.size() ; i++)
        {
            nodev[i] = nodev[i] + vp[i];
        }
        
        lvl--;
    }

}
   
    
}