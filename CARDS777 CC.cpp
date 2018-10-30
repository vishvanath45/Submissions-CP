//CARDS777 CC

#include<bits/stdc++.h>

using namespace std;

#define ll long long int

int main()
{

ll t;
cin>>t;

while(t--)
{
	ll r,b,rt,bt;
	cin>>r>>b>>rt;

	bt= r+b-rt;


	ll maxpt = min(r,rt)+min(b,bt);

	ll minpt = abs(r-bt);


//cout<<maxpt<<" "<<minpt<<"\n";
float ans;
    if(rt!=bt)
	ans= (float)(minpt*min(r,b)+maxpt*max(r,b))/(r+b);
	else
	 ans= (float)(minpt*rt+maxpt*bt)/(r+b);

	printf("%.9f\n",ans);

}
return 0;





}
