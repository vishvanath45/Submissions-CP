//742 A CF

#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int t;
	cin>>t;
	if(t==0){
	cout<<1;
	exit(0);
	}
	t=t%4;
	if(t==0)
	cout<<6;
	else if(t==1)
	cout<<8;
	else if(t==2)
	cout<<4;
	else
	cout<<2;


	return 0;

}