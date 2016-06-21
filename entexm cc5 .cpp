#include <iostream>
#include<algorithm>
using namespace std;


int main()
{

    int pqr;
    int e;
    int j;
    long kk,nn,o;
    long long int m,yy,h;

    cin>>pqr;


    if(pqr>0)
    {
        cin>>nn>>kk>>e>>m;

        long long int arr[nn];


        for(o=0;o<nn-1;o++)
        {
            arr[o]=0;
            for(j=0;j<e;j++)
            {
                cin>>yy;
                arr[o]=arr[o]+yy;
            }
        }

       arr[o]=0;
        for(j=0;j<e-1;j++)
        {
            cin>>yy;
             arr[o]=arr[o]+yy;
        }
        h=arr[o];

        sort(arr,arr+nn);

                h=arr[nn-kk]-h+1;
                if(h<=1)
                 h=0;

                 if(h>m)
                 {cout<<"Impossible\n";
                 }
                 else
                 {cout<<h<<"\n";}

    pqr--;
    }
return 0;
}
