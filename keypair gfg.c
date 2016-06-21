//key pair GFG
#include<stdio.h>

int main()
{
    int n,s,i,j,t,counter;

    scanf("%d",&t);
    while(t)
    {


        scanf("%d",&n);  //size
        scanf("%d",&s);  //sum to find

        int arr[n];

        for(i=0; i<n; i++)
        {
            scanf("%d",&arr[i]);
        }

        counter=0;

        for(i=0; i<n; i++)
        {
            for(j=i+1; j<n; j++)
            {
                if((arr[i]+arr[j])==s)
                {
                    printf("Yes\n");
                    counter=1;
                    break;
                }

                if(counter==1)
                    break;
            }
            if(counter==1)
                    break;

        }

        if(counter==0)
           {
               printf("No\n");
           }
        t--;
    }

    return 0;
}
