//commented just to look whether git username has changed or not.

#include<stdio.h>

int main()
{
double m,n,a;
scanf("%lf %lf %lf",&m,&n,&a);
double m1,n1;
long long int m2,n2;
m1=m/a;
m2=m/a;
n1=n/a;
n2=n/a;
if(m1>m2)
m2++;

if(n1>n2)
n2++;

printf("%lld",m2*n2);

return 0;

}
