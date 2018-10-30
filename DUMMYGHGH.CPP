// dummy function to calcu power

#include<bits/stdc++.h>

using namespace std;

int pow(long long int base,long long int exp)
{
	long long int res=1;

	while(exp>0)
	{
	if(exp%2==1)
	{res=(res%base)%1000000007;
	exp/=2;
	}
	else
	{
	base=(base*base)%1000000007;
	exp/=2;
	}
	}

return res;

}

int main()
{

int t;
cin>>t;
while(t--)
{
long long int base;
long long int exp;
cin>>exp;

long long int ans;
ans=pow(2,exp);

cout<<ans<<"\n";
}


return 0;



}
