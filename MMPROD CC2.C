//MMPROD CODECHEF

#include<stdio.h>

long long int multipled(long long int arr[],long long int k)
{
    long long int multi=1;
    int i;
    for(i=0;i<k;i++)
       multi=multi*arr[i];


    return multi;
}
int main()
{

    long long int swap,i,j,sze,k;

    int newmax,max;
    scanf("%d %d",&sze,&k );
    long long int pos[sze],posno=0;
    long long int ch,neg[sze],negno=0;

    for(i=0; i<sze; i++)
    {
        scanf("%lld",ch);

        if(ch>=0)
        {
            pos[posno]=ch;
            posno++;
        }
        else
        {
            neg[negno]=ch;
            negno++;
        }
    }

 for(i=0;i<posno;i++)
 {

     for(j=0;j<posno-i;j++)
     {
         if(pos[j]<pos[j+1])
         {
             swap=pos[j];
             pos[j]=pos[j+1];
             pos[j+1]=swap;
         }

     }
 }

  for(i=0;i<negno;i++)
 {

     for(j=0;j<negno-i;j++)
     {
         if(neg[j]>neg[j+1])
         {
             swap=neg[j];
             neg[j]=neg[j+1];
             neg[j+1]=swap;
         }

     }
 }
 int poscount,negcount;

 if(k%2==0)
 {

 poscount=0;
 negcount=k;
 max=0;
 int newmax=1;
 while(poscount!=k+2)
 {
    max=multipled(pos,poscount)*multipled(neg,negcount);
    poscount+=2;
    negcount-=2;
    if(max>newmax)
    newmax=max;
 }



 }
 else
 {
 poscount=0;
 negcount=k-1;
 max=0;
 int newmax=1;
  while(poscount!=k+3)
 {
    max=multipled(pos,poscount)*multipled(neg,negcount);
    poscount+=2;
    negcount-=2;
    if(max>newmax)
    newmax=max;
 }




 }


 printf("***%d***",newmax);


return 0;

}








