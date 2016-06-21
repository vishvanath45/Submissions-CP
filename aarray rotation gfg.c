//array rotation g4g
#include<stdio.h>

int main()
{
int sze,shift,i,tt;

scanf("%d",&tt);
while(tt)
{


    scanf("%d",&sze);
    scanf("%d",&shift);
    int arr[sze];
    for(i=0; i<sze; i++)
    {
        if((i-shift)<0)
        {
            scanf("%d",&arr[sze+(i-shift)]);
        }
        else
          {
              scanf("%d",&arr[i-shift]);
          }
    }

    for(i=0; i<sze; i++)
    printf("%d ",arr[i]);


    printf("\n");
tt--;
}
return 0;
    }
