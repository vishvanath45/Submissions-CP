// XENTASK CC

#include<bits/stdc++.h>

using namespace std;

#define ll long long int

int main()
{
	ll t;
	cin>>t;

	while(t--)
	{

		ll tsk;

		cin>>tsk;

		ll sum1e=0,sum1o=0,sum2e=0,sum2o=0;

		ll no;

		for(ll i=0;i<tsk;i++)
		{
			cin>>no;
			if(i%2==0)
				sum1e+=no;
			else
				sum1o+=no;
		}

		for(ll i=0;i<tsk;i++)
		{
			cin>>no;
			if(i%2==0)
				sum2e+=no;
			else
				sum2o+=no;
		}

		ll sum1=0,sum2=0;

		sum1=sum1e+sum2o;
		sum2=sum1o+sum2e;

		cout<<min(sum1,sum2)<<"\n";


	}

	return 0;
}
