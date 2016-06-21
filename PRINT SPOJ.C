//PRINT SPOJ
#include<stdio.h>

int main()
{
    int k,i,p,s,l,u,xx=0;
    scanf("%d %d",&l,&u);
    int size =u-l;
    s=size;

    int arr[size]={1};
    p=l;
    for(k=1;s>0;)
    {for(i=2;p<=u;i++)
    {
        p=p*i;
        arr[p-l]=0;

    }
    while(xx==1)
    {if(arr[p+k-size]=0)
    {
        k++;
    }
    else
    {p=p+k;
    xx=1;
    }


    }

xx=0;
    s--;

}while(size--)
    {i=0;
        if(arr[i]=0)
        {
            i++;
        }
        else
        {

            printf("%d",p+arr[i]);
            i++;
        }
    }
    return 0;}
