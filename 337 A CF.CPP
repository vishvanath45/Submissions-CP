//337 A CF

#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,m;
	cin>>n>>m;

	int arr[m];

	int i=-1;

	while(++i<m)
	cin>>arr[i];

	sort(arr,arr+m);


int temp;



i=0;
int counter=1;

int diff=0;
while((i+n-1)<m)
{
	temp=arr[i+n-1]-arr[i];
	
	if(diff==0&&counter==1)
	{
	diff=temp;	
	counter++;
	}
	else if(temp<diff)
	{
	diff=temp;
	}

i++;
}



cout<<diff;

return 0;


}