//186 A CF

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

string s1,s2;

cin>>s1>>s2;

string s3=s1;
string s4=s2;

sort(s3.begin(),s3.end());
sort(s4.begin(),s4.end());


int flag=0;

if(s1.length()==s2.length()&&s3.compare(s4)==0)
{
	
	for(int i =0;i<s1.length();i++)
	{
		if(s1[i]!=s2[i])
			{flag++;
				if(flag>2)
				break;
			}
	}

	if(flag==2||flag==0)
		cout<<"YES\n";
	else
		cout<<"NO\n";

		return 0;

}
else
	cout<<"NO\n";

return 0;

}

