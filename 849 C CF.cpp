//849 C CF
#include<bits/stdc++.h>
using namespace std;
#define ll long long int  

int main()
{
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
    #endif
int t,s;
cin>>t;
s = t;

int counter=0;

cout<<"a";
for(int i =0 ; i<sqrt(t); i++)
	{
		cout<<"a";
		counter++;
		if(counter==s)
		{
			return 0;
		}
	}
t =t -sqrt(t);

cout<<"b";
for(int i =0 ; i< sqrt(t); i++)
{
		cout<<"b";
		counter++;	
		if(counter==s)
		{
			return 0;
		}
}
t =t -sqrt(t);

cout<<"c";
for(int i =0 ; i< sqrt(t); i++)
{
		cout<<"c";
		counter++;	
		if(counter==s)
		{
			return 0;
		}
}

t =t -sqrt(t);
cout<<"d";
for(int i =0 ; i< sqrt(t); i++)
{
		cout<<"d";
		counter++;	
		if(counter==s)
		{
			return 0;
		}
}

t =t -sqrt(t);
cout<<"e";
for(int i =0 ; i< sqrt(t); i++)
{
		cout<<"e";
		counter++;	
		if(counter==s)
		{
			return 0;
		}
}


t =t -sqrt(t);
cout<<"f";
for(int i =0 ; i< sqrt(t); i++)
{
		cout<<"f";
		counter++;	
		if(counter==s)
		{
			return 0;
		}
}


t =t -sqrt(t);
cout<<"g";
for(int i =0 ; i< sqrt(t); i++)
{
		cout<<"g";
		counter++;	
		if(counter==s)
		{
			return 0;
		}
}



t =t -sqrt(t);
cout<<"h";
for(int i =0 ; i< sqrt(t); i++)
{
		cout<<"h";
		counter++;	
		if(counter==s)
		{
			return 0;
		}
}








return 0;
}