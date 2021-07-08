// HR A
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mp make_pair
#define M (ll)(1e9+7)
#include<string>


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
	ll x;
	cin>>x;

	string s;

	cin>>s;

	ll z = 0;
	ll o = 0;

	for (ll i = 0; i < x; i++)
	{
		if(s[i] == '0')
			z++;
		else
			o++;
	}

o = min(z, o);

if(o%2 == 0)
{
	cout<<"King\n";
}
else
{
	cout<<"Humpty Dumpty\n";
}



}
return 0;
}