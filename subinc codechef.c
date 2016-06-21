#include<stdio.h>

int compare(int arr1[],int i,int arr2[],int j,int *t)
{
    if(arr1[i]<arr2[j])
    {t++;
        compare(arr1,i,arr2,j+1,&t);
    }
    else
        return *t;

}
int main()
{
int  size,i,j;
scanf("%d",&size);
long arr[size];

for(i=0;i<size;i++)
    scanf("%ld",&arr[i]);
int t=0;
int s=0;
    for(i=0;i<size-1;i++)
    {
        t=compare(arr,i,arr,i+1,&t);


    }
    printf("%d",t);



    return 0;
}
