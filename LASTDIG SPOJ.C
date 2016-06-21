//LASTDIG SPOJ

#include<stdio.h>

int main()
{

    int a,tt;
    long long int b;
int a2[]={6,2,4,8};
int a3[]={1,3,9,7};
int a4[]={6,4};
int a7[]={1,7,9,3};
int a8[]={6,8,4,2};
int a9[]={1,9};
    scanf("%d",&tt);
    while(tt)
    {


    scanf("%d",&a);
    scanf("%lld",&b);

    a=a%10;

    switch(a)
    {
    case 0:
        printf("0\n");
        break;
    case 1:
        printf("1\n");
        break ;
    case 2:
        {
            b=b%4;

             printf("%d\n",a2[b]);
        }
        break;
    case 3:
        {
            b=b%4;
            printf("%d\n",a3[b]);
        }
        break;
    case 4:
        {
            b=b%2;
            printf("%d\n",a4[b]);
        }
        break;
    case 5:
        printf("5\n");
        break;
    case 6:
        printf("6\n");
        break;
    case 7:
        {
            b=b%4;
            printf("%d\n",a7[b]);
        }
        break;
    case 8:
        {
            b=b%4;
            printf("%d\n",a8[b]);
        }
        break;
    case 9:
        {
            b=b%2;
            printf("%d\n",a9[b]);
        }
        break;


    }
 tt--;
}
    return 0;

}
