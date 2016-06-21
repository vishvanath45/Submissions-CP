//479 A CODEFORCES
#include<stdio.h>

int main()
{
int i,a,b,c;

scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);
int max[5];
max[0]=a+(b*c);
max[1]=a*(b+c);
max[2]=a*b*c;
max[3]=(a+b)*c;
max[4]=a+b+c;
int answer;
answer=max[0];
for(i=0;i<5;i++)
{if(max[i]>=answer)
answer=max[i];
}
printf("%d",answer);
return 0;
}
