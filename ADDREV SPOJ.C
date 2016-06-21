//ADDREV SPOJ//SUCCESS
#include<stdio.h>
int rev(int n)
{
    int rev=0;
    while(n>0)
    {
     rev=rev*10;
     rev=rev+n%10;
     n=n/10;

    }
    return rev;

}
int main()
{
    int a,b,c,i;
    scanf("%d",&i);
    while(i>0)
    {


    scanf("%d %d",&a,&b);
    a=rev(a);
    b=rev(b);
    c=a+b;
    c=rev(c);
    printf("%d\n",c);
    i--;}
    return 0;



}
