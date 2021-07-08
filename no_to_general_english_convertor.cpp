//challenged by amit task to convert no to
//digits in common representation

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int  t;
	cin>>t;
	string s;
	itoa(s,t)
//	strcpy(s,char(t));
	cout<<s<<"$$";

	int l=s.size();
	int arr[l]={0};

	for(int i=0;i<l;i++)
	{
	int ll=t%10;
	t=t/10;
	arr[i]=ll;
	}

	for(int i=0;i<l;i++)
	cout<<arr[i]<<"*";

	return 0;


}
