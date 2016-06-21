#include<stdio.h>

int zero_calc(int p)
{int a,b,c;
b=p;
c=0;
for(a=0;b!=0;a++)
{ b=b/5;
 c=c+b;
}
return c;

}
int main()
{
int i,n,p,ans ;
scanf("%d",&n);

for(i=0;i<n;i++)
{
int m=0;
scanf("%d",&p);
ans=zero_calc(p);
printf("%d\n",ans);
}
return 0;

}
