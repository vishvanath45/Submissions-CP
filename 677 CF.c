//CODEFORCES contest 677/problem 0
#include<stdio.h>

int main()
{
int i,n,h;
scanf("%d",&n);
scanf("%d",&h);
int arr[n];
int sum=0;
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);

if(arr[i]<=h)
{sum=sum+1;
}
else
{sum=sum+2;
}

}
printf("%d",sum);

return 0;

}
