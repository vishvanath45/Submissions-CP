//FFCOMB CC
//shit question pura nahi padha there can be merging of 2 sets too
#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
	ll int m,mset,t;
	cin>>t;

	while(t--)
    {



	cin>>m>>mset;

	ll int dmset=mset;
	ll int prices[m];
	ll int dummy[m];
	ll int setprices[mset];
	ll int time;
	ll int i=-1;
	ll int pos;
	ll int prc=0;
	ll int tprice=0;
	while(++i<m)
	{
	cin>>prices[i];
	tprice+=prices[i];
	}

	ll int priceofset;
	while(mset--)
	{

		cin>>priceofset;
		cin>>time;
		prc=0;
		ll int yy=m;
		    while(yy--)
			{dummy[yy]=prices[yy];
			}

		while(time--)
		{
		    cin>>pos;
		 	dummy[pos-1]=0;
		}
		ll int sumx=0;
		ll int m2=m;
		while(m2--)
		{
			sumx+=dummy[m2];
		}

setprices[mset]=sumx+priceofset;


	}

sort(setprices,setprices+dmset);

if(setprices[0]<tprice)
{
    cout<<setprices[0]<<"\n";
}
else
    cout<<tprice<<"\n";


    }

return 0;
}
