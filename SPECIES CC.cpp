// SPECIES CC
// incomplete


#include<bits/stdc++.h>

#define ll long long int
using namespace std;

int main()
{

    ll t;

    cin>>t;

    while(t--)
    {
        ll n;

        cin>>n;

        ll arr[n][n];



        for(ll i =0; i<n; i++)
            for(ll j =0 ; j< n ; j++)
            {
                char ch ;
                cin>>ch;

                if(ch == 'G')
                    arr[i][j]=3;
                else if(ch == 'B')
                    arr[i][j]=2;
                else if (ch == 'P')
                    arr[i][j]=1;
                else if(ch == '?')
                    arr[i][j]=-1;
                else
                    arr[i][j]=0;


            }

        int ans=0;



        for(ll i =0; i<n; i++)
            for(ll j =0 ; j< n ; j++)
            {

            if(arr[i][j]==3)
            {
                if(i>)

            }



            }





    }
