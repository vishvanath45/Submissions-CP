#include<stdio.h>
#include<algorithm>
#include<iostream>
using namespace std;


int main()
{

    long long int olk,t,i,m,n,steps=0;
    cin>>t;

    while(t--)
    {
        cin>>m;
        n=m+1;
        olk=n;
         m=4*m;
        for(steps=1;1;steps++)
        {
            if(n%m==0)
            {
                cout<<steps<<"\n";
                break;
            }
            else
            {
                n=n+olk;
            }

        }


    }

    return 0;




}
