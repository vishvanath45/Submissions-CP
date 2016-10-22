#include<stdio.h>
#include<conio.h>

using namespace std;
#include<iostream>
#include<algorithm>
int main()
{
    int t;
    cin>>t;

    int arr[t];

    int i=0;

    while(i<t)
       {

        cin>>arr[i];
        i++;
       }

    if(t==1)
    {
        if(arr[t-1]==15)
            cout<<"DOWN\n";
        else if(arr[t-1]==0)
            cout<<"UP\n";
        else
            cout<<"-1\n";

    }
    else
    {
        if(arr[t-1]>arr[t-2])
           {
            if(arr[t-1]==15)
           cout<<"DOWN\n";
           else
            cout<<"UP\n";

           }
        else
            {if(arr[t-1]==0)
                cout<<"UP\n";
                else
                cout<<"DOWN\n";
            }
    }

return 0;


}
