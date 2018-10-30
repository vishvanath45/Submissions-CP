// HANGOVER SPOJ
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

double x;

while(1)
{
	cin>>x;

	if(x == 0.00)
	return 0;

	double i = 2;

	double sum = 0;
	ll count = 0;
	while(sum <= x)
	{	
		count++;
		sum += 1/i;
		i+=1;
	}
	cout<<count<<" card(s)\n";
}


return 0;
}