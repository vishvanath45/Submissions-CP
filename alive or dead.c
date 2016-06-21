#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int t,i,j,k;
scanf("%d",&t);
int ans[t];
int count =0;
int no_of_matrices, size_of_matrices;
no_of_matrices = t;
int intel_amit[no_of_matrices];

for(i=0; i < no_of_matrices; i++)
{
scanf("%d",&size_of_matrices);

scanf ("%d",&intel_amit[i]);
int arr[size_of_matrices][size_of_matrices];

int p=(size_of_matrices)*(size_of_matrices);
int i3 , j3;

for(i3=0;i3<size_of_matrices;i3++)
{for(j3=0;j3<size_of_matrices;j3++)
{scanf("%d",&arr[i3][j3]);
}

}

int i1,j1,i2,iold=0 , jold =0;
for(i2=1;i2<=p;i2++)
{
    for(i1=0;i1<size_of_matrices;i1++)

    {
        for(j1=0;j1<size_of_matrices;j1++)


  {

  if(arr[i1][j1]==i2)
break;
  }
   if(arr[i1][j1]==i2)
break;


}

if(i2==1)
{
    iold= i1;
    jold= j1;
}

count= abs(i1-iold) + abs(j1-jold) + count;
iold=i1;
jold=j1;
}


ans[i]=intel_amit[i]-count;

}


for(i=0;i<no_of_matrices;i++)
{
    if(ans[i] >= 0)
    printf("\n%s","ALIVE");
    else
    printf("\n%s","DEAD");
}

getch();
}
