//433 A CF

#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	int t;
	cin>>t;
	int i=t;
	int tc=0,oc=0;
	int temp;

	while(i--)
	{
	cin>>temp;
	if(temp==100)
	oc++;
	tc++;
	}

	if(t>1)
	{
	if(oc%2==0&&oc>0)
	{cout<<"YES";}
	else
	{
		if(oc==0&&tc%2==0)
		cout<<"YES";
	else
		cout<<"NO";
	}
	}
	else
cout<<"NO";

return 0;


}
