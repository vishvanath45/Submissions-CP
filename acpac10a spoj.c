//acpc10a spoj

#include<stdio.h>

int main()
{
int a,b,c;


while(1)
{scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);

if(a==0&&b==0&&c==0)
        {
break;
        }
else if((2*b)==(a+c))
{

    printf("AP ");
    printf("%d\n",c+b-a);
}
else
{
    printf("GP ");
    printf("%d\n",c*b/a);
}

}

return 0;
}
