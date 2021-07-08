// 401 A CF

#include<bits/stdc++.h>


using namespace std;

int main()
{
	int n;

	cin>>n;
	n=n%6;
	int x;
	cin>>x;

	if(n==0)
	{
		if(x==0)
		cout<<0<<"\n";
		else if(x==1)
		cout<<1<<"\n";
		else
		cout<<2<<"\n";
	}
	else if(n==1)
	{
		if(x==0)
		cout<<1<<"\n";
		else if(x==1)
		cout<<0<<"\n";
		else
		cout<<2<<"\n";
	}
	else if(n==2)
	{
		if(x==0)
		cout<<1<<"\n";
		else if(x==1)
		cout<<2<<"\n";
		else
		cout<<0<<"\n";
	}
	else if(n==3)
	{
		if(x==0)
		cout<<2<<"\n";
		else if(x==1)
		cout<<1<<"\n";
		else
		cout<<0<<"\n";
	}
	else if(n==4)
	{
		if(x==0)
		cout<<2<<"\n";
		else if(x==1)
		cout<<0<<"\n";
		else
		cout<<1<<"\n";
	}
	else if(n==5)
	{
		if(x==0)
		cout<<0<<"\n";
		else if(x==1)
		cout<<2<<"\n";
		else
		cout<<1<<"\n";
	}

	return 0;




}
