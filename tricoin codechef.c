#include<stdio.h>

int main()
{
int n,ans,t;
scanf("%d",&t);
while(t>0)
{scanf("%d",&n);

ans= (-1+sqrt(1+(8*n)))/2  ;

printf("%d\n",ans);
t--;
}
return 0;

}
