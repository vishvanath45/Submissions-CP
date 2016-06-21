//3n+1 problem
#include<stdio.h>

int count(int n)
{
    int counter=1;
    for(;n>1;)
    {
        if(n%2==0)
        {
            n=n/2;
            counter++;

        }
        else
        {
                n=(3*n)+1;
                counter++;

        }
    }
return counter;
}

    int main()
        {
            int s,e,answer=0;
            scanf("%d",&e);
            scanf("%d",&s);

            for(;s>=e;)
            {
                if((s%2)==0)
                {
                        s=s/2;

                answer=answer+count(s);
                }
                else
                {
                    s=(3*s)+1;
                    answer=answer+count(s);
                }
            }

            printf("\n%d",answer);

            return 0;
        }
