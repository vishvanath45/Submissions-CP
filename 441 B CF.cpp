//  441 B CF
#include<bits/stdc++.h>
using namespace std;
#define ll long long int  

struct gg
{
	ll f;
	char s;
};
gg a[300011];
int main()
{
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
    #endif
ll t,i,j,n,m,q;
cin>>n>>q;
string s;
cin>>s;
ll k=0;
ll c=0;
ll l,ans=0;
for(i=0;i<n;i++)
{
  if(s[i]=='.')
  	c++;
  else
  {
  	if(c)
  	ans=ans+c-1;
  	c=0;
  }
}
if(c)
ans=ans+c-1;
//cout<<ans<<" ";
while(q--)
{
	char cc;
	cin>>l>>cc;
	ll temp=1;
	c=0;
	if(n<=3)
	{
		ans=0;
		s[l-1]=cc;
		for(i=0;i<n;i++)
		{
			if(s[i]=='.')
				c++;
			else
			{
				if(c)
				ans=ans+c-1;
				c=0;
			}
		}
		if(c)
		ans=ans+c-1;
		cout<<ans<<"\n";
		s[l-1]=cc;
		continue;
	}
	

	if(l-1==0)
	{
		if(s[l-1]=='.')
		{
			if(cc=='.')
			{
				cout<<ans<<"\n";
				temp=0;
				//break;
			}
			else
			{
				if(s[l]=='.')
				{
					ans=ans-1;
					cout<<ans<<"\n";
					temp=0;
					//break;
				}
				else
				{
					cout<<ans<<"\n";
				}
			}
		}
		else
		{
			if(cc=='.')
			{
				if(s[l]=='.')
				{
					ans=ans+1;
					cout<<ans<<"\n";
				  temp=0;
				 // break;
				}
				else
				{
					cout<<ans<<"\n";
					temp=0;
					//break;
				}
			}
			else
			{
				cout<<ans<<"\n";
				temp=0;
				//break;
			}
		}
	}
	else if(l==n)
	{
		if(s[l-1]=='.')
		{
			if(cc=='.')
			{
				cout<<ans<<"\n";
				temp=0;
				//break;
			}
			else
			{
				if(s[l-2]=='.')
				{
					ans=ans-1;
					cout<<ans<<"\n";
					temp=0;
					//break;
				}
				else
					cout<<ans<<"\n";
			}
		}
		else
		{
			if(cc=='.')
			{
				if(s[l-2]=='.')
				{
					ans=ans+1;
					cout<<ans<<"\n";
				   temp=0;
				  // break;
				}
				else
				{
					cout<<ans<<"\n";
					temp=0;
					//break;
				}
			}
			else
			{
				cout<<ans<<"\n";
				temp=0;
			//	break;
			}
		}
	}
	else
	{
		if(s[l-1]=='.')
		{
			if(cc=='.')
			{
				cout<<ans<<"\n";
			//	break;
			}
			else
			{
				if(s[l]=='.'&&s[l-2]=='.')
				{
					ans=ans-2;
					cout<<ans<<"\n";
					//break;
				}
				else if((s[l]=='.'&&s[l-2]!='.')||(s[l]!='.'&&s[l-2]=='.'))
				{
					ans=ans-1;
					cout<<ans<<"\n";
					//break;
				}
				else
				{
					cout<<ans<<"\n";
					//break;
				}
			}
		}
		else
		{
			if(cc!='.')
				cout<<ans<<"\n";
			else
			{
				if(s[l]=='.'&&s[l-2]=='.')
				{
					ans=ans+2;
					cout<<ans<<"\n";

				}
				else if(s[l]=='.'||s[l-2]=='.')
				{
					ans=ans+1;
					cout<<ans<<"\n";
				}
				else
					cout<<ans<<"\n";

			}
		}
	}
	s[l-1]=cc;

}


return 0;
}