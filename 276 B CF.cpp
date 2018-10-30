// 276 B CF
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


string s;
cin>>s;
int l = s.length();

int arr[26]={0};

for(int i =0;i<l;i++)
{
	int p = s[i]-'a';
	arr[p]++;
}

int count =0;

for(int i =0;i<26;i++)
{
	arr[i]=arr[i]%2;

	if(arr[i]%2!=0)
	count++;
}
	if(count==0)
		{
	cout<<"First\n";
	return 0;
}

	if(count%2!=0)
	{
		cout<<"First\n";
	}
	else
	{
		cout<<"Second\n";
	}


return 0;

}