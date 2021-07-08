	//RESTPERM

	#include<bits/stdc++.h>

	#define ll long long

	using namespace std;

	int main()
	{
	char str[10];

	int t,tt;
	cin>>tt;
	while(tt--)
    {


	cin>>t;


	if(t==1)
	cout<<3<<" "<<1<<"\n";
	else if(t==2)
	{
		cout<<2<<" "<<1<<" "<<2<<"\n";
		fflush(stdout);
	cin>>str;
	if(strcmp(str,"No")==1)
	{
		cout<<3<<" "<<2<<" "<<1<<"\n";fflush(stdout);
	}
	else
	cout<<3<<" "<<1<<" "<<2<<"\n";fflush(stdout);fflush(stdout);
	}
	else if(t==3)
	{
		cout<<1<<" "<<1<<" "<<3<<" "<<2<<"\n";fflush(stdout);
		cin>>str;
		if(strcmp(str,"Yes")==1)
		{
		cout<<2<<" "<<2<<" "<<3<<"\n";fflush(stdout);
		cin>>str;
		if(strcmp(str,"Yes")==1)
		{
		cout<<3<<" "<<3<<" "<<2<<" "<<1<<"\n";fflush(stdout);
		}
		else
		{
		cout<<3<<" "<<1<<" "<<2<<" "<<3<<"\n";fflush(stdout);
		}
		}
		else
		{
			cout<<1<<" "<<2<<" "<<3<<" "<<2<<"\n";fflush(stdout);
		cin>>str;
		if(strcmp(str,"Yes")==1)
		{
			cout<<2<<" "<<2<<" "<<3<<"\n";fflush(stdout);
		cin>>str;
		if(strcmp(str,"Yes")==1)
		{
			cout<<3<<" "<<2<<" "<<3<<" "<<1<<"\n";fflush(stdout);
		}
		else
			cout<<3<<" "<<2<<" "<<1<<" "<<3<<"\n";fflush(stdout);

		}
	else
	{
		cout<<2<<" "<<2<<" "<<3<<"\n";fflush(stdout);
		cin>>str;
		if(strcmp(str,"Yes")==1)
		{
			cout<<3<<" "<<1<<" "<<3<<" "<<2<<"\n";fflush(stdout);

	}
	else
	{
		cout<<3<<" "<<3<<" "<<1<<" "<<2<<"\n";fflush(stdout);
	}



	}

		}
	}
    }
	return 0;



	}
