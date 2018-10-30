//hackerearth coderush2 armstrong
//chutiya contest tha saare testcases galat the, maze 
#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	while(cin>>n)
	{

	int digit=floor(log(n)/log(10))+1;

	int dn=n;

	int sum=0;
	//cout<<sum<<"\n";
	while(dn!=0)
	{
		int x=dn%10;
		//cout<<x<<"\n";
		dn=dn/10;
		sum+=pow(x,digit);
		//cout<<sum<<"\n";

	}
	if(sum==n)
		cout<<"True ";
	else
		cout<<"False ";
    }
	return 0;


}
