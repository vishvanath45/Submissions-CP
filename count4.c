#include<stdio.h>
#include<conio.h>
void main()
{int s;
scanf("%d",&s);
int ar[s];
int i,k, flag=0;
for(i=0;i<s;i++)
{scanf("%d",&ar[i]);
}

for(i=0;i<s;i++)
{
for(k=0;ar[i]!=0;k++)
{
if(ar[i]%10==4)
{flag=flag+1;
ar[i]=ar[i]/10;
}
else
{ar[i]=ar[i]/10;
}

}
printf("\n %d",flag);
flag=0;
}
getch();
}
