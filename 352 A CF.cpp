//352 A CF
#include<stdio.h>
#include<algorithm>
using namespace std;
#include<iostream>

int main()
{
	int t;
	cin>>t;
	int noz=0,nof=0;
	int xx;


	while(t--)
	{
		cin>>xx;
		if(xx)
			nof++;
		else
			noz++;


	}
if(noz==0)
	cout<<-1;
else if(nof%9==0)
{
    if(nof==0)
    {
        noz=1;
    }
	while(nof--)
	{
		cout<<5;
	}
	while(noz--)
	{
		cout<<0;
	}
}
else
{
	int x=nof%9;
	nof-=x;

    if(nof==0)
    {
        noz=1;
    }

	while(nof--)
	{
		cout<<5;
	}
	while(noz--)
	{
		cout<<0;
	}

}


	return 0;
}
