// HR BEAUTIFUL PAIR

#include<bits/stdc++.h>

#define ll long long int

using namespace std;

int main()
{

ll n;

cin>>n;

ll hash1[1001]={0};
ll hash2[1001]={0};

ll t;

for(ll i=0;i<n;i++)
{
	cin>>t;
	hash1[t]++;
}

ll pair =0;

for(ll i=0;i<n;i++)
{
	cin>>t;
	if(hash1[t]>0)
	{
		pair++;
		hash1[t]--;
	}
}

if(pair==n)
cout<<pair<<"\n";
else
cout<<pair+1<<"\n";

return 0;

}
