//TOURISTS CPP V3
//after several attempt question samaz aaya

 
#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
	int n,t;
	cin>>n>>t;
    int city[100001]={0};
 
	int arr[t][2];
	int i=-1;
 
	while(++i<t)
	{
	int x,y;
 
	cin>>x>>y;
    arr[i][0]=x;
    city[x-1]=1;
    city[y-1]=1;
    arr[i][1]=y;
	}
	int l=0;
	int p=1;
	while(p==1)
	{
	if(arr[l][1]==arr[l+1][0]&&(l<t))
	{
	l++;
	}
	else if(arr[l][1]==arr[l+1][1]&&(l<t))
	{
	//swap
		int temp=arr[l+1][0];
		arr[l+1][0]=arr[l+1][1];
		arr[l+1][1]=temp;
		l++;
	}
	else
	{
        if(l==t-1)
		p=0;
		else
		p=-1;
 
	}
 
	}
 
 
	if(p==-1||arr[0][0]!=arr[t-1][1])
	{cout<<"NO\n";
	return 0;
	}
 
	int summ=0;
	for(int yy=0;yy<n;yy++)
	summ+=city[yy];
 
	if(summ!=n)
	{cout<<"NO\n";
	return 0;
	}
 
	cout<<"YES\n";
		i=-1;
 
	while(++i<t)
	{
	cout<<arr[i][0]<<" "<<arr[i][1]<<"\n";
 
	}
 
}