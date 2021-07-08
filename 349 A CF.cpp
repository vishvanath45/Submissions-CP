// 349 A CF

#include<bits/stdc++.h>


#define ll int
using namespace std;

int main()
{

    long int n;
    cin>>n;

    long int arr[3]= {0};
    long int incash=0;

    long int flag=1;

    for(long int i=0; i<n; i++)
    {
        cin>>incash;

        if(incash==25)
            arr[0]++;
        else if(incash==50)
            arr[1]++;
        else
            arr[2]++;

        if(incash==50)
        {
            if(arr[0]>0)
                arr[0]--;
            else
            {
                flag=0;
                break;
            }
        }

        if(!flag)
        break;


        if(incash==100)

        if(arr[0]>3||(arr[1]>=1&&arr[0]>=1))
        {
        if(arr[1]>=1&&arr[0]>=2)
        {
        arr[1]--;
        arr[0]--;
        }
        else
        {
        arr[0]-=3;
        }

        }
        else
        {
        flag=0;
        break;

        }

    if(!flag)
        break;

    }

    if(flag==1)
    cout<<"YES\n";
    else
    cout<<"NO\n";

return 0;


}
