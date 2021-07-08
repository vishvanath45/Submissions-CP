//CHEFROUT CC

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


int t;
cin>>t;

while(t--)
{
	string s;
	cin>>s;
	int l = s.size();

	int flag=0;

	for(int i =0 ;i<l-1;i++)
	{
		if(int(s[i])>int(s[i+1]))
		{
		flag=1;
		break;
		}
	}
	if(flag)
	cout<<"no\n";
	else
	cout<<"yes\n";

}

return 0;

}