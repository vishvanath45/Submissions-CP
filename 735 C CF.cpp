//735 C

#include<stdio.h>
#include<algorithm>
using namespace std;
#include<iostream>
#include<string.h>
#include<math.h>


int main()
{
	long long int n;
	cin>>n;

	double pkp;
	pkp=log(n)/log(2);

	pkp=ceil(pkp);

	cout<<pkp;


	return 0;


}
