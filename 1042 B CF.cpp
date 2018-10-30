// 1042 B CF
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

map< string, int> mp;

for (int i = 0; i < t; i++)
{
	// cout<<"asdasd";
	ll p;
	string s;
	cin>>p;
	cin>>s;
	sort(s.begin(), s.end());

	map< string, int>::iterator it;
	it = mp.find(s);
	if(it == mp.end())
	{
		mp[s] = p;
	}
	else if(mp[s] > p)
	{
		mp[s] = p;
	}
}

// string s2;
// s2 = "asa";
//     mp[s2] = 23;

//     cout<<mp[s2];
std::vector<int> v;
if(mp["A"]>0 && mp["B"] >0 &&  mp["C"] >0)
{
	int x = mp["A"] + mp["B"] + mp["C"];
	v.push_back(x);
}
if(mp["AB"]>0)
{
	if(mp["C"] >0)
	{
		v.push_back(mp["AB"] + mp["C"]);
	}

	if(mp["BC"] >0)
	{
		v.push_back(mp["AB"] + mp["BC"]);
	}

	if(mp["AC"] >0)
	{
		v.push_back(mp["AB"] + mp["AC"]);
	}
}


if(mp["BC"]>0)
{
	if(mp["A"] >0)
	{
		v.push_back(mp["BC"] + mp["A"]);
	}

	if(mp["AB"] >0)
	{
		v.push_back(mp["BC"] + mp["AB"]);
	}

	if(mp["AC"] >0)
	{
		v.push_back(mp["BC"] + mp["AC"]);
	}
}


if(mp["AC"]>0)
{
	if(mp["B"] >0)
	{
		v.push_back(mp["AC"] + mp["B"]);
	}

	if(mp["BC"] >0)
	{
		v.push_back(mp["AC"] + mp["BC"]);
	}

	if(mp["AB"] >0)
	{
		v.push_back(mp["AC"] + mp["AB"]);
	}
}

if(mp["ABC"]>0)
{

v.push_back(mp["ABC"]);
}

if(v.size() == 0)
{
	cout<<"-1";
	return 0;
}

// v.push_back(1);
sort(v.begin(), v.end());

cout<<v[0];

return 0;
}