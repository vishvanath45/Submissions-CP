//CODEM3 SPOJ
#include<stdio.h>

int main()
{


long long int sze,i,sum,pos,counter;
int t;
scanf("%d",&t);
while(t)
{


scanf("%lld",&sze);

long long int arr[sze];

for(i=0;i<sze;i++)
scanf("%lld",&arr[i]);

counter=0;
sum=0;

pos=sze-1;

for(i=0;i<sze;i++)
{
if(arr[i]==0)
{
	sum=sum-counter;
sum=sum+pos-i;
counter++;
}

}

printf("%d\n",sum);


t--;
}
return 0;


}
