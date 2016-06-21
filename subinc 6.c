#include <stdio.h>

int main()
{


    int n,i,m,s,t,final_ans,count;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        final_ans=0;

        scanf("%d",&n);
        long long int arr[n];

        for(m=0;m<n;m++)
        scanf("%lld",&arr[m]);


        for(m=0;m<n;m++)
        {  count=1;
            for(s=m;s<n-1;s++)
            {
                if(arr[s+1]>=arr[s])
                    count++;
                   else
                {
                    m=s;
                    break;
                }
            }
            final_ans=final_ans+(count*(count+1)/2);
            if(s==(n-1))
                break;

        }
         printf("%d\n",final_ans);
    }

    return 0;
}
