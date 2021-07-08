//DEC16 NOV CHALLENGE LONG

#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int t,w,k,nxtseat;
	cin>>t;


	while(t--)
	{
	cin>>w;
	k=w%8;
	if(k==0)
	{
		cout<<w-1<<"SL\n";
	}
	else if(k==1)
	{
		cout<<w+3<<"LB\n";
	}
	else if(k==2)
	{
		cout<<w+3<<"MB\n";
	}
	else if(k==3)
	{
		cout<<w+3<<"UB\n";
	}
	else if(k==4)
	{
		cout<<w-3<<"MB\n";
	}
	else if(k==5)
	{
		cout<<w-3<<"MB\n";
	}
	else if(k==6)
	{
		cout<<w-3<<"UB\n";
	}
	else if(k==7)
	{
		cout<<w+1<<"SU\n";
	}
}

return 0;

}
