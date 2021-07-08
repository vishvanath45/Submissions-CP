//445 A CF
#include<bits/stdc++.h>

using namespace std;

int main()
{



#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif

int n,m;
cin>>n>>m;

int arr[n][m]={0};

for(int i=0;i<n;i++)
for(int j=0;j<m;j++)
{
	char ch;
	cin>>ch;
	if(ch=='.')
	arr[i][j]=1;
	else if(ch=='-')
	arr[i][j]=0;	
}

for(int i=0;i<n;i++)
{

if(i%2==0)
{
	for(int j=0;j<m;j++)
	{
		if(arr[i][j]==0)
			cout<<"-";
		else if(j%2==0)
			cout<<"B";
		else
			cout<<"W";
	
	}
	cout<<"\n";
}
else
{
		for(int j=0;j<m;j++)
	{
		if(arr[i][j]==0)
			cout<<"-";
		else if(j%2==0)
			cout<<"W";
		else
			cout<<"B";
	
	}
	cout<<"\n";

}
}

return 0;

}



