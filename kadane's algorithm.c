<include <stdio.h>

int main()
{
    int sze,i,j,p;

    scanf("%d",&sze);
    int arr[sze];
    int x=0;

          for(i=0; i<sze; i++)
              scanf("%d",&arr[i]);

    sum=0;
    int farr[(sze*(sze+1))/2];

    for(i=0; i<sze; i++)
    {
        for(p=i; p<sze,p++)
        {
            for(j=i; j<p; j++)
            {
                sum+=arr[j];

            }
            farr[x]=sum;
            sum=0;
            ++x;
        }

    }

    for(i=0;i<(sze*(sze+1))/2;i++)
        printf("%d",farr[i]);



    return 0;






}
