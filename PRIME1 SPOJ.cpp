// PRIME1 SPOJ
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mp make_pair
#define M (ll)(1e9+7)

int arr[26];

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
ll t;
cin>>t;
while(t--)
{
	ll a, b;
	cin>>a>>b;

	int sze = sqrt(b);

	int arr[sze+2];

	for(int i = 0 ; i < sze+2; i++)
		arr[i] = 0;



	std::vector<int> v;

	for(int i = 2 ; i < sze+2; i++)
	{
		if(arr[i] == 0)
		{
			for(int j = 2*i ; j < sze+2 ; j+=i)
				arr[j] = 1;
			v.push_back(i);
		}
	}

	ll farr[b-a+1];
	// for(int i = 0 ; i < v.size() ; i++)
	// {
	// 	cout<<v[i]<<" -- ";
	// }

	for(int i = 0 ; i < v.size() ; i++)
	{
		ll kk = v[i];

		ll rem = a%kk;
		ll div = a/kk;

		ll fd = kk*(div)+kk;

		cout<<div<<" "<<fd<<" ----";

		while(fd >=a && fd <= b)
		{
			if(fd != kk)
				{
					farr[fd-a]=1;
					cout<<fd-a<<"-- ";
				}
			fd += kk;
		}


	}
	for(int i = 0 ; i < b-a+1 ; i++)
	{
		if(farr[i] == 0)
			cout<<i+a<<" ";
	}

}


return 0;
}