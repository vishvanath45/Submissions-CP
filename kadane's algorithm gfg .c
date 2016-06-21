// my approch,kadane is far different
//this is not kadane
#include <stdio.h>

int main()
{
    int sum,sze,i,t,j,p;

  scanf("%d",&t);

 while(t)
 {

    scanf("%d",&sze);
    int arr[sze];
    int x=0;

          for(i=0; i<sze; i++)
              scanf("%d",&arr[i]);

    sum=0;
    int farr[(sze*(sze+1))/2];

    for(i=0; i<sze; i++)
    {
        for(p=i+1; p<=sze;p++)
        {
            for(j=i; j<p; j++)
            {
                sum+=arr[j];

            }
            farr[x]=sum;
            sum=0;
            x++;
        }

    }
int max =farr[0];

    for(i=0;i<(sze*(sze+1))/2;i++)
        {
            if(farr[i]>max)
                max=farr[i];
        }



        printf("%d\n",max);



t--;
}


return 0;
}
