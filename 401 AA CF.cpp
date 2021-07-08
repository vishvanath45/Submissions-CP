//  401 AA CF
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

ll size;
cin>>size;

ll a[size],b[size];

ll hasha[5],hashb[5],hash[5];

for(int i =0 ;i<5;i++)
{
	hash[i]=0;
	hashb[i]=0;
	hasha[i]=0;

}
ll t;

for(ll i =0; i< size; i++)
	{cin>>t;

		t =t-1;
		hasha[t]++;
		hash[t]++;
	}

for(ll i =0; i< size; i++)
	{cin>>t;

		t =t-1;
		hashb[t]++;
		hash[t]++;
	}

ll req[5];

for(int i =0 ; i<5; i++)
{
	if(hash[i]%2!=0)
	{
		cout<<-1;
		return 0;
	}
else
{
	req[i]=hash[i]/2;
	//cout<<req[i]<<"*";
}
}

int ans=0;

for(int i =0; i<5; i++)
{
	ans+=abs(hasha[i]-req[i]);
}

cout<<ans/2;
return 0;
}