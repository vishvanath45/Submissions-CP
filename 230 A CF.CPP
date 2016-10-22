//230 A CF

//correct solution is in 230 A v_2.cpp using STL

#include<stdio.h>
#include<s namespace std;
#include<iostream>
#include<vector>
struct ordering {
	bool operator()(pair<int*,int> const& a,pair<int*,int> const& b)
	{
		return a.second < b.second;
	}
};

int main()
{
int t,pow;
cin>>pow;
cin>>t;
int opppow,oppgift;
int i=-1;

vector<pair<int*,int> > set1[t];
while(i++<t)
{
cin>>opppow>>oppgift;
set1[i].push_back(make_pair(opppow,oppgift));

}


sort(set1.begin(),set1.end(),ordering());

i=-1;

while(i++<t)
{

	cout<<set1[i].first<<"\t";
cout<<set1[i].second<<"\n";
}





return 0;
}
