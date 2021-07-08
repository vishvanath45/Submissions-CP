//acm q3 am

#include<stdio.h>
int main()
{
	int a[100];
	int t;
	int i,j,k,n,flag=0;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);

		}
		k=a[0]*a[1];
		for(j=0;j<n;j++)
		{
			if(k==a[j]){
				flag=1;
			printf("yes");
			break;
			}

		}
		if(flag==0)
		printf("no");
	}
}
