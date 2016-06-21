//472 A CODEFORCES
#include<stdio.h>
#include<math.h>
int primecheck(long long int n)
{
    if(n < 2) return 0;
    int i;
    int h = sqrt(n);
    for(i = 2; i <= h; i++){
        if(n%i == 0)
            return 0;
    }
    return 1;
}


int main()
{
long long int n,i,j,x,y,counter=0;
scanf("%lld",&n);

for(i=4;i<n;i++)
{
    for(j=4;j<n;j++)
    {
        if(i+j==n)
        {
         x=primecheck(i);
         y=primecheck(j);

        if(x==0&&y==0)
         {printf("%lld ",i);
          printf("%lld",j);
      counter =1;
         break;}
        }

if(counter==1)
break;
    }
    if(counter==1)
break;
}
return 0;
}
