// 298 B CF

#include<bits/stdc++.h>

#define ll long long int
using namespace std;

int main()
{
	ll t;
	ll x1,y1,x2,y2;

	cin>>t;
	cin>>x1>>y1>>x2>>y2;

	string s;
	cin>>s;

	// N  = +1
	// S  = -1
	// E  = +1
	// W  = -1

	ll xreqd = x2-x1;

	ll yreqd = y2-y1;

	ll negx=0;
	ll posx=0;
	ll negy=0;
	ll posy=0;

	ll xsatisfied=0;
	ll ysatisfied=0;

	if(xreqd==0)
	xsatisfied=1;

	if(yreqd==0)
	ysatisfied=1;

	for(ll i=0;i<t;i++)
	{

		char ch = s[i];

		if((ysatisfied!=1)&&ch == 'N')
		{
			posy++;

			if(posy == yreqd)
				ysatisfied=1;

		}

		if((ysatisfied!=1)&&ch == 'S')
		{
			negy--;

			if(negy == yreqd)
				ysatisfied=1;

		}

		if((xsatisfied!=1)&&ch == 'E')
		{
			posx++;

			if(posx == xreqd)
				xsatisfied=1;
		}

		if((xsatisfied!=1)&&ch == 'W')
		{
			negx--;

			if(negx == xreqd)
				xsatisfied=1;

		}


		if((xsatisfied+ysatisfied)==2)
			{cout<<i+1<<"\n";
				break;
			}



	}
    if((xsatisfied+ysatisfied)!=2)
    cout<<-1<<"\n";

	return 0 ;

}
