// 733 A CF A. Grasshopper And the String

#include<bits/stdc++.h>
using namespace std;


int main()
{

	string s;
	cin>>s;

int t=s.size();

vector<int>v;
int i=-1;

while(++i<t)
{
	if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='Y')
	{
		v.push_back(i+1);

	}
}
v.push_back(t+1);
int y=v.size();
for(i=y-1;i>0;i--)
{
	v[i]=v[i]-v[i-1];
}

sort(v.begin(),v.end());

if(v.size()!=0)
{
    cout<<v[v.size()-1];

}
else
cout<<t+1;


return 0;




}
/*
string s;

cin>>s;
int l;

l=s.size();

int fv=-1;
int i=-1;
int sv=-1;

int counter=0;
int maxs=0;

while(++i<l)
{
	if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='Y')
	{
	if(fv==-1)
	fv=i;
	else
	{
	sv=i;
	counter=sv-fv;
	fv=i;
	if(counter>maxs)
		maxs=counter;
	}

	}



}
int ans;
if(sv==-1)
{
    ans=l-fv-1;
    if(ans>fv)
    {
        maxs=ans+1;
    }
    else
        maxs=fv+1;
}

if(fv==-1)
{

    maxs=l+1;
}
cout<<maxs;
return 0;


}
*/
