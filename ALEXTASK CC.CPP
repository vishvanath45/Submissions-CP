//ALEXTASK cc
#include<bits/stdc++.h>

using namespace std;

int lcm(int i,int j)
{
int p=i;
int q=j;
//int k= 0;
	while(i!=j)
	{
	   // cout<<"kvjd\n";
	    //cout<<"i is"<<i<<" j is "<<j<<"\n";
		if(i>j)
			i=i-j;
		else
			j=j-i;
	}

	return (p*q)/i;
}

int main()
{
	int t;

	vector<int> v;

	int tt;
	cin>>tt;
	while(tt--)
    {


	cin>>t;

	int arr[t];
	int i=-1;
	while(++i<t)
	{
	cin>>arr[i];
	}
int j;
for(j=0;j<t-1;j++)
	{for(i=j+1;i<t;i++)
	{
	    int dad=arr[i];
	    int mom=arr[j];
	    //cout<<"dad"<<dad<<"\t"<<"mom"<<mom<<"\n";
	    int tt=lcm(dad,mom);
	   v.push_back(tt);
	}
	}


sort(v.begin(),v.end());

//cout<<"happening\n";

cout<<v.at(0)<<"\n";
    }
return 0;



}
