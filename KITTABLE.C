//snackdown qualifier
//KTTABLE
#include<stdio.h>

int main()
{
long long int sze,i;

int t,h;
scanf("%d",&t);
for(h=0;h<t;h++)
{


scanf("%lld",&sze);

long long int strtime[sze],reqtime[sze];

int count=0;
int m=0;

for(i=0;i<sze;i++)
   {

    scanf("%lld",&strtime[i]);
   }

for(i=0;i<sze;i++)
   {
   scanf("%lld",&reqtime[i]);
   }

for(i=0;i<(sze);i++)
{
    if(reqtime[i]<=((strtime[i]-m)))
       count++;

       m=strtime[i];
}


printf("%d\n",count);
}
return 0;

}
