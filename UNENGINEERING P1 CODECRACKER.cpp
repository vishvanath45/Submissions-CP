// UNENGINEERING P1 CODECRACKER

#include<bits/stdc++.h>

using namespace std;

int main()
{

set<int> sset;
int t;
cin>>t;

int x,n;

while(t--)
{

cin>>n;
for(int i=0;i<n;i++)
{
cin>>x;

	sset.insert(x);
}

int size=sset.size();


if(n<=2)
{
	cout<<"NO\n";
}
else
{
	if(size>1)
	{
	cout<<"YES\n";
	}
	else
	{
	cout<<"NO\n";
	}
}

}
return 0;

}
