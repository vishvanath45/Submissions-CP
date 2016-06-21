//wait for it
#include <stdio.h>
#include <math.h>

int GCD(long long int a, long long int b)
{
    if(a==b)
    {
        return (b%(1000000000+7));
    }
    else if(a>b)
    {
        return GCD(a-b,b);
    }
    else
    {
        return GCD(a,b-a);
    }

}
int main()
{
    int i,j,k;
    long long int a,b,n,t,h;
    int sum;
    scanf("%lld",&t);
    for(h=0;h<t;h++)
    {

    scanf("%lld %lld %lld",&a,&b,&n);
    sum=0;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            sum=sum + GCD((pow(a,i)-pow(b,i)),(pow(a,j)-pow(b,j)));
        }
    }

    printf("%d\n",sum);
    }
    return 0;

}
