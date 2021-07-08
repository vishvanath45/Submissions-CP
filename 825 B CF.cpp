//825 B CF

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



	int arr[10][10];
	char ch;

	for(int j =0 ;j<10;j++)
	for(int i =0 ;i<10;i++)
	{
		cin>>ch;
	if(ch=='X')
	arr[i][j]=1;
	else if(ch=='.')
	arr[i][j]=0;
	else
	arr[i][j]=-1;
}

int flag =0;


for(int i =0 ;i<10;i++)
for(int j =0 ;j<10;j++)
{
	
	if(arr[i][j]==1)
	{
	if(i+4<10&&(arr[i+1][j]+arr[i+2][j]+arr[i+3][j]+arr[i+4][j]==3))
		{cout<<"YES\n";return 0;}
	else if(j+4<10&&(arr[i][j+1]+arr[i][j+2]+arr[i][j+3]+arr[i][j+4]==3))
		{cout<<"YES\n";return 0;}
	else if(i+4<10&&j+4<10&&(arr[i+1][j+1]+arr[i+2][j+2]+arr[i+3][j+3]+arr[i+4][j+4]==3))
		{cout<<"YES\n";return 0;}
	else if(i-4>=0&&j+4<10&&(arr[i-1][j+1]+arr[i-2][j+2]+arr[i-3][j+3]+arr[i-4][j+4]==3))
		{cout<<"YES\n";return 0;}
	else if(i+4<10&&j-4>=0&&(arr[i+1][j-1]+arr[i+2][j-2]+arr[i+3][j-3]+arr[i+4][j-4]==3))
		{cout<<"YES\n";return 0;}
	else if(i-4>=0&&j-4>=0&&(arr[i-1][j-1]+arr[i-2][j-2]+arr[i-3][j-3]+arr[i-4][j-4]==3))
		{cout<<"YES\n";return 0;}
	else if(i-4>=0&&(arr[i-1][j]+arr[i-2][j]+arr[i-3][j]+arr[i-4][j]==3))
		{cout<<"YES\n";return 0;}
	else if(j-4>=0&&(arr[i][j-1]+arr[i][j-2]+arr[i][j-3]+arr[i][j-4]==3))
		{cout<<"YES\n";return 0;}
	else if(j+4<10&&(arr[i][j+1]+arr[i][j+2]+arr[i][j+3]+arr[i][j+4]==3))
		{cout<<"YES\n";return 0;}
	}
}

cout<<"NO\n";
return 0;



}