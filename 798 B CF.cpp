//798 B CF
#include<bits/stdc++.h>

using namespace std;
#define ll long long 
int main()
{

#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt","r", stdin);
    // for writing output to output.txt
    freopen("output.txt","w", stdout);
#endif


int t;
cin>>t;


string s[t];

for(int i =0;i<t;i++)
{
	cin>>s[i];
}

int ans[t]={0};

for(int i =0;i<t;i++)
{
	
	string string2= s[i]+s[i];

	int slen= string2.size();

	for(int m =0;m<t;m++)
	{


	for(int j=0;j<slen;j++)
	{
		if(string2[j]==s[m][0])
		{
			int counter=0;


			for(int k =j;k<j+s[m].size();k++)
			{
				if(string2[k]!=s[m][k-j])
				{
					counter=1;
					break;
				}
			}

			if(counter==0)
			{
			
				ans[m]+=s[m].size()-j;
				//cout<<"current i"<<i <<"ans i "<<ans[m]<<"\n";

			}
		}
	}
}

}

for(int i =0;i<t;i++)
	cout<<ans[i]<<" ";

return 0;

}