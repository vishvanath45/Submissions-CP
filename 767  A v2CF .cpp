//767 A CF

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


int ts,te;
cin>>ts>>te;
int t;
cin>>t;
int n;
cin>>n;

vector< int> v;

int kk;

vector <int> org;
int miin =INT_MAX;
for(int i =0 ;i< n;i++)
{
	cin>>kk;
	org.push_back(kk);
	if(kk<miin)
		miin=kk;
	if(kk<ts)
	{
		kk = ts;
	}
	v.push_back(kk);
}

int arr[1000000]={0};
int i;

int flag=0;
for(i = 0 ; i<n-1;i++)
{	
	int ss = v[i];
	//cout<<ss<<"SS\n";
	if( ss+t >= v[i+1]  )
	{
		v[i+1]=ss+t;
		//cout<<v[i+1]<<"\n";
		if(v[i+1]>=te)
		{
			flag=1;
			//cout<<"flag b 1\n";
			break;
		}
	}
	else
	{
		cout<<ss+t;
		return 0;
	}
}




if(flag==1)
{
	cout<<miin-1;
	return 0;

}
//cout<<" i is "<<i<<"\n";
if(i<n)
{
if(i<n&&v[i]+t<=te-t-1)
{
	cout<<v[i]+t;
	return 0;
}

if(v[i]+t>=te)
{
	cout<<miin-1;
	return 0;
}
}
else
{
if(v[i-1]+t<=te-t-1)
{
	cout<<v[i]+t;
	return 0;
}

if(v[i-1]+t>=te)
{
	cout<<miin-1;
	return 0;
}
}

return 0;
}