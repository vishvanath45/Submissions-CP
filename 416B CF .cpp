//416B CF 

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


ll n,m;
cin>>n>>m;

int orgarr[n];

for(ll i =0 ;i<n;i++)
cin>>orgarr[i];



ll l,r,q;

while(m--)
{
	cin>>l>>r>>q;

	l--;
	r--;
	q--;

	ll no_to_worry = orgarr[q];

	int count=0;

	for(int q = l ; q<=r;q++)
	{
		if(orgarr[q]<no_to_worry)
		{
			count++;
		}
	}

	if(orgarr[l+count]==no_to_worry)
		cout<<"Yes\n";
	else
		cout<<"No\n";

}

return 0 ;

}