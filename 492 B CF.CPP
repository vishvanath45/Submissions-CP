//492 B CF
#include<iostream>
#include<algorithm>
using namespace std;
#include<stdio.h>
int main()
{   int sze;
    double stlen;
    scanf("%d",&sze);
    scanf("%Lf",&stlen);
    double strtlight,endlight,arr[sze];
    int i;

    for(i=0; i<sze; i++)
    {
        scanf("%Lf",&arr[i]);

    }

    sort(arr,arr+sze);



    strtlight=arr[0];

    endlight=stlen-arr[sze-1];

    for(i=0; i<sze-1; i++)
    {
        arr[i]=(arr[i+1]-arr[i])/2;
    }

    arr[sze-1]=0;




sort(arr,arr+sze);



    if(arr[sze-1]>strtlight&&arr[sze-1]>endlight)
    {
        printf("%Lf\n",arr[sze-1]);
    }
    else
    {
        if(strtlight>endlight)
        {
            printf("%Lf\n",strtlight);
        }
        else
            printf("%Lf\n",endlight);
    }


    return 0;
}




