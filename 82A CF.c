//82 A CODEFORCES
#include<stdio.h>

int main()
{
    long long int i,xx,p,k,l,m,n,hh;
    long long int arr[1000];
    xx=1;

    k=l=m=n=hh=1;
    p=0;
    for(; p<300;)
    {
        while(k>0)
        {
            arr[p]=1;
            p++;
            k--;
        }
        while(l>0)
        {
            arr[p]=2;
            p++;
            l--;
        }
        while(m>0)
        {
            arr[p]=3;
            p++;
            m--;
        }
        while(n>0)
        {
            arr[p]=4;
            p++;
            n--;
        }
        while(hh>0)
        {
            arr[p]=5;
            p++;
            hh--;
        }
        k=l=m=n=hh=xx*2;
        xx=xx*2;
    }

    for(i=0; i<200; i++)
    {

        printf(" %lld %lld \t",i+1,arr[i]);
if((i+1)%2==0)
printf("\n");
    }
    return 0;
}
