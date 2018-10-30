// 731A CF

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

// ll t;
// cin>>t;


ll seive[300000];


seive[0]=1;
seive[1]=1;


for(ll i = 0 ; i < 300000;i++)
{
	if(seive[i]==0)
	{
		seive[i]=2;

		for(ll j= i*2; j< 300000 ; j+=i )
		{
			seive[j]=1;
		}
	}
}


for (ll i = 0; i < 300000; ++i)
{
	/* code */
	if(seive[i]==2)
		{
			cout<<i<<"\n";
	}
}






// char currpos= 'a';
// string s;
// cin>>s;


// ll ans = 0;
// for( ll i = 0 ;i<s.size() ; i++)
// {
// 	ll a  = abs(s[i]-currpos);
// 	ll b  =  26-a;
// 	// cout<<a<<b<<"\n";
// 	ll mini = min(a,b);
// 	// cout<<"Asdad";
// 	// cout<<mini<<"\n";


// 	currpos = s[i];
// 	// cout<<currpos;
// 	ans+=mini;

// }

// cout<<ans;
// return 0;



// // 







return 0;
}