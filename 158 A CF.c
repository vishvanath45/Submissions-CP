//158 A CodeForces
#include<stdio.h>

int main()
{
int n,k,i;
scanf("%d",&n);
scanf("%d",&k);

int arr[n];
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
int counter=0;

for(i=0;i<n;i++)
{
    if(arr[i]>=arr[k-1]&&arr[i]>0)
        counter++;

}
printf("%d",counter);

return 0;
}
