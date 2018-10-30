// 767 A v2 CF


#include<bits/stdc++.h>
#define pb push_back
#include<queue>
using namespace std;

#define ll long long int

int main()
{

    int t;
    cin>>t;

    int arr[t];

    int dayarr[t]={0};

    for(int i=0; i<t; i++)
    {
        int value;
        cin>>value;
        arr[i]=value;
        dayarr[t-value]=i;

    }


    // for(int i=0; i<t; i++)
    // cout<<dayarr[i]<<" ";
    //  cout<<"\n";

int tt=0;
int m=0;

    for(int i =0 ; i<t; i++)
    {


        int currday =i;

        int t2=t;

        for(tt=m; tt<t2; tt++)
        {
        cout<<"running for "<<tt+1<<"\n";
            if(dayarr[tt]<=i)
            {
                if(dayarr[tt]!=-1)
                    {cout<<t-tt<<" ";
                     m++;
                     }
                dayarr[tt]=-1;

            }
            else
            {
                t2=0;
                break;
            }

        }


        cout<<"\n";


    }


    return 0;

}


