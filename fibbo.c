#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void main()
{int n;
scanf("%d",&n);
int i,first, last,s;
last=0;
first=1;
for(i=0;i<n;i++)
{
    if(i==0)
    {printf("%d \t",last);}
    else
    {
    }
printf("%d\t",first);
s=first;
first=first+last;
last=s;

}
getch();

}

