//735 B

#include<stdio.h>
#include<algorithm>
using namespace std;
#include<iostream>
#include<string.h>

int main()
{
	int n,n1,n2;

cin>>n>>n1>>n2;


	int arr[n];

	int i=-1;

	while(++i<n)
	{
		cin>>arr[i];
	}


	sort(arr,arr+n);

int temp;

if(n1>n2)
{
	temp=n2;
	n2=n1;
	n1=temp;
}


//sum n1(small) from array ;
double sumn1=0;
i=0;

while(i<n1)
{
	i++;
	sumn1+=arr[n-i];

}


sumn1=sumn1/(n1*1.0);

double sumn2=0;
i=0;

while(i<n2)
{
	i++;
	sumn2+=arr[n-i-n1];

}

sumn2=sumn2/(n2*1.0);

printf("%.8f",sumn1+sumn2);




return 0;

}









