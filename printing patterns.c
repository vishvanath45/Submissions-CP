#include<stdio.h>
#include<conio.h>
void main()
{
int i=0,j=5,k=1;
for(i=0;i<6;i++)
{for(j;j>0;j--)
printf(" ");
for(k;k>0;k--)
printf("*");
j--;
k++;
printf("\n");
}
getch();
}
