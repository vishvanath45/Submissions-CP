//PRIME 1 SPOJ
#include<stdio.h>

int main()
{
    int sss,s,e,m,n,i,sze,ttt;
    int arr[10000];
    scanf("%d",&ttt);
    while(ttt)
    {
        scanf("%d",&s);
        scanf("%d",&e);

        if(s==1)
        {
            s=2;
        }

        m=s;
        n=e;
        sze=e-s+1;
        arr[sze]={0};
        i=s;
        int pp,j,u=1;
        sss=0;
        for(;i<=e; i++)
        {
            int j=2;

                if(arr[i-s]==1)
                {

                }
                else
                {
                    sss=0;
                for(;sss<=(n-m);)
                {
                    sss=i*j-2;
                    if(sss>(n-m))
                        {

                        }
                    else
                    {
                        arr[sss]=1;
                        j++;

                    }
                }
            }
        }

        int xx;
        for(i=0; i<=(n-m); i++)
        {
            if(arr[i]==0)
            {
                xx=i+m;

                printf("\n%d",xx);
            }

        }
        printf("\n");

        ttt--;
    }
    return 0;

}
