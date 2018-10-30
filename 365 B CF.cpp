//365 B CF
#include<bits/stdc++.h>
using namespace std;


int main()
{
	int t;

	cin>>t;
	int arr[t];
	int i=-1;

	while(++i<t)
	{
		cin>>arr[i];
	}


i=1;
int count=0;
int max=0;

while(++i<t)
{
	if(arr[i]==(arr[i-1]+arr[i-2]))
	{
		count++;
		if(count>max)
			max=count;
	}
	else
		count=0;



}

if(max<3&&t>1)
cout<<"2";
else if(t==1)
cout<<"1";
else
cout<<max;

return 0;

}
