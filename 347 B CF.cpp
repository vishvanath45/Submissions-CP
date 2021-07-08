// 347B CF
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

int t;
cin>>t;

int arr[t];

for(int i=0;i<t;i++)
cin>>arr[i];

int ans=0;


for(int i =0;i<t;i++)
{
	if (arr[i]==i)
	ans++;
}
for(int i =0;i<t;i++)
{
	if (arr[i]!=i)
	{
	int pkp=arr[i];
	if(arr[pkp]==i)
	{
	ans+=2;
	cout<<ans;
	return 0;
	}
}

}
if(ans!=t)
cout<<ans+1;
else
cout<<ans;
return 0;

}