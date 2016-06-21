#include<stdio.h>
#include<string.h>
int main()
{
int i,t,s,sum;
scanf("%d",&t);

char yes[3]="YES";
char no[2]="NO";

for(i=0;i<t;i++)
{
scanf("%d",&s);
int arr1[s];
int arr2[s];

char ans[2][14];
int ansno[s];

for(i=0;i<s;i++)
scanf("%d",&arr1[i]);


for(i=0;i<s;i++)
scanf("%d",&arr2[i]);

int j;

for(i=s-1;i>0;i--)
{j=i;
while(j<s&&arr1[j]>arr1[j-1])
{t=arr1[j];
arr1[j]=arr1[j-1];
arr1[j-1]=t;

t=arr2[j];
arr2[j]=arr2[j-1];
arr2[j-1]=t;

j++;
}
}

int flag=0;

for(i=0;i<s-1;i++)
{if(arr2[i]<arr2[i+1])
flag=1;
break ;
}
if (flag==1)
ansno[i]=0;
else
ansno[i]=1;


}

for(i=0;i<s;i++)
if(ansno[i]==0)
printf("%c \n",YES);
else
    printf("%c \n ",NO);


return 0;


}
