// 688 C CF

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


int vertices;
cin>>vertices;


int size = vertices+10;
int arr[size]={0};


int edges;
cin>>edges;

for(int i =0 ;i < edges; i++)
{
	int x,y;
	cin>>x>>y;

	if(arr[x]==0 && arr[y]==0)
	{
		arr[x]=1;
		arr[y]=2;
	}
	else if(arr[x]==0 && arr[y]==1)
	{
		arr[x]=2;
		arr[y]=1;
	}
	else if(arr[x]==0 && arr[y]==2)
	{
		arr[x]=1;
		arr[y]=2;
	}
	else if(arr[x]==1 && arr[y]==0)
	{
		arr[x]=1;
		arr[y]=2;
	}
	else if(arr[x]==1 && arr[y]==1)
	{
		cout<<-1<<"\n";
		return 0;
	}
	else if(arr[x]==1 && arr[y]==2)
	{
		arr[x]=1;
		arr[y]=2;
	}
	else if(arr[x]==2 && arr[y]==0)
	{
		arr[x]=2;
		arr[y]=1;
	}
	else if(arr[x]==2 && arr[y]==1)
	{
		arr[x]=2;
		arr[y]=1;
	}
	else if(arr[x]==2 && arr[y]==2)
	{
		cout<<-1<<"\n";
		return 0;
	}

}

set<int> st1;
set<int> st2;




for(int i =1 ; i<vertices+1;i++)
{

	if(arr[i]==1)
	{
		st1.insert(i);
	}
	else if(arr[i]==2)
	{
		st2.insert(i);
	}

}

cout<<st1.size()<<"\n";

set<int>::iterator it;

for(it = st1.begin();it!=st1.end();it++)
{
	cout<<*it<<" ";
}
cout<<"\n";

cout<<st2.size()<<"\n";



for(it = st2.begin();it!=st2.end();it++)
{
	cout<<*it<<" ";
}

return 0;


}
