// 834 A CF

#include<bits/stdc++.h>
using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif

int length;
int guard;
cin>>length;
cin>>guard;

string str;

cin>>str;


int beg[26];

memset(beg,-1, sizeof(beg));

int end[26];

memset(end,-1, sizeof(end));


for(int i = 65; i <=65+26;i++)
{
	for(int j = 0; j< str.length();j++)
	{
	if(str[j]==i)
	{
		beg[i-65]=j;
		break;
	}
}
}


for(int i = 65; i <=65+26;i++)
{
	for(int j = str.length()-1; j>=0;j--)
	{
	if(str[j]==i)
	{
		end[i-65]=j;
		break;
	}
}
}


int sumarr[str.length()]={0};

for(int i =0 ; i< 26 ;i++)
{

	// cout<<beg[i]<<" "<<end[i]<<"\n";
	if(beg[i]>=0)
	{
		for(int k = beg[i];k<=end[i];k++)
			sumarr[k]++;


	}
}


int maxxx=0;

for(int i =0 ; i <str.length();i++)
{

	// cout<<sumarr[i];
	if(sumarr[i]>maxxx)
	{	maxxx=sumarr[i];

if(maxxx > guard)
	{cout<<"YES\n";
return 0;
}
	}
}

// cout<<"\n";

// cout<<maxxx;


// cout<<"\n";
// cout<<guard;

if(maxxx > guard)
	cout<<"YES\n";
else
	cout<<"NO\n";

return 0;
}