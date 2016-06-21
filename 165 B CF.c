//165B CF
#include<stdio.h>
#include<math.h>

int main()
{
float k;
int i,pow;
long long int n;
scanf("%lld",&n);

    scanf("%f",&k);

    pow=log(n)/log(k);

    float sum=1;
    float p=1/k;
    for(i=0; i<pow; i++)
    {
        sum=sum+p;
        p=p/k;
    }

    float answer;
    answer =n/sum;
    int ans2=answer;

    float ans3;
    ans3=answer-ans2;
    if(ans3>0)
    {
        answer++;
    }
int f;
f=answer;

    printf("%d\n",f);




    return 0;

}



