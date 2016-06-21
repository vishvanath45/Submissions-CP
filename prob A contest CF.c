//codeforces contest 356 problem A
#include<stdio.h>

int main()
{
int i,j,n;
int arr[5];
int swap;
for(n=0;n<5;n++)
scanf("%d",&arr[n]);
i=0;
j=1;
for(n=0;n<5;n++)
{
    while(i<5&&j<5)
    {
        if(arr[i]>arr[j])
        {
            swap=arr[i];
            arr[i]=arr[j];
            arr[j]=swap;
        }
        i++;
        j++;
    }
    i=0;
    j=1;


}
int sum=0;
int tot_sum=0;

for(n=4;n>=0;n--)
{
    tot_sum=tot_sum+arr[n];

}


int count =1;

for(n=4;n>=0;n--)
{

    if((arr[0]+arr[1]+arr[2])>(arr[3]+arr[4])&&(arr[0]==arr[1])&&(arr[1]==arr[2]))
    {
        printf("%d",arr[3]+arr[4]);
        count=0;
        break;
    }
    else if((arr[n]==arr[n-1])&&(n>=1))
    {
        if((arr[n-1]==arr[n-2])&&n>=2)
        {
            sum=arr[n]+arr[n-1]+arr[n-2];
            break;
        }
        else
        {
            sum=arr[n]+arr[n-1];
            break;
        }
    }

}

int answer;
answer=tot_sum-sum;

if(count==1)
printf("%d",answer);


return 0;

}

