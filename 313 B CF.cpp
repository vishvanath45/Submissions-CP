//313 B CF

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

string str;
cin>>str;

	int l =str.length();

	int qw[l]={0};

	for(int i =1;i<l;i++)
	{
		if(str[i]==str[i-1])
		{
			qw[i]=qw[i-1]+1;
		}
		else
			qw[i]=qw[i-1];
	}

int  q;
cin>>q;

while(q--)
{

	{
		int l,r;
		cin>>l>>r;

		cout<<qw[r-1]-qw[l-1]<<"\n";

	}



}

return 0;
}