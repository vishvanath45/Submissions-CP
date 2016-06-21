//codeforces contest 356 problem B
#include<stdio.h>

int main()
{
    int a,n,i,j;

    scanf("%d",&n);
    scanf("%d",&a);

    int arr[n];

for(i=0;i<n;i++)
   {
       scanf("%d",&arr[i]);
   }

    int sum=0;
    int pos;
    pos=a-1;
    int mid;
    mid=n/2;

    printf("mid %d \n",mid);

    printf("pos %d \n",pos);

    i=pos-1;

    j=pos+1;
    printf("i %d \n",i);

    printf("j %d \n",j);

    if(pos<=mid){

        printf("if condition checked");

        for( ;i>-1; )
        {
            if(((arr[i]==1)&&(arr[j]==1))==1)
            {
            sum=sum+2;
            i--;
            j++;
            printf("\ncondition matching on less than mid case \n");

            }
        }
          printf("first loop over");
        for( ;j<n; )
        {
           sum=sum+arr[j];
           j++;
        }
    }
    else{
printf("this cond checkef");
    for(;j<n;)
        {
            if(((arr[i]==1)&&(arr[j]==1))==1)
        {
            sum+=2;
            i--;
            j++;
            printf("\ncondition matching on more than mid case \n");
            if(j>=n)
            break;
        }
        }

        printf("first loop over");
        for( ;i>=0; )
          {
            sum=sum+arr[i];
            i--;
          }

    }



    printf("hellgo away");
    printf("%d",sum+arr[pos]);


    return 0;

    }



