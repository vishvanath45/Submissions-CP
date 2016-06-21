#include<stdio.h>

int main()
{
    long long int marks[100001];
    int n,i,t,m,P;
    long long int min;
    char c_ans[100001],ans[10001];

    scanf("%d",&t);
    for(P=0;P<t;P++)   //test cases
    {
    m=0;
    scanf("%d",&n);   //size of string

    scanf("%s",c_ans);  //correct answers

    scanf("%s",ans);    // ans given by chef

    for(i=0;i<=n;i++)
    scanf("%lld",&marks[i]);

    min=marks[0];
    for(i=0;i<(n);i++)
        {if(ans[i]==c_ans[i])
           m++;                 // counting no. of correct answers
        }

  if(m==n)
  {
      min=marks[n];
  }
    else
    {
           for(i=1;i<=m;i++)
        {
            if(marks[i]>=min)
            {
                min=marks[i];
            }
        }
    }
printf("%lld\n",min);


    }
    return 0;
}
