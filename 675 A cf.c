//675 A CCODEFORCES
#include <stdio.h>

int main()
{
long long int a,b,c,p;

scanf("%lld %lld %lld",&a,&b,&c);

if(c==0)
{if(a!=0&&(a==b))
    printf("YES");
    else
        printf("NO");
}
else
{ p=(b-a)/c;
if(((b-a)%c)==0&&p>0)
{printf("YES");
}
else
{printf("NO");
}
}
return 0;
}
