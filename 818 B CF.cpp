//818 B CF
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


int n,m;
cin>>n>>m;

int arr[n]={0};

int leaderpos[m];

for(int i =0;i<m;i++)
cin>>leaderpos[i];


for(int i =0 ;i<m-1;i++)
{

int dumb;

dumb=leaderpos[i+1]-leaderpos[i];


if(dumb<=0)
	dumb+=n;

cout<<"values for dumb = "<<dumb<<"\n\n";

cout<<"leaderpos[i]-1 is "<<leaderpos[i]-1<<"\n\n";


int spk = leaderpos[i]-1;

arr[spk]=dumb;


cout<<"arr[spk] is  "<<arr[spk]<<"***\n";


}
cout<<"afere 1 iter \n";



for(int i =0;i<n;i++)
cout<<arr[i]<<" ";
cout<<"\n";

int hash[n];

for(int i =0;i<n;i++)
	hash[i]=1;



cout<<"\n";


for(int i =0 ; i<n;i++)
{	
	if(arr[i]>0)
	{
	hash[arr[i]-1]--;

	
}
}


cout<<"\n afere 2 iter \n";



for(int i =0;i<n;i++)
cout<<arr[i]<<" ";

stack <int> stk;
for(int i =0 ;i<n;i++)
{

if(hash[i]==1)
{
	stk.push(i+1);
}
}

for(int i =0 ;i<n;i++)
{
	if(arr[i]==0)
	{
		int pkp =stk.top();
		arr[i]=pkp;
		stk.pop();
	}
}

for(int i =0;i<n;i++)
if(arr[i]==0)
{
	cout<<"-1\n";
	return 0;
}


int sanitychk[n]={0};


for(int i =0;i<n;i++)
{
	sanitychk[arr[i]-1]++;
	if(sanitychk[arr[i]-1]>1)
		{cout<<"-1";
	return 0;
}
}


for(int i =0;i<n;i++)
cout<<arr[i]<<" ";

return 0;
}

