// GREEDY FLORIST HR

#include<bits/stdc++.h>

using namespace std;
#define ll long long int

int main()
{

	ll n,k;
	cin>>n>>k;

	vector<ll> v(n);

	ll sum=0;

	for(ll i =0;i<n;i++)
		cin>>v[i];


	sort(v.begin(),v.end(),greater<ll>());

	ll tsum=0;

for(ll i=0;i<n;i++)
{
tsum+=((i/k)+1)*v[i];

}





	cout<<tsum<<"\n";


	return 0;



}
