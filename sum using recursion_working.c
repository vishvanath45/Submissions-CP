#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int  sum (int p)
{ int r;
if(p==0)
{
return p;
}
else
{r=p%10;

return (r+sum(p/10)) ;
}
}

void main()
{int x,s;
scanf("%d",&s);
x=sum(s);

printf("%d",x);

getch();

}
