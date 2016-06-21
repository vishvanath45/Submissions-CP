#include <stdio.h>

int main()
{

int sze,wrk_dn,p,i,y,m,n,t,h;
scanf("%d",&t);

for(h=0;h<t;h++)
{scanf("%d",&sze);
scanf("%d",&wrk_dn);

y=(sze-wrk_dn)/2;

int array[sze];
int wrk_dn_arr[wrk_dn];

for(i=1;i<=sze;i++)
array[i-1]=i;

for(i=0;i<wrk_dn;i++)
 scanf("%d",&wrk_dn_arr[i]);

 for(i=0;i<wrk_dn;i++)
{
   p=wrk_dn_arr[i]-1;
   array[p]=0;
}
int arr_chef[y+1];
int arr_assis[y+1];


m=0;
n=0;
for(i=0;i<sze;i++)
{
   if(array[i]!=0)
   {
      if(n>=m)
      {
          arr_chef[m]=array[i];
          m++;
      }
      else
      {
          arr_assis[n]=array[i];
          n++;
      }
   }
}



for(i=0;i<m;i++)
printf("%d\t",arr_chef[i]);


if(m==0)
    printf(" ");



    printf("\n");

for(i=0;i<n;i++)
    printf("%d\t",arr_assis[i]);

    if(n==0)
    printf(" ");

}
  return 0;
}
