//546 A codeforces
#include<stdio.h>

int main()
{
int k,w;
long long int n,answer;
scanf("%d",&k);
scanf("%lld",&n);
scanf("%d",&w);

answer=((k*w*(w+1)));
answer=answer/2;
answer=answer-n;
if (answer<0)
    answer=0;



printf("%lld",answer);

return 0;
}
