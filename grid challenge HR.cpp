// HACKERRANK ALGO GRID CHALLENGE

#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;


	while(t--)
	{
		int s;

		cin>>s;
		int arr[s][s];
		char ch;
		for(int i=0;i<s;i++)
		{
			for(int j=0;j<s;j++)
			{
				cin>>ch;
				arr[i][j]=ch;
			}
		}

		for(int i=0;i<s;i++)
		{
			sort(arr[i],arr[i]+s);
		}

		for(int i=0;i<s;i++)
		{
			for(int j=0;j<s;j++)
			{

				cout<<char(arr[i][j])<<"*";
			}
			cout<<"\n";
		}

		int counter=0;
		for(int i=0;i<s;i++)
		{
			for(int j=0;j<s-1;j++)
			{
                cout<<char(arr[j][i])<<"**"<<char(arr[j+1][i])<<"\n";
				if(arr[j][i]>arr[j+1][i])
				{
				cout<<"here\n";
					counter=1;
					break;
				}

			}
			if(counter==1)
					break;
            else
            {
            cout<<"pass for"<<i+1<<"\n";
            }
		}

		if(counter==0)
			cout<<"YES\n";
		else
			cout<<"NO\n";

	}

	return 0;

}
