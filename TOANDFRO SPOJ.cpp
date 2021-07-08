// TOANDFRO SPOJ
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

while(1)
{
	ll t;
	cin>>t;
	if(!t)
		return 0;

	string s;
	cin>>s;
	
	std::vector<string> v;

	bool a = true;
	for (ll i = 0; i < s.length(); i+=t)
	{
		string abc = s.substr(i,t);
		if(!a)
		{
			reverse(abc.begin(), abc.begin()+t);
		}
		v.push_back(abc);
		a = !a;
	}

	for(int i = 0 ; i < v[0].size() ; i++)
	{
		for(int j = 0 ; j < v.size() ; j++)
			cout<<v[j][i];
	}
	cout<<"\n";

}

return 0;
}