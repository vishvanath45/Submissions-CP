#include<stdio.h>

using namespace std;
#include<algorithm>
#include<iostream>

int main()
{
int tt,k,i,n;
    cin>>tt;
    while(tt--)
    {
        cin>>n;
        cin>>k;

        int sze=n;
        int sze1=sze;
        int arr[n];
        for(i=0; i<n; i++)
            arr[i]=i+1;

        if(k==0)
        {
            for(i=1; i<=n; i++)
                cout<<i<<" ";
            cout<<"\n";
        }
        else if(n%2==0&&k==(n/2))
        {
            for(i=0;i<n;i++)
                cout<<arr[(k+i)%n]<<" ";
            cout<<"\n";
        }
        else
        {
            cout<<"CAPTAIN AMERICA EVADES\n";
        }

    }



}
