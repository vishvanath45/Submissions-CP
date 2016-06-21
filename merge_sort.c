#include<stdio.h>
int main()
{int s=0;


 int n, i,j;

 scanf("%d",&n);
 int arr[n];
 int ans[n];
 for(i=0;i<n;i++)
 scanf("%d",&arr[i]);

 void merge_again (int arr[], int i,int j)
{
int mid;
int k;
    mid=(i+j)/2;
    k=mid+1;
    while(i<=mid&&k<=j)
    {
        if(arr[i]>=arr[k])
        {
            ans[s++]=arr[k++];
        }
        else
        {
            ans[s++]=arr[i++];

        }
    }

    if(i>mid&&k<=j)
    {for( ;k<=j; )
        ans[s++]=arr[k++];
    }
    else if(i<=mid&&k>j)
    {
    for( ;i<=mid; )
        ans[s++]=arr[i++];
    }
}

void merge_sort (int arr[], int i , int j)
{ int mid;
    if(i>=j)
        return ;
    else
    {
     mid= (i+j)/2 ;
    merge_sort(arr,i,mid);
    merge_sort(arr,mid+1,j);
    merge_again(arr,i,j);

    }
}




merge_sort( arr,0,(n-1));

for(i=0;i<n;i++)
printf("%d\n",ans[i]);









return 0;

}
