// 460 B CF

#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll returnsum(ll a)
{
	ll sum =0;
	while(a!=0)
	{
		sum+=a%10;
		a=a/10;
	}
	return sum;

}


int main()
{


#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif


vector<ll> v;
ll a,b,c ;
cin>>a>>b>>c;

ll count=0;



for (ll sx = 1; sx <= 81; sx++)
{
	ll xyz =1;
	for( ll sql = 0;sql<a;sql++)
		xyz=xyz*sx;

	ll pkp = b*xyz+c;
	if(pkp<=1000000000)
	{
	ll hud = returnsum(pkp);
	if(hud==sx)
	{
		count++;
		v.push_back(pkp);

	}
}
else
{
	break;
}
}



cout<<count<<"\n";

for(ll i =0;i<v.size();i++)
	cout<<v[i]<<" ";


return 0;


}

