//NUKES
#include<stdio.h>
long long int arr[100001];
long long int handover(long long int k,long long int n,long long int i,long long int arr[]);

int main()
{
    long long int i,a,n,k;
    scanf("%lld %lld %lld",&a,&n,&k);
    arr[0]=a;
    i=0;
     handover(k,n,i,arr);


     for(i=0;(i+1)<k;i++)
     arr[i]=arr[i]-arr[i+1];

     int x=0;
     for(i=0;(i+1)<k;i++)
     {
         while(arr[i]>n)
         {
             arr[i]=arr[i]-n;
         }

     }
    for(i=0;(i)<k;i++)
    printf("%lld ",arr[i]);
     return 0;


}

long long int handover(long long int k,long long int n,long long int i,long long int arr[])
{
    if((i+1)<k)
    {
        arr[i+1]=arr[i]/(n+1);
         i++;
         handover(k,n,i,arr);


    }
    else
        return 0;
}
