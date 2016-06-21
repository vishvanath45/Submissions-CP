#include<stdio.h>
#include<string.h>
int main()
{
int i,t,s,sum;
scanf("%d",&t);
int axx4[10];

for(i=0;i<t;i++)
{
scanf("%d",&s);
int arr1[s];
int arr2[s];

char ans[2][14];

int m;
for(m=0;m<s;m++)
scanf("%d",&arr1[m]);


for(m=0;m<s;m++)
scanf("%d",&arr2[m]);

int j;
int y;
for(y=s-1;y>0;y--)
{j=y;
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
int g;
for(g=0;g<s-1;g++)
{if(arr2[g]<arr2[g+1])
flag=1;
}
if (flag==1)
axx4[i]=0;
else
axx4[i]=1;


}

for(i=0;i<s;i++)
{

if( axx4[i]==1)
    printf("%s \n","YES");
else
    printf("%s \n ","NO");
}

return 0;


}
