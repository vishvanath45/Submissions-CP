//BANDMATR CC

#include<bits/stdc++.h>

using namespace std;

#define ll long long int

int main()
{
	ll t;
	cin>>t;

	while(t--)
	{
		ll sze;
		cin>>sze;
		ll sum=0;
		ll temp;
		ll arr[sze][sze];
		float ans=0;
		ll k1=0;
		ll k2=0;
		ll pkp=0;

		for(ll i=0;i<sze;i++)
			for(ll j=0;j<sze;j++)
				{cin>>temp;
					arr[i][j]=temp;
					sum+=temp;
					if(i==j)
						pkp+=temp;
				}

		if(sum==0||sum==sze)
			ans=0;
		else if(sum==sze*sze)
			ans=sze-1;
		else
		{
            //cout<<"pkp is "<<pkp<<"\n";
			sum=sum-sze;

			ll times=0;

			while(sum>0)
			{
				sum-=2*(sze-(times+1));
				times++;
			}

			ans=times;



		}

		cout<<ans<<"\n";


	}

	return 0;

}
