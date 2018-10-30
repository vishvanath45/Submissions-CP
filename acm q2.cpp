//ac,m q2

#include<stdio.h>
int main()
{
	int t,d,r,x,sum=0;
	scanf("%d",&t);
	while(t!=0)
	{
		scanf("%d",&d);

		if(d>9)
		{

   r = d+1;

   while (r != 0)
   {
      x = r % 10;
      sum       = sum + x;
      r         = r / 10;
   }
		}
		t--;
	}
	printf("%d",sum);

}
