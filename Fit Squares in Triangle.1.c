#include<stdio.h>

int sum(int n)
{ if (n==1)
return 1;
 else
return n+sum(n-1)  ;

}
void main()
{
    int x;
    int y;
    int i;
    int p;

    scanf("%d",&x);
    for(i=0; i<x; i++)
    {
        scanf("%d",&y);
        if(y>=4)
        {
            if(y%2==0)
              {
            y=y-2;
            p=y/2;
            p=sum(p);
            printf("%d\n",p);
              }
              else
              {
                y=y-3;
                p=y/2;
                p=sum(p);
                printf("%d\n",p) ;
              }
        }
        else
        {
            printf("0\n");

        }

    }
getch();


}
