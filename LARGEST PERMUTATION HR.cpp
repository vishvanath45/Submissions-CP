// LARGEST PERMUTATION HR

#include<bits/stdc++.h>

#define ll long long int

using namespace std;

int main()
{

ll n,k;
cin>>n>>k;

vector<ll> vec(n), pos(n);

for( ll i=0;i<n;i++)
{
	cin>>vec[i];
	pos[vec[i]]=i;
}

ll j=0;

while(k--)
{
	for(ll i =j;i<n;i++)
	{
		if(vec[i]!=n-i)
		{
			ll t2= pos[n-i];
			swap(pos[vec[i]],pos[vec[t2]]);
			swap(vec[i],vec[t2]);
			break;

		}
	}
	j++;

}


for( ll i=0;i<n;i++)
	cout<<vec[i]<<" ";

return 0;



}
