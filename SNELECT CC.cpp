//SNELECT CC

#include<bits/stdc++.h>
using namespace std;
#define ll long long int

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

while(t--)
{
	string s;
	cin>>s;
	int l = s.length();

	int won =0;

	int no_mangoose=0,no_snake=0;
	int arr[l]={0};

	for(int i =0;i<l;i++)
	{
		if(s[i]=='m')
			{no_mangoose++;
				arr[i]=1;
			}
		else
			no_snake++;
	}

	if(no_mangoose>no_snake)
		won=1;
	else
	{

		for(int i =0;i<l;i++)
		{
			if(arr[i]==1)
			{
				if(i-1>=0&&arr[i-1]==0)
				{
					arr[i-1]=-1;
					no_snake--;
				}
				else if(i+1<l&&arr[i+1]==0)
				{
					arr[i+1]=-1;
					no_snake--;

				}
			}
		}

		if(no_snake>no_mangoose)
			won=2;
		else if(no_mangoose>no_snake)
			won=1;
		else
			won=3;

	}

	if(won==1)
		cout<<"mangoose\n";
	else if(won==2)
		cout<<"snake\n";
	else
		cout<<"tie\n";






}

return 0;
}
