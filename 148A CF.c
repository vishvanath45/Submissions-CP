//148 A CODEFORCES
#include<stdio.h>

int main()
{
int k,l,m,n;
long long int d;
scanf("%d",&k);
scanf("%d",&l);
scanf("%d",&m);
scanf("%d",&n);
scanf("%lld",&d);


long long int counter=0;


while(d>0)
{
if(d%k==0||d%l==0||d%m==0||d%n==0)
{counter++;
}
d--;
}

printf("%lld",counter);

return 0;
}
