//SAMER08F SPOJ
#include<stdio.h>

int main()
{
int n=1;
long long int answer;
while(1)
{scanf("%d",&n);
if(n==0)
break;
else
{answer=n*(n+1)*(2*n+1);
answer=answer/6;
printf("%lld\n",answer);
}}

return 0;
}
