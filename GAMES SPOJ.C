//SPOJ GAMES
#include<stdio.h>

int main()
{
float a,b,e;
int c,d;


int tt;

scanf("%d",&tt);
while(tt)
{


scanf("%f",&a);
c=a;
b=a-c;
if(b==0)
{
printf("1\n");
}
else
{e=1/b;
d=e;
    printf("%d\n",d);
}

tt--;

}
return 0;



}
