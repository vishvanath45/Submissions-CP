//ENTEXM CODECHEF
#include<stdio.h>

int main()
{
    int i,j,e;
    long long int m,k,n;
    int ch;
    int kk;
    int swap,tt;
    scanf("%d",&tt);
    while(tt)
    {

        scanf("%lld %lld %d %lld",&n,&k,&e,&m);


        int marks[n-1];

        for(i=0; i<n-1; i++)
        {
            marks[i]=0;
            for(j=0; j<e; j++)
            {
                scanf("%d",&ch);
                marks[i]=marks[i]+ch;

            }
        }

        int smarks=0,xx=0;
        for(i=0; i<(e-1); i++)
        {
            scanf("%d",&smarks);
            xx=xx+smarks;
        }


        for(i=0; i<n-1; i++)
        {
            for(j=i+1; j<n-1; j++)
                if(marks[i]<marks[j])
                {
                    swap=marks[i];
                    marks[i]=marks[j];
                    marks[j]=swap;

                }

        }
        int ans,min=k-1;

        ans=marks[min]-xx+1;

        if(ans<0)
        {
            ans=0;
            printf("%d\n",ans);
        }
        else if(ans>m)
        {
            printf("Impossible\n");
        }
        else
        {
            printf("%d\n",ans);
        }


        tt--;
    }
    return 0;
}
