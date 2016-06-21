#include<stdio.h>

int main()
{int i,n;
n=0;

for(i=0;i<1000;i++)
{
if(i%3==0||i%5==0)
n=n+i;


}

printf("%d",n);
return 0;

}
