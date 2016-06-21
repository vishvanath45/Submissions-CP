#include<stdio.h>



int main()
{
int n, i=0;
scanf("%d",&n);

int arr[n];

int merge_them(int arr[],int l, int mid, int h)
{int n1,n2;
     n1=mid-l+1;
   n2=h-mid;
  int arr1[n1];
  int arr2[n2];
   int i,j,k,s;


   for(i=0;i<n1;i++)
   {
       arr1[i]=arr[l+i];

   }
   for(i=0;i<n2;i++)
   {
       arr2[i]=arr[mid+1+i];
   }
    i=0;
    j=0;
    k=0;
    s=l;

    while(i<n1 && j<n2)
    {
        if(arr1[i]<arr2[j])
        arr[s++]=arr1[i++];
        else
        arr[s++]=arr2[j++];
    }

        while(i<n1)
        {
            arr[s++]=arr1[i++];
        }
        while(j<n2)
        {
            arr[s++]=arr2[j++];
        }


    return 0;


}

int merge_sort(int arr[],int l,int h)
{
    int mid;

    if(l<h)
    {
    mid=(l+h)/2;

    merge_sort(arr,l,mid);
    merge_sort(arr,mid+1,h);
    merge_them(arr,l,mid,h);
    }
    else
        return 0;

    return 0;

}


    for(i=0;i<n;i++)
    {
    scanf("%d",&arr[i]);
    }

    merge_sort(arr,0,n-1);

    for(i=0;i<n;i++)
    {
    printf("%d\n",arr[i]);
    }

    return 0;

}


