#include<conio.h>

void main()
{ int i,n,j,s,x;
scanf("%d",&n);
int arr[n];
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
s=n;
for(j=0;j<n;j++)
{
for(i=0;i<s;i++)
{
if(arr[i+1]<=arr[i])
{x=arr[i+1];
arr[i+1]=arr[i];
arr[i]=x;
}
}
s--;
}

for(i=0;i<n;i++)
printf("%d\t",arr[i]);

getch();
}
