// MFREQ CC

#include<bits/stdc++.h>

#define ll long long int

using namespace std;

int main()
{
    ll siz,query;
    cin>>siz>>query;

    ll arr[100001];

    for(ll i =0; i<siz; i++)
    {
        cin>>arr[i];
    }

    ll l,r,k;
    while(query--)
    {
        ll i;

        cin>>l>>r>>k;

        if(l!=r)
        {
        ll middle_pos= l + (r-l)/2;
        ll middle_ele=arr[middle_pos];
        ll lcounter=1;
        ll rcounter=1;
        ll lans=0;
        ll rans=0;

        for(ll i=middle_pos-1;i>=l-1;i--)
        {
        //cout<<"left loop running \n";
        if(arr[i]==middle_ele)
        {
        lcounter++;
        if(lcounter>=k)
        {
        lans=1;
        break;
        }
        }
        else
        {
        break;
        }

        }

        if(lans)
        {
        cout<<middle_ele<<"\n";
        }
        else
        {
        for(ll i=middle_pos+1;i<=r-1;i++)
        {
        //cout<<"left loop running \n";
        if(arr[i]==middle_ele)
        {
        rcounter++;
        if(lcounter+rcounter-1>=k)
        {
        rans=1;
        break;
        }
        }
        else
        {
        break;
        }

        }


        if(rans)
        {
        cout<<middle_ele<<"\n";
        }
        else
        {
        cout<<-1<<"\n";
        }
        }
        }
        else
        cout<<arr[l-1]<<"\n";
}

    /*
    int count=1;
    int ansvalue=-1;
    int pcurrent=arr[l-1];
    int ncurrent;

    if(l!=r)
    {
        for(int i=l; i<r; i++)
        {
            ncurrent=arr[i];

    //cout<<"pc nc is "<<pcurrent<<" "<<ncurrent<<" ** \n";
    //cout<<"count "<<count<<"\n";

            if(pcurrent==ncurrent)
            {
                pcurrent=ncurrent;
                count++;
                if(count>=k)
                {
                    ansvalue=pcurrent;

                }
            }
            else
            {
                if(count>=k)
                {
                    ansvalue=pcurrent;

                }
                count=1;
                pcurrent=ncurrent;


            }

        }

        cout<<ansvalue<<"\n";



    }
    else
    {
        cout<<arr[l-1]<<"\n";
    }
    }
    */
    return 0;

}
