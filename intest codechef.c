#include<stdio.h>

int main()
{
    int n,i;
    int count=0;
    long k;

    scanf("%d",&n);
    long arr[n];
    scanf("%ld",&k);

    for(i=0;i<n;i++)
    {
        scanf("%ld",&arr[i]);
        if((arr[i]%k)==0)
           count++;

    }


   printf("%d",count);
   return 0;
}
