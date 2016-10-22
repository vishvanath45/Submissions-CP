//200 B CF

#include<stdio.h>
#include<algorithm>
using namespace std;
#include<iostream>

int main()
{
	int t;
	cin >>t;
	int i=0;
	int sum=0;
	while(i<t)
	{
int x;
cin>>x;
sum+=x;
i++;
	}
	t=100*t;

float ans= (float)sum/t;
ans=100*ans;


printf("%12f",ans);


return 0;





}
