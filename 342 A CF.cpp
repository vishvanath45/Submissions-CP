// 342 A CF

#include<bits/stdc++.h>

#define ll long long int

using namespace std;

int main()
{
	int n;
	cin>>n;

	int arr[8]={0};

	int kk=0;

	for(int i=0;i<n;i++)
	{
		cin>>kk;
	//	cout<<"now i val "<<i<<"\n";
		arr[kk]+=1;
	}

	if(arr[5]>0||arr[7]>0||arr[1]!=n/3)
	{	cout<<"-1\n";
		return 0;

	}
	int flag=0;

	int flag1=0;
	int flag2=0;
	int flag3=0;


	while(arr[1]>0&&arr[3]>0&&arr[6]>0)
	{
		//cout<<1<<"*"<<3<<" "<<6<<"\n";
		flag=1;
		flag1++;
		arr[1]--;
		arr[3]--;
		arr[6]--;
	}

	while(arr[1]>0&&arr[2]>0&&arr[4]>0)
	{
		//cout<<1<<"*"<<2<<" "<<4<<"\n";
		flag=1;
		flag2++;
		arr[1]--;
		arr[2]--;
		arr[4]--;
	}

	while(arr[1]>0&&arr[2]>0&&arr[6]>0)
	{
		//cout<<1<<" "<<2<<" "<<6<<"\n";
		flag3++;
		flag=1;
		arr[1]--;
		arr[2]--;
		arr[6]--;
	}

int tflag = flag1+flag2+flag3;

if(flag==0||tflag!=n/3)
cout<<"-1\n";
else
{
	for(int kk=0;kk<flag1;kk++)
		cout<<1<<" "<<3<<" "<<6<<"\n";
	for(int kk=0;kk<flag2;kk++)
		cout<<1<<" "<<2<<" "<<4<<"\n";
	for(int kk=0;kk<flag3;kk++)
		cout<<1<<" "<<2<<" "<<6<<"\n";
}

return 0;


}
