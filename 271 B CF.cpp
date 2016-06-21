//271 B CF
#include<stdio.h>

long long int nxtp(long long int n)
{
    long long int i,s;
    s=n+1;
    for(i=2; (i*i)<=s; i++)
    {

        if(s%i==0)
        {
            i=1;
            s+=1;

        }

    }

    return s-n;
}

long long int isp (long long int n)
{
    long long int i,counter=0;
    if(n==1)
    {
        return 1;
    }
    else if(n<=3)
    {
        return 0;
    }
    else
    {
        for(i=2; (i*i)<=n; i++)
        {
            if(n%i==0)
            {
                counter=1;
                break;
            }
        }

        if(counter==1)
        {
            return nxtp(n);
        }
        else
        {
            return 0;
        }
    }

}

int main()
{
    long long int n,i,j,r,c,ff,sum;

    scanf("%lld %lld",&r,&c);

    long long int arr[r][c];

long long int move[r+c]={0};
    for(i=0; i<r; i++)
    {

        sum=0;
        for(j=0; j<c; j++)
        {
            scanf("%lld",&ff);
            arr[i][j]=isp(ff);
            sum=sum + arr[i][j] ;
            move[r+j]+=arr[i][j];


        }
        move[i]=sum;

    }


  long long int minm=move[0];


    for(i=0; i<r+c; i++)
    {
        if(move[i]<=minm)
        {
            minm=move[i];
        }
    }

    printf("%lld",minm);

    return 0;

}
