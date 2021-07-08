//SCHEDULE CC

/*
9 2
101110111


*/


#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin>>t;

    while(t--)
    {
        string arr;
        ll k;
        ll sze;


        cin>>sze>>k;
        cin>>arr;

        ll daysze[1000000]= {0};

        ll dayszepos=0;

        ll preday=arr[0];

        ll daycounter=0;

        for(ll i=1 ; i<sze ; i++ )
        {
            if(arr[i]==preday)
            {
                daycounter++;
                //	cout<<i<<"#\n";
            }
            else
            {
                daysze[dayszepos]=daycounter+1;
                dayszepos++;
                daycounter=0;
                preday=arr[i];
                //	cout<<i<<"@\n";
            }

        }
        //dayszepos++;

//	cout<<"curr day counter "<<daycounter<<"\n";
        daysze[dayszepos]=daycounter+1;

        //for(ll i=0;i<=dayszepos;i++)
        //	cout<<daysze[i]<<"**";
// done beacuse it was counting from 0 not 1 sort function mai sze deni hoti h
        dayszepos++;



sort(daysze,daysze+dayszepos,greater<ll>());

ll kthno= daysze[k-1];
        ll temp;
        priority_queue<ll> pq;

        ll small = min(k+1,dayszepos);

        for(ll i=0;i<small;i++)
            pq.push(daysze[i]);

        for(ll i=0 ;i<k;i++)
        {

        temp = pq.top();

        if(temp>2)
        {

        pq.pop();

        ll dumb= temp/2;

        if(temp%2==0)
        {
        if((dumb)>=kthno)
        {
        pq.push(dumb);
        pq.push(dumb-1);
        }
        }
        else
        {
        if((dumb)>=kthno)
        {
        pq.push(dumb);
        pq.push(dumb);
        }
        }
        }
        else
        break;
        }

temp = pq.top();

cout<<temp<<"\n";

    }
    return 0;
}
