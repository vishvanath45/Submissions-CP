// 839 A CF

#include<bits/stdc++.h>

using namespace std;


int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif


int t,k;

cin>>t>>k;
-
int arr[t];

for(int i = 0 ; i< t;i++)
	cin>>arr[i];

for(int i =0 ; i<t-1;i++)
{
	if(arr[i]>8)
	{
		arr[i+1]+=arr[i]-8;
		arr[i]=8;
	}
}

if(arr[t-1]>8)
{
	arr[t-1]=8;
}

int sum=0;
for(int i =0 ; i< t ; i++)
{
	sum+=arr[i];

	if(sum>=k)
	{
		cout<<i+1;
		return 0;
	}

}


cout<<-1;
return 0;

}