//361 A CF
#include<stdio.h>
#include<algorithm>
using namespace std;
#include<iostream>

int main()
{
	int n;
	cin>>n;
	int arr[n];
	int sum;
	cin>>sum;

	arr[0]=sum;
int i=0;
while(i++<n)
{
arr[i]=0;
}

int i2=n,i3=n;
int kk=0;
int k2;


while(i2--)
{
	kk++;
	k2=kk;

while(i3--)
{

	cout<<arr[(k2%n)]<<" ";
	k2++;
}
i3=n;

cout<<"\n";
}



return 0;




}
