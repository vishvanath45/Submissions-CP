#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mp make_pair
#define M (ll)(1e9+7)

vector<ll>v[26];

// ll a[100005];
ll has[100011];

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ll t,n,m,x,y,z,ans=0,f=0,i;
    string s;
    cin>>n;
    cin>>s;
    ll l=s.size();
    ll j;
    for(i=0;i<l;i++)
    {
        v[s[i]-'a'].pb(i);
    }
    ll a[26][1511];
    ll k=0;

    for(i=0;i<26;i++)
    {
        k=0;
        if(v[i].size()==0)
            {
                // cout<<"hbs\n";
                continue;
            }
        a[i][k]=v[i][0];
        k++;
        for(j=1;j<v[i].size();j++)
        {
            a[i][k++]=v[i][j]-v[i][j-1]-1;
        }
        a[i][k++]=l-1-v[i][j-1];
    }
    ll q;
    cin>>q;
    while(q--)
    {
        char cc;
        ll p;
        cin>>p>>cc;
        for(j=0;j<=v[cc-'a'].size();j++)
            cout<<a[cc-'a'][j]<<" ";
        cout<<"\n";
        ll qp=p;
        ll lft=0;
        ll ans=0;
        ll mans=0;
        ll kk=cc-'a';
        for(j=0;j<=v[kk].size();j++)
        {
            if(j==0)
            {
                if(p>=a[kk][j])
                {
                    p=p-a[kk][j];
                    ans=ans+a[kk][j]+1;
                    lft=j;
                }
                else
                {
                    ans=p;
                }
            }
            else
            {
                if(p>=a[kk][j])
                {
                    p=p-a[kk][j];
                    ans=ans+a[kk][j]+1;
                }
                else
                {
                    ans=ans+p;
                    mans=max(ans,mans);
                    ans=ans-a[kk][j];
                    p=p+a[kk][lft];
                    lft++;
                }
            }
        }
        cout<<mans<<"\n";
    }
    // for(i=0;i<26;i++)
    // {
    //     for(j=0;j<v[i].size()+1;j++)
    //         cout<<a[i][j]<<" ";
    //     cout<<"\n";
    // }
return 0;
}