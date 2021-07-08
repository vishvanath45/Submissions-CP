//HACKERRANK GRID CHALLENGE

#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int size;
	cin>>size;
	int arr[size][size];
	for(int i=0;i<size;i++)
	{
	for(int j=0;j<size;j++)
	{	char ch;
		cin>>ch;
		arr[i][j]=int(ch)-int(a'');

	}
	}
	sort(arr[i][0],arr[i][size-1])

	for(int i=0;i<size;i++)
	{
	for(int j=0;j<size;j++)
	{cout<<arr[i][j];
	}
	cout<<"\n";
	}
	return 0;

}
