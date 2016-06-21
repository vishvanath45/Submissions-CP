#include<stdio.h>
#include<string.h>
int main()
{
int i,days,hrs2study;

scanf("%d",&days);
scanf("%d",&hrs2study);
int stime[days];
int etime[days];
int answer[days]={0};
int counter=0;
int maxtime=0;
int sumtime=0;

char ans[3];
for(i=0;i<days;i++)
{scanf("%d %d",&stime[i],&etime[i]);
maxtime=maxtime+etime[i];
}
if(maxtime>hrs2study)
{
counter=1;
}
else
{
counter=0;
}
int gg=0;
if(counter==1)
{
    for(i=0;i<days;i++)
    {
        sumtime=sumtime+etime[i];
        if(sumtime<=hrs2study)
        {
            answer[gg]=etime[i];
           gg++;
        }
        else if((hrs2study-sumtime+hrs2study)>=stime[i])
        {
            answer[gg]=hrs2study-sumtime+hrs2study;
            gg++;

        }
        else
        {
            answer[gg]=0;
            gg++;
        }
    }


}
if(counter==0)
{
    printf("NO");

}
else
{
    printf("YES \n");
    for(i=0;i<days;i++)
        printf("%d ",answer[i]);


}



return 0;
}







