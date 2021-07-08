//807 C CF

#include<bits/stdc++.h>

using namespace std;
#define ll long long 
int main()
{

#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt","r", stdin);
    // for writing output to output.txt
    freopen("output.txt","w", stdout);
#endif

ll int t;

cin>>t;

while(t--)
{
	ll int x,y,p,q;
	cin>>x>>y>>p>>q;

	if((float)x/y==1&&(float)p/q==1)
	{
		cout<<0<<"\n";

	}
	else if((float)p/q==1&&(float)x/y<1)
	{
		cout<<"-1"<<"\n";

	}
	else if((float)p/q==0&&(float)x/y>0)
	{

		cout<<"-1"<<"\n";

	
	}
		else if((float)x/y==(float)p/q)
	{

		cout<<"0"<<"\n";

	
	}
	else
	{
		ll int i =1;

		if (y>q)
		{
			i= y/q;

		}

	for( ;i<=1000000000;i++)
	{	
		ll int p1=p*i;
		ll int q1=q*i;

		//cout<<p1<<" "<<q1<<"\n";
		ll int counter=0;

		if(p1>=x&&q1>y&&(p1-x)<=(q1-y))
		{
			cout<<q1-y<<"\n";
			counter=1;
		}	
		if(counter==1)
			break;


	}
}


}

return 0;
}