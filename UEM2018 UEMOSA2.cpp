// UEM2018 UEMOSA2
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mp make_pair
#define M (ll)(1e9+7)

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


string a;

string b;


cin>>a>>b;

ll sze = a.length();

vector< pair< char, int > >p1, p2;


for(int i = 0; i < a.size() ; i++)
{
	p1.push_back( make_pair(a[i],i+1));
}


for(int i = 0; i < b.size() ; i++)
{
	p2.push_back(make_pair(b[i],i+1));
}

sort(p1.begin(), p1.end());

sort(p2.begin(), p2.end());




for(auto i = p1.begin() ; i != p1.end() ; i++)
{

	if(p1[i].first != p2[i].first)
	{
		cout<<-1;
		return 0;
	}

}

for(auto i = p1.begin() ; i != p1.end() ; i++)
{

	if(p1[i].first == p2[i].first)
	{
		cout<<p1[i].second<<" "<<p2[i].second<<"\n";
	}
}

return 0;

}


