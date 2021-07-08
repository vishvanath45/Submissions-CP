// ARR02 CC REC

#include<bits/stdc++.h>

using namespace std;

#define ll long long int

int main()
{

    ll sze;
    cin>>sze;

    ll arr[sze];

    ll sum=0;

    for(ll i=0; i<sze; i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    sort(arr,arr+sze,greater<ll>());

    for(ll i=1; i<sze; i++)
    {
        arr[i]=arr[i]+arr[i-1];
    }


    for(ll i=0; i<sze; i++)
    {
        cout<<arr[i]<<"***";
    }
    cout<<"\n";


    ll query;
    cin>>query;



    while(query--)
    {
        ll q;
        cin>>q;
        ll pkp=0;

        ll flag=0;

        if(q<=sum)
        {

            for(ll i=0; i<sze; i++)
            {
                if(arr[i]<=q)
                {
                    pkp++;
                    if(arr[i]==q)
                    flag=1;
                    //cout<<"pkp ++ \n";
                }
                else
                    break;
            }
        }
       if(q>sum)
        cout<<"-1\n";
        else if (flag==0)
        cout<<pkp+1<<"\n";
        else
        cout<<pkp<<"\n";

    }

    return 0;



}
