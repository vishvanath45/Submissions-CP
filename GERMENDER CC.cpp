// GERMENDER CC


/*
4
5 1
1 0 0 1 1
3 3
0 0 1 1 0 1 1 0 0
3 3
1 1 1 0 1 0 0 1 0
3 3
1 0 0 1 1 0 1 0 0


Output:
1
1
1
0

*/

#include<bits/stdc++.h>

using namespace std;

#define ll long long int

#define pb push_back

int main()
{

	ll s,d;

	cin>>s>>d;

	ll td= s*d;

	ll s2 =s;

	vector<ll> dist;

	int result[s][d]={0}; // result 2d matrix

	for(int i=0;i<td;i++)
	{
		int input;
		cin>>input;
		dist.pb(input);
	}

	for(int i=0;i<d-1;i++)
	{
		int pkp=dist[i];
		dist.pb(pkp);
	}

	std::vector<ll> sum;

	sum.pb(dist[0]);

	for(int i=1;i<dist.size();i++)
	{
		int k=sum[i-1]+dist[i];
		sum.pb(k);
	}

	for(int i=0;i<dist.size();i++)
	{
	cout<<sum[i]<<"**";
	}

	cout<<"\n";

		int di=0;
		int po=0;
		int pp=0;

	for(int st=0;st<s;st++)
	{
		pp=po;

		for( di=0;di<s;di++)
		{
			cout<<"state is "<<st<<"\n";
			cout<<"sum[pp+d] is"<<sum[pp+d-1]<<" sum[pp] is "<<sum[pp]<<"\n";
			int toadd= sum[pp+d-1]-sum[pp];
			if(dist[pp]==1)
				toadd+=1;

			result[st][di]=toadd;
			pp+=d;

		}

		po++;


	}

	for(int i=0;i<s;i++)
		{for (int j = 0; j < d; j++)
		{
			cout<<result[i][j]<<" ** ";
		}
		cout<<"\n";
	}



	int currentwinstates=0;
	int currentwindistricts=0;
	int totalswon=0;

	int onepresi=0;

	for(int i=0;i<s;i++)
	{
		currentwindistricts=0;
        cout<<"startig here for state "<<i<<"\n";
		for (int j = 0; j < d; j++)
		{
			if(result[i][j]>=(d/2+1))
			{
				currentwindistricts+=1;
			}

			cout<<"curr win d "<<currentwindistricts<<"\n";
		}

		cout<<"\n";

		cout<<"total no of states "<<s2<<"\n";

		if(currentwindistricts>=((s2/2)+1))
		{
            cout<<"curr win dis is greater maj of no. of states\n";
			onepresi=1;
			break;
		}

		if(onepresi)
			break;

	}

	if(onepresi==1)
		cout<<"ans is "<<1<<"\n";
	else
		cout<<"ans is "<<0<<"\n";




	return 0;

}
