//ENTEXM CODECHEF
#include<stdio.h>

int main()
{
    int smarks,xx,i,j,e;
    long long int m,k,n;
    int ch;
    int yyy;
    int kk;
    int l,r,mid;
    int swap,tt;
     int tocheck;
        int countrr;
        int counter;
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

      smarks=0,xx=0;
        for(i=0; i<(e-1); i++)
        {
            scanf("%d",&smarks);
            xx=xx+smarks;
        }
yyy=xx;
         tocheck=n-k;
         countrr=-1;
         counter=0;


        if(n<=k)
        {
            printf("0\n");
        }
        else
        {

l=0;
r=m;
while((r-l)>1)
{
    mid=(l+r)/2;
    yyy=xx+mid;
    printf("mid%d",mid);


                counter=0;
                for(j=0; j<n-1; j++)
                {

                    if(xx>marks[j])
                    {
                        counter++;
                    }

                }
                if(counter==tocheck)
                {
                    countrr=0;
                    printf("**%d**",i);
                    break;
                }
            else if(counter>tocheck)
            {
                r=mid;
            }
            else
            {
                l=mid;
            }




}
        }
        if(countrr==-1)
                printf("Impossible");

        tt--;
    }
    return 0;

}
