// HILLJUMP CC

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

ll hills,queries;

cin>>hills>>queries;

ll height[hills];

for(ll i=0; i<hills;i++ )
cin>>height[i];

while(queries--)
{
	ll qtype;
	cin>>qtype;

	if(qtype==1)
	{
		ll l,r;
		cin>>l>>r;
		l-=1;

		ll currmax= height[l];
		ll currpos=l;

		for(ll i = l ; i<hills; i++)
		{

			if(i-currpos>100)
				break;
			if(r==0)
				break;


			if(r>0 && currmax<height[i])
			{
				r--;
				currmax=height[i];
				currpos=i;
			}
			


		}

		cout<<currpos+1<<"\n";

	}
	else
	{
		ll l,r,x;
		cin>>l>>r>>x;

		for(ll i = l-1; i<=r-1; i++)
		{
			height[i]+=x;
		}

	//	for(ll i =0 ; i< hills ; i++)
	//		cout<<height[i]<<"**";
	//	cout<<"\n";
	}
}

return 0;

}