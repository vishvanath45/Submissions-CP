//DP04 REC CC

#include<bits/stdc++.h>
#define ll long long int
using namespace std;



/*
ll maxpt(int val[], int i,int n )
{

    if(i==n-1||i==n-2)
        return val[i];
    else if (DP[i]!=-1)
        return DP[i];
    else
    {
        vector <int> v;

        for(int k = i+2; k<n; k++)
        {
            v.push_back(maxpt(val,k,n));

        }
        int maxi=*max_element(v.begin(), v.end());
        DP[i] =maxi;
        return DP[i];

    }
}
*/






int main()
{
    ll t;
    cin>>t;

    for(ll pqr = 1; pqr<=t;pqr++)
    {
        ll n;
        cin>>n;


        ll val[n];

        for(ll i =0; i<n; i++)
            cin>>val[i];
        ll DP[n]={0};


        DP[n-2]=val[n-2];
        DP[n-1]=val[n-1];


        for(ll i = n-3; i>=0; i--)
        {
            //cout<<"outer loop is runnint \n";
            ll maxi =-1;

            if(DP[i]==0)
            {
            for(ll j = i+2; j<n; j++)
            {
             //   cout<<"inner loop is ru \n";
                ll pkp = val[i]+DP[j];
             //   cout<<"pkp is coming as "<<pkp<<"\n";
                if(maxi<pkp)
                    maxi=pkp;
            }
            }
            DP[i]=maxi;
        }

   //         for(int i =0;i<n;i++)
    //        cout<<DP[i]<<" # ";

            sort(DP,DP+n,greater<ll>());
            printf("Case %lld: ",pqr);
            cout<<DP[0]<<"\n";

    }

    return 0;

}
