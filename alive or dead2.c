#include<stdio.h>

#include<math.h>
int main()
{
int t,p,i,j,k;


int count =0;

int no_of_matrices, size_of_matrices;

int intel_amit;

scanf("%d",&t);
for(p=0;p<t;p++)

{


scanf("%d",&size_of_matrices);

scanf ("%d",&intel_amit);
int arr[size_of_matrices][size_of_matrices];

int p=(size_of_matrices)*(size_of_matrices);
int i3 , j3;
//input in array starts
for(i3=0;i3<size_of_matrices;i3++)
{for(j3=0;j3<size_of_matrices;j3++)
  scanf("%d",&arr[i3][j3]);
}
//input complete

int i1,j1,i2,iold=0,jold =0;
for(i2=1;i2<=p;i2++)
{
    for(i1=0;i1<size_of_matrices;i1++)

    {
        for(j1=0;j1<size_of_matrices;j1++)


  {

   if(arr[i1][j1]==i2)
   {


    if(i2==1)
{
    iold= i1;
    jold= j1;
}

count= abs(i1-iold) + abs(j1-jold) + count;
iold=i1;
jold=j1;
  }

}


}
}
int ans;

ans=intel_amit-count;
if(ans>=0)
printf("%s\n","ALIVE");
    else
        printf("%s\n","DEAD");




}
return 0;
}
