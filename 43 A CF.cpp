//43 A CF

#include<stdio.h>
#include<algorithm>
using namespace std;
#include<iostream>
#include<bits/stdc++.h>


int main()
{
int t;
cin>>t;
map<string,int>m;

int max=0;
int s;

while(t--)
{
	cin>>s;
	int i=0;

	if(m.find(s)!=m.end())
	{
		i++;
	}
	if(i==0)
	{
		m[s]=1;

      if(max==0)
      {
      	max==1;
      }

		}
	else
	{
		map<string,int>::iterator i=m.find(s);
		assert(i!=m.end());
		i->second=i->second+1;
		if((i->second)>max)
		{
	max=i->second;
		}

	}
}




return 0;

}

