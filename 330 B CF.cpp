// 330 B CF

#include<bits/stdc++.h>

using namespace std;

int main()
{



int n,m;

cin>>n;

cin>>m;

int arr[n+1]={0};

for(int i =0;i<m;i++)
{
	int l,r;
	cin>>l>>r;

	arr[l]=1;
	arr[r]=1;
}

int pos=0;

for(int i =1;i<n+1;i++)
{
if(arr[i]==0)
{pos=i;
break;
}
}


cout<<n-1<<"\n";

for(int i =1;i<=n;i++)
{
	if(i!=pos)
	cout<<i<<" "<<pos<<"\n";

}


return 0;

}
