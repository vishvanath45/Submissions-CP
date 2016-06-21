// TLG CODECHEF
//did it in first attempt hoooray
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int sze,i,maxi,sum,lead;
    scanf("%d",&sze);
    int p1[sze],p2[sze];
    int plead[sze];
    int wlead[sze];
    sum=0;
    lead=0;
    for(i=0;i<sze;i++)
    {
        scanf("%d %d",&p1[i],&p2[i]);
    }

    for(i=0;i<sze;i++)
    {
        wlead[i]=p1[i]-p2[i];
        wlead[i]=wlead[i]+sum;
        if(wlead[i]<0)
            plead[i]=2;
        else
            plead[i]=1;

        sum=wlead[i];


    }
    int position;
maxi=abs(wlead[0]);

    for(i=0;i<sze;i++)
    {
        if(maxi<=abs(wlead[i]))
           {
               maxi=abs(wlead[i]);
               position=i;
           }
    }







printf("%d %d",plead[position],maxi);
    return 0;





}
