#include<stdio.h>
#include<conio.h>
void main()
{

int s,i, t,j , c ;

scanf("%d",&s);

int arr[s];
for(i=0;i<s;i++)
scanf("%d",&arr[i]);

for(i=s-1;i>0;i--)
{j=i;
while(j<s&&arr[j]>arr[j-1])
{t=arr[j];
arr[j]=arr[j-1];
arr[j-1]=t;
j++;
}
}

for(i=0;i<s;i++)
printf("%d",arr[i]);

getch();

}
