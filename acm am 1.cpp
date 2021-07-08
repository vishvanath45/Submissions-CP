//acm1 


#include<stdio.h>
#include<algorithm>
using namespace std;
#include<iostream>

int main()
{

int t,xo,yo,xf,yf;
cin>>t;


while(t--)
{
cin>>xo>>yo>>xf>>yf;


if(xo==xf)
{
	if(yo<yf)
		cout<<"up\n";
	else
		cout<<"down\n";
}
else if(yo==yf)
{
	if(xo<xf)
		cout<<"right\n";
	else
		cout<<"left\n";
}
else
	cout<<"sad\n";


}


return 0;



}