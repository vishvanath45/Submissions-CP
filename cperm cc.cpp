// cc CPERM

#include<bits/stdc++.h>

using namespace std;

long long int p,maxi=1000000007;

long long int fast_exp(int base, int exp)
{
    if(exp==1)
    return base;
    else
    {
        if(exp%2 == 0)
        {
            long long int base1 = pow(fast_exp(base, exp/2),2);
            if(base1 >= 1000000007)
            return base1%1000000007;
            else
            return base1;
        }
        else
        {
            long long int ans = (base*  pow(fast_exp(base,(exp-1)/2),2));
            if(ans>= 1000000007)
            return ans%1000000007;
            else
            return ans;
        }
    }
}
/*
long long int fast_exp(int base, int expi)
{
    long long int res=1;
    while(expi>0)
    {
       if(expi%2==1)
       res=((res*base)%maxi);
   		else
       base=((base*base)%maxi);
       expi/=2;
    }
    return res;
}
*/

int main()
{
int t;

	cin>>t;

	while(t--)
	{
	long long int n;
	cin>>n;

	if(n<=2)
	{
		cout<<0<<"\n";
	}
	else
	{
		p=fast_exp(2,n-1);
		p-=2;

		if(p>=0)
		{
			cout<<p<<"\n";
		}
		else
		{
			p=p+maxi;
			cout<<p<<"\n";

		}
	}
	}
	return 0;

}
