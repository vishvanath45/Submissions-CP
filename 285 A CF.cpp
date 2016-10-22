//285 A CF

#include<stdio.h>
#include<algorithm>
using namespace std;
#include<iostream>

int main()
{

int n,t;
cin>>n>>t;

int arr[n];
int i=0;
while(i++<=n)
{
	arr[i-1]=i;
}
int t2=n;




int t3=t;

while(t--)
{
	cout<<arr[n-1]<<" ";
	n--;
}

i=0;

while(i+t<(n-1))
{
	cout<<arr[i]<<" ";
	i++;
}


return 0;



}
