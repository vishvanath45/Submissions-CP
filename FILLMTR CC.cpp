// FILLMTR CC

#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

int t;
cin>>t;
while(t--)
{
int n, q;
cin>>n>>q;

int arr[n][n];
memset(arr,-1, sizeof(arr));
int l,r,val;
while(q--)
{
cin>>l>>r>>val;

arr[l-1][r-1]=val;
}

int pkp =0;
int flag=0;
for(int i =0 ; i < n ; i++)
{
	for(int j =0 ; j< pkp; j++)
	{	
		if(arr[i][j]!=-1&&arr[j][i]!=-1)
		if(arr[i][j]!=arr[j][i])
		{
			flag=1;
			
		}
		if(arr[j][j]==1)
			flag=1;
		if(flag)
			break;
	}
	if(flag)
		break;
	pkp++;
	if(pkp==n)
		break;
}

if(flag)
cout<<"no\n";
else
cout<<"yes\n";



}


return 0;
}