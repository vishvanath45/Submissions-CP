// ABC12C SPOJ

#include<bits/stdc++.h>
#define ll long long int
using namespace std;


int main()
{

    int t;

    cin>>t;

    while(t--)
    {
        int n,k;
        cin>>n>>k;

        int price[k+1];

        for(int i =1; i<=k; i++)
            cin>>price[i];

        int dp[k]= {0};

        for(int i =1; i<=k; i++)
        {
            dp[i]=price[i];
        }



        for( int i =2 ; i<=k; i++)
        {

            for(int j = 1; j<i; j++)
            {
                if(price[i-j]==-1||dp[j]==-1)
                    continue;
                if(dp[i]==-1)
                    dp[i]=dp[j]+price[i-j];
                else
                    dp[i]= min(dp[i],dp[j]+price[i-j]);


            }
        }

        if(k==0)
            cout<<0<<"\n";
        else
            cout<<dp[k]<<"\n";


    }

    return 0;

}
