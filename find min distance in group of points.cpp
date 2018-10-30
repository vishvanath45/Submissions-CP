// find min distance in group of points

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

int t;
cin>>t;

pair<int,int> p[t];

for(int i = 0;i<t;i++)
{
	cin>>p[i].first;
	cin>>p[i].second;
}

set <float> st;

for(int i =0; i<t ; i++)
{
	for(int j = i+1;j<t ; j++)
	{
		float distance =((p[j].first-p[i].first)*(p[j].first-p[i].first)+(p[j].second-p[i].second)*(p[j].second-p[i].second));
		st.insert(sqrt(distance));
	}
}


set<float>::iterator it;

it = st.begin();

cout<<*it;


return 0;

}