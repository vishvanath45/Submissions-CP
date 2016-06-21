#include<conio.h>
#include<stdio.h>

void main()
{

int n ,i,x,p;
scanf("%d",&n);
int arr[n];
for(i=0;i<n;i++)
scanf("%d",&arr[i]);


p=0;
while(p!=(n-1))
{

for(i=p;i<n;i++)

{
if (arr[p]>=arr[i+1])
{
x=arr[i+1];
arr[i+1]=arr[p];
arr[p]=x;
}
}
p++;
}

for(i=0;i<n;i++)
printf("%d\n",arr[i]);

getch();

}
