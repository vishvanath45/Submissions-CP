//codehchef aug16  CHEFRRUN

#include <iostream>
#include<algorithm>
using namespace std;
#include<stdio.h>
int main()
{
long long int t,i,start;

   cin>>t;

    long long int oarr[t],tarr[t],parr[t];

tarr[t]= {0};

parr[t]= {0};

    for(i=0; i<t; i++)
        cin>>oarr[i];

    i=0;
    int ox=0;
    int xx;
    while(1)
    {

        i=start ;
        xx=start;
        while(1)
        {
            tarr[i]+=1;

            if(tarr[i]>1)
            {
                break;
            }
            else
            {
                i=(i+oarr[i])%t;
            }

        }
        if(i==start)
        {
//that case is fun and passed;
            for(ox; ox<t; ox++)
            {
                parr[ox]+=tarr[ox];
            }

        }

        xx++;
        while(xx<t)
        {
            if(parr[xx]==0)
            {
                start=xx;
                break;

            }
            else
            {
                xx++;
            }
        }
}
        int counter=0;

        for(i=0; i<t; i++)
        {
            if(parr[i]>0)
            {
                counter++;
            }

            cout<<"answer is "<<counter<<"\n";

            return 0;


        }


}



















