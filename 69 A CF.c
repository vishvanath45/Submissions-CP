//69A CODEFORCES
#include<stdio.h>

int main()
{
    int n,i;
scanf("%d",&n);
int x[n],y[n],z[n];;
int sum1,sum2,sum3;
sum1=sum2=sum3=0;

for(i=0;i<n;i++)
{
  scanf("%d",&x[i]);
  scanf("%d",&y[i]);
  scanf("%d",&z[i]);
  sum1=sum1+x[i];
  sum2=sum2+y[i];
  sum3=sum3+z[i];

}
if(sum1==0&&sum2==0&&sum3==0)
    printf("YES");
else
    printf("NO");

return 0;
}
