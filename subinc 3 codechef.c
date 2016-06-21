#include<stdio.h>

int compare(int arr[],int i,int size)
{if((i+1)<size)
    {if(arr[i]<=arr[i+1])
        return (1+compare(arr,i+1,size));
    else
        return 0;
    }
    else
        return 0;
}

int main()
{
    int size,i,t,n,mm;

    scanf("%d",&n);

    for(mm=0;mm<n;mm++)
    {


    scanf("%d",&size);
    long arr[size];
    for(i=0;i<size;i++)
    {
        scanf("%ld",&arr[i]);
    }
    int sum=0;
    for(i=0;i<size-1;i++)
    {
        t=compare(arr,i,size);
        sum+=t;
    }

int arr2[size];
for(i=0;i<size-1;i++)
    {
        arr2[i]=arr[i];
    }

    int c,d,swap;
for (c = 0 ; c < ( n - 1 ); c++)
  {
    for (d = 0 ; d < n - c - 1; d++)
    {
      if (arr2[d] > arr2[d+1])
      {
        swap       = arr2[d];
        arr2[d]   = arr2[d+1];
        arr2[d+1] = swap;
      }
    }
  }

  int dog=0;
  for(i=0;i<size;i++);
  {
      if(arr2[i]==arr2[i+1])
        dog++;
  }

  int goat;
  goat=sum+size-dog;

    printf("%d\n",goat);
    }
    return 0;


}
