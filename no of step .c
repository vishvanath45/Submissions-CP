#include<stdio.h>

#include<math.h>
int main()
{
int t,i,j,k;
scanf("%d",&t);
int ans[t];
int count =0;
int no_of_matrices, size_of_matrices;
no_of_matrices = t;
int intel_amit;

for(i=0; i < no_of_matrices; i++)
{
scanf("%d",&size_of_matrices);
scanf ("%d",&intel_amit);
int arr[size_of_matrices][size_of_matrices];

int p=(size_of_matrices)*(size_of_matrices);
int i3 , j3;

for(i3=0;i3<size_of_matrices;i3++)
{for(j3=0;j3<size_of_matrices;j3++)
{scanf("%d",&arr[i3][j3]);
}
printf("\n");
}

int i1,j1,i2,iold=0 , jold =0;
for(i2=1;i2<=p;i2++)
{for(i1=0;i1<size_of_matrices;i1++)
{for(j1=0;j1<size_of_matrices;j1++)
if(arr[i1][j1]==i2)
break;
}
break;

}
count= abs(i1-iold) + abs(j1-jold) + count;
iold=i1;
jold=j1;

ans[i]=count;
intel_amit= intel_amit-count;

}


for(i=0;i<no_of_matrices;i++)
{if (intel_amit>=0)
{
    printf("\n %s","ALIVE");
}
else
   {

   printf("\n %s","DEAD");
   }
}

return 0;
}
