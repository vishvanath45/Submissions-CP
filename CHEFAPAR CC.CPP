//CHEFAPAR

#include<bits/stdc++.h>

#define ll long long int

using namespace std;

int main()
{
	ll t;
	ll n;
	cin>>t;

	while(t--)
	{
		cin>>n;

		ll rentpaid=0;
		ll noduerent=0;

		ll arr[100001]={0};

		ll rentdue;

		for(int i=0;i<n;i++)
			{
				cin>>arr[i];

			if(arr[i]==1)
				rentpaid++;

			if(rentpaid==i+1)
			{
				noduerent++;
			}
		}


		ll monthrentnotpaid=0;

		monthrentnotpaid=n - rentpaid;

		rentdue = monthrentnotpaid*(1000)+n*100;
	//	cout<<rentdue<<"*\n";
		rentdue = rentdue - (noduerent*100);

		cout<<rentdue<<"\n";





	}

	return 0;

}
