//luck balance HR

#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	int maxloss;
	cin>>t;
	cin>>maxloss;
	int arr[t]={0};


	int luck=0;

	for(int i=0;i<t;i++)
	{
		int il;
		int it;
		cin>>il;
		cin>>it;
		if(it==0)
		luck+=il;
		else
			arr[i]=il;
	}



	sort(arr,arr+t);

//    for(int i=0;i<t;i++)
//	{
	//cout<<arr[i]<<"*";
//	}
	int p=t;

	while(maxloss--)
	{
		luck+=arr[t-1];
		arr[t-1]=0;
		t--;
	}
	//cout<<"\n";
//
	 //  for(int i=0;i<t;i++)
	//{
	//cout<<arr[i]<<"***";
	//}
	//cout<<"\n";

    for(int i=0;i<p;i++)
	{
	luck-=arr[i];
	}


cout<<luck;
}
