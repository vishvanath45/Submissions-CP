#include<stdio.h>

int main()
{
    int l,mm,h,n,i,q,m,x,y,range,ll,ul;
    l=0;
    h=99;

    scanf("%d",&n);
    int all_house[100];
    for(i=0;i<99;i++)
        {all_house[i]=1;}

    for(mm=0;mm<n;mm++)
    { int count=0;
              scanf("%d",&m);
      scanf("%d",&x);
      scanf("%d",&y);
        int cop_house[m];

        for(q=0;q<m;q++)
            {int r;
                scanf("%d",&r);;
                cop_house[q]=r-1;
            }
        range=(x*y);
        for(q=0;q<m;q++)
       {

        ll=cop_house[q]-range;
        ul=cop_house[q]+range;
        if((ll>=0)&&(ul<=99))
        {
            for(ll;ll<=ul;ll++)
                all_house[ll]=0;
        }
        else if((ll>=0)&&(ul>99))
        {
            for(;ll<=99;ll++)
                all_house[ll]=0;
        }
        else if((ll<0)&&(ul<=99))
        {
            for(;ul>=0;ul--)
                all_house[ul]=0;
        }
        else if((ll<0)&&(ul>99))
        {
            for(x=0;x<100;x++)
               all_house[x]=0;
        }
       }

for(i=0;i<100;i++)
    if(all_house[i]==1)
    {count=count+1 ;
    }


printf("%d\n",count);


    }
return 0;

}
