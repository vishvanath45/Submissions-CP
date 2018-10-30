// 767 A CF

//wrong h, refer v2
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

    int dayarr[t];

    for(int i=0; i<t; i++)
    {
        int value;
        cin>>value;
        arr[i]=value;
        dayarr[t-value]=i;

    }


      for(int i=0; i<t; i++)
      cout<<dayarr[i]<<" ";
       cout<<"\n";


    for(int i =0; i<t; i++)
    {
       // cout<<"\ndayarr[i] "<<dayarr[i]<<" i are "<<i<<"\n";
        cout<<"i si  "<<i<<"\n";
        if(dayarr[i]>i)
        {
            cout<<"-*\n";
        }
        else
        {
        int t2=t;

            for(int k=0; k<t2; k++)
            {

                if(dayarr[k]<=i)
                {
                    if(dayarr[k]!=-1)
                    {
                    cout<<t-k<<" ";
                    dayarr[k]=-1;
                    }

                }
                else
                {
                cout<<"+*\n";
                t2=0;;
                }


            }
        }



    }



    return 0;
}
