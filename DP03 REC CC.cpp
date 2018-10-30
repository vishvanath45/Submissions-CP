// DP03 REC CC

#include<bits/stdc++.h>

#define ll long long int
using namespace std;

ll up[1000001];
ll down[1000001];


ll a[100005],b[100005];

int main()
{

    ll szea,query;

    cin>>szea>>query;

    ll pkp;

    for(int i=0; i<szea; i++)
    {
        cin>>pkp;

        if(i%2==0)
            up[i]=pkp;
        down[i]=pkp;

    }

    for(int i=0; i<szea; i++)
    {
        cin>>pkp;

        if(i%2==1)
            up[i]=pkp;
            else
            down[i]=pkp;

    }
/*
for(int i =0; i<szea; i++)
    {
    cout<<up[i]<<" ";
    }
    cout<<"\n";

for(int i =0; i<szea; i++)
    {
    cout<<down[i]<<" ";
    }
    cout<<"\n";

*/

    for(int i =1; i<szea; i++)
    {
        up[i]+=up[i-1];
        down[i]+=down[i-1];
    }
/*
     cout<<"\n";
     cout<<"\n";

for(int i =0; i<szea; i++)
    {
    cout<<up[i]<<" ";
    }
    cout<<"\n";

for(int i =0; i<szea; i++)
    {
    cout<<down[i]<<" ";
    }
    cout<<"\n";

    cout<<"\n";
     cout<<"\n";
*/

    ll qtype, l,r;


    while(query--)

    {
    cin>>qtype>>l>>r;

    if(qtype==1)
    {

        if((l-1)%2==1)
        {
        if(l!=1)
            cout<<down[r-1]-down[l-2]<<"\n";
            else
            cout<<down[r-1]<<"\n";
        }
        else
        {
        if(l!=1)
            cout<<up[r-1]-up[l-2]<<"\n";
            else
            cout<<up[r-1]<<"\n";
        }

    }
    else
    {

        if((l-1)%2==0)
        {
        if(l!=1)
            cout<<down[r-1]-down[l-2]<<"\n";
            else
            cout<<down[r-1]<<"\n";
        }
        else
        {
        if(l!=1)
            cout<<up[r-1]-up[l-2]<<"\n";
            else
            cout<<up[r-1]<<"\n";
        }


    }
}

    return 0;

}
