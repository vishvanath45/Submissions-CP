#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";

    int p1,p2,p3;
double d1,d2,d3;
char name[20];
char ch2[300];
scanf("%d",&p1);
scanf("%f",&d1);
gets(name);
p2= p1+d1;
d2=(float)(p1-d1);

strcat(s,name);
printf("%d\n",p2);
printf("%f\n",d2);
puts(s);

 return 0;
}
