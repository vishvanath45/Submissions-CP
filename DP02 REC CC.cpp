// DP02 REC CC

#include<bits/stdc++.h>

#define ll long long int
using namespace std;


ll dpodd[1000000];
ll dpeven[1000000];


int main()
{

    string s;

    cin>>s;

    ll l = s.length();

    int oe[l];

    for(int i=l-1; i>=0; i--)
    {
        if(s[i]%2==0)
            oe[i]=0;
        else
            oe[i]=1;
    }

    ll currodd=0;
    ll curreven =0;



    for(int i=l-1; i>=0; i--)
    {
        if(oe[i]==1)
        {
            currodd=currodd+1;
            dpodd[i]=currodd;
            dpeven[i]=curreven;
/*
cout<<"\ndp even\n";

    for(int i=0; i<l; i++)
    {

            cout<<dpeven[i]<<" ";

    }

cout<<"\ndp odd\n";

    for(int i=0; i<l; i++)
    {

            cout<<dpodd[i]<<" ";

    }
cout<<"\n";
*/
        }
        else
        {
            curreven=curreven+1;

            dpodd[i]=currodd;
            dpeven[i]=curreven;

/*

cout<<"\ndp even\n";

    for(int i=0; i<l; i++)
    {

            cout<<dpeven[i]<<" ";

    }

cout<<"\ndp odd\n";

    for(int i=0; i<l; i++)
    {

            cout<<dpodd[i]<<" ";

    }
cout<<"\n";
        }
*/
    }
    }




    for(int i=0; i<l; i++)
    {
       // if(oe[i]==1)
       // {
       //    cout<<dpodd[i]<<" ";
       // }
      //  else
      //  {
            cout<<dpeven[i]<<" ";
      //  }
    }


    return 0;


}

