//NSTEPS spoj
#include<stdio.h>

int main()
{
    int x,y,i;
    scanf("%d",&i);
 while(i!=0)
   {

    scanf("%d",&x);
    scanf("%d",&y);
    if(x==y)
    {
        if(x%2==0||x==0)
        printf("%d\n",2*x);
        else
            printf("%d\n",2*x-1);
    }
    else if(y==(x-2))
    {if(y%2==0||y==0)
        printf("%d\n",2*y+2);
        else
            printf("%d\n",2*y+1);
    }
    else
        printf("No Number\n");
   i--;
   }
    return 0;
}
