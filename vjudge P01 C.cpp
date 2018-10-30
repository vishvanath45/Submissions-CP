//  vjudge P01 C
#include<bits/stdc++.h>
using namespace std;
#define ll long long int  

int main()
{
	// #ifndef ONLINE_JUDGE
 //    // for getting input from input.txt
 //    freopen("input.txt", "r", stdin);
 //    // for writing output to output.txt
 //    freopen("output.txt", "w", stdout);
 //    #endif

ll t;
cin>>t;


ll h;

while(t--)
{
	cin>>h;

	h =h-2;
	ll ans =0;
	if(h>0)
	{
		ans+=h/2;
		ans = ans*(ans+1)/2;
	}

	cout<<ans<<"\n";

}

return 0;
}