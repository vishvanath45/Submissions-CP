//CANDY SPOJ
#include<stdio.h>

int main()
{
int avg,i;
int sze;
long long int sum;

while(1)
{


scanf("%d",&sze);
if(sze==-1)
    break ;



int arr[sze];
sum=0;
for(i=0;i<sze;i++)
{
    scanf("%d",&arr[i]);
    sum=sum+arr[i];
  }
avg=sum/sze;

if((avg*sze)!=sum)
{
    printf("-1\n");
}
else
{sum=0;
    for(i=0;i<sze;i++)
    {
        if(arr[i]>avg)
        {
            sum=sum+arr[i]-avg;
        }
    }
    printf("%lld\n",sum);

}

}

    return 0;
}
