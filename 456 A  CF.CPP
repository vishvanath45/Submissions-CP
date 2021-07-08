//456 A CF

#include<bits/stdc++.h>
using namespace std;

#include<vector>

bool placement(pair <int,int >p1,pair<int,int>p2)
{
	return(p1.first<p2.first);
}


int main()
{

int n;
cin>>n;
int prc;
int qua;
vector <pair<int,int> >v;


int i=-1;



i=-1;
while(++i<n)
{
	cin>>prc>>qua;
	
v.push_back(make_pair(prc,qua));
}

sort(v.begin(),v.end(),placement);

int counter=0;

i=0;

while(++i<n)
{
	if(v[i].second<v[i-1].second)
	{
		cout<<"Happy Alex";
		exit(0);
	}
}

cout<<"Poor Alex";


return 0;


}
