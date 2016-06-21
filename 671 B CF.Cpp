//671 B CF
#include<iostream>
#include<algorithm>
using namespace std;
#include<stdio.h>

int main()
{

    long long int sze,k,i;
long long int p,q;
    scanf("%lld",&sze);
    scanf("%lld",&k);
long long int arr[sze];
    int counter=0;

    for(i=0;i<sze;i++)
    {

            scanf("%lld",&arr[i]);

        if(arr[0]!=arr[i])
        counter=1;


    }
sort(arr,arr+sze);
    if(counter==1)
    {


    for(i=0;i<k;i++)
    {
        sort(arr,arr+sze);


        arr[0]+=1;
        arr[sze-1]-=1;
        sort(arr,arr+sze);



      p=arr[sze-1];
        q=arr[0];
        k=p-q;

        if(k==0)
        break ;
    }
    }
    else
    {
        k=0;
    }

    printf("%lld\n",k);

    return 0;


}
