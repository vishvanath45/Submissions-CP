// 632 A CF
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


ll t, p;
cin>>t>>p;

std::vector<int> v;


for(int i = 0 ; i < t ; i++)
{
	string s;
	cin>>s;

	if(s == "halfplus")
		v.push_back(1);
	else
		v.push_back(2);
}

ll apple = 0;

ll half = 0;

for(int i =  v.size() -1 ; i >= 0 ; i--)
{

	if(v[i] == 1)
	{
		apple = apple*2+1;
		half++;
	}
	else
	{
		apple = apple*2;

	}
}



cout<<apple*p-(p/2)*half;





return 0;
}