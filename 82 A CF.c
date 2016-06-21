//82A CODECHEF
#include<stdio.h>

int main()
{
   float n,multiple;
   int no_increment,old_ad,multiple1;
scanf("%f",&n);

multiple=log((n/5)+1)/log(2);
multiple1=multiple;
no_increment=pow(2,multiple1-1);
old_ad=5*(pow(2,multiple1-1)-1);

printf("%f\n",multiple);
printf("%d\n",multiple1);
printf("%d\n",no_increment);

printf("%d\n",old_ad);

if((old_ad+no_increment)>=n)
 {printf("Sheldon");
 }
 else if((old_ad+(no_increment*2))>=n)
 {printf("Leonard");
 }
 else if((old_ad+(no_increment*3))>=n)
 {printf("Penny");
 }
 else if((old_ad+(no_increment*4))>=n)
 {printf("Rajesh");
 }
 else if((old_ad+(no_increment*5))>=n)
 {printf("Howard");
 }

 return 0;
}
