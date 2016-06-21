// FCTRL2 spoj
#include<stdio.h>
long long int fact(int n)
{
    if (n==1)
        return 1;
    else
        return n*fact(n-1);
    }
int main()
{
int t,i;
long long int ans;

scanf("%d",&t);
while(t)
{
    scanf("%d",&i);
    ans=fact(i);

    printf("%lld\n",ans);


    t--;
}
return 0;
}
