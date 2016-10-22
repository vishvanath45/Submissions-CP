//330 A CF 
#include<stdio.h>
#include<algorithm>
using namespace std;
#include<iostream>

int main()
{
int r,c;
cin>>r>>c;
char ch;


int arr[r][c];
int i,j;

for(i=0;i<r;i++)
	for(j=0;j<c;j++)
	{
		cin>>ch;
		if(ch=='.')
			arr[i][j]=1;
		else
		arr[i][j]=0;		

	}

int sum;
int urow=0;
int ucol=0;
for(i=0;i<r;i++)
{	
	sum=0;
	for(j=0;j<c;j++)
	{
		sum+=arr[i][j];		

	}
	if(sum==c)
	{
		urow++;
	}

}

for(j=0;j<c;j++)
{	
	sum=0;
	for(i=0;i<r;i++)
	{
		sum+=arr[i][j];		

	}
	if(sum==r)
	{
		ucol++;
	}

}

int torem=ucol*urow;

int ans=(ucol*r)+(urow*c);
ans-=torem;
cout<<ans;

return 0;



}