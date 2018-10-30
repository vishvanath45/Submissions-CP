//  686 C CF
#include<bits/stdc++.h>
using namespace std;
#define ll long long int



ll basesevenlen(ll n)
{
	string s;
	int pkp=0;

  if(n==0)
  {
  	s="0";
 // 	cout<<s<<"\n\n";
  //	return s;
  }
	while(n>0)
	{
		ll rem = n%7;
		pkp++;
		n =n/7;

	}

//	cout<<s<<"\n\n";
	return pkp;
}


string baseseven(ll n, ll sizereq)
{
	string s;
  if(n==0)
  {
  	s="0";
 // 	cout<<s<<"\n\n";
  	
  }
	while(n>0)
	{
		ll rem = n%7;
		char s3 = rem+48;
		s.insert(s.begin(),s3);
		n =n/7;

	}
	 	while(s.length()!=sizereq)
	 	{
	 		char s3='0';
	 		s.insert(s.begin(),s3);
	 	}
//	cout<<s<<"\n\n";
	return s;
}



int main()
{
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
    #endif

ll n,m;
cin>>n>>m;

if(n>=117648)
	n=117648;
if(m>=117648)
	m=117648;


ll n1 = basesevenlen(n-1);

ll m1 = basesevenlen(m-1);

cout<<n1<<"      "<<m1<<"\n";
if(n1+m1>7)
{
	cout<<0<<"\n";
	cout<<"this ";
	return 0;

}

vector<string>vecn[n];
vector<string>vecm[m];

// cout<<n1<<"   *  "<<m1<<"\n";

for(ll i =0; i<n; i++)
{
	string s2;
	s2= baseseven(i,n1);
	//cout<<i<<"->\n";
	vecn[i].push_back(s2);
	// cout<<vecn[i][0]<<"*\n";
}

 // cout<<"\n\n\n";


for(ll i =0; i<m; i++)
{
	string s2;
	s2= baseseven(i,m1);
	//cout<<i<<"->\n"<<endl;
	vecm[i].push_back(s2);
	// cout<<vecm[i][0]<<"*\n";
}

ll ans=0;


for(ll i =0 ; i< n ; i++)
{
	ll hash[7]={0};

	string s2 = vecn[i][0];
	//cout<<" s2 "<<s2<<"\n";

	ll flag=0;

	for(ll k= 0 ; k<n1; k++)
	{
		ll k2 = s2[k]-48;
		//cout<<"k2 is "<<k2;

		hash[k2]++;
		if(hash[k2]>1)
		{
			flag=1;
			break;
		}
	}

	if(flag!=1)
	for(ll j=0; j<m;j++)
	{
		string s3 = vecm[j][0];
	//cout<<" s3 "<<s3<<"\n";

		ll counter=0;
		for(ll g=0; g<m1; g++)
		{
			ll k2 = s3[g]-48;
			hash[k2]++;
			if(hash[k2]>1)
			{
				counter=1;
				break;
			}
		}

		if(counter)
			{
				//cout<<s2<<" "<<s3<<"********\n";
			}
		else
			{
				//cout<<s2<<" "<<s3<<"\n";
				ans++;
			}


	}
}


cout<<ans<<"\n";

return 0;
}



