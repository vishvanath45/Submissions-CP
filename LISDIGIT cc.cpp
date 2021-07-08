//
#include<bits/stdc++.h>

using namespace std;

int main()
{

int t;
cin>>t;

while(t--)
{
	int n;

	cin>>n;

int arr[n];

for(int i=0;i<n;i++)
{
int kk;
cin>>kk;
arr[i]=kk;
}

for(int i=0;i<n;i++)
cout<<arr[i];


cout<<"\n";

}


return 0;

}
