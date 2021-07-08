// 688 A CF

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

int opp;
int days;
cin>>opp;
cin>>days;

string str ;

int arr[days]={0};


for(int i = 0;i< days;i++)
{
	cin>>str;
	for(int j = 0 ;j < opp ; j++)
	{
		//cout<<str[j]<<"*";
		if(str[j]=='0')
		{
			arr[i]=-1;
			break;
		}

	}

}


int localmax=0;
int globalmax=0;


for(int i =0 ;i<days ;i++)
{
	if(arr[i]==-1)
	{
		localmax++;
		if(localmax>globalmax)
			globalmax=localmax;
	}
	else
	{
		localmax=0;
	}
}



cout<<globalmax<<"\n";


return 0;
}

