//lastdig spoj
#include<stdio.h>

int main()
{
    int a,tt;
    long long int b;
int arr[4][10]={0,1,6,1,6,5,6,1,6,1,
                0,1,2,3,4,5,6,7,8,9,
                0,1,4,9,6,5,6,9,4,1,
                0,1,8,7,4,5,6,3,2,9,};
    scanf("%d",&tt);
    while(tt)
    {


 scanf("%d",&a);
    scanf("%lld",&b);

    a=a%10;
    if(a==0)
        printf("0\n");
    else if(b==0)
    {
        printf("1\n");
    }

else
{b=b%4;
printf("%d aa %d bb %d\n",arr[b][a],a,b);
}
   tt--;
    }
    return 0;
}
