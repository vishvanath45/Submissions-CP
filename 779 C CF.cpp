//  779 C CF
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

ll n, k;

cin>>n>>k;

ll pdd[n];
ll pad[n];
 
vector< pair< ll , pair< ll,ll > > >paair;
 

for(ll i =0 ; i< n; i++)
	cin>>pdd[i];

for(ll i =0 ; i<n ; i++)
	cin>>pad[i];


for(ll i =0; i<n ;i++)
{

	paair.push_back(make_pair((pdd[i]-pad[i]),make_pair(pdd[i],pad[i])));

}

sort(paair.begin(),paair.end());

ll k_satis=0;

ll sum=0;

for(ll i =0 ; i<n; i++)
{
	if(k_satis<k)
	{
		sum+=paair[i].second.first;
		k_satis++;
	}
	else
	{
		sum+=(min(paair[i].second.first,paair[i].second.second));
	}

}

cout<<sum<<"\n";
return 0;
}




