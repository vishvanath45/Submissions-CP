//PROBLEM CONTEST 754 B
#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t=4;
	int ans=0;

	char arr[t][t];

	for(int i=0;i<t;i++)
	{
	for(int j=0;j<t;j++)
	{
		int kk=0;
	char ch;
	cin>>ch;
	if(ch=='x')
		kk=1;
	else if(ch=='.')
		kk=0;
	else
		kk=-1;
	arr[i][j]=kk;
	}
	}

	for(int i=0;i<4;i++)
	{
		int j=0;
			if(arr[i][j]+arr[i][j+1]+arr[i][j+2]==2)
			{
				cout<<"YES\n";
				return 0;
			}

	}

	for(int i=0;i<4;i++)
	{
		int j=1;
			if(arr[i][j]+arr[i][j+1]+arr[i][j+2]==2)
			{
				cout<<"YES\n";
				return 0;
			}

	}


	for(int j=0;j<4;j++)
	{
		int i=0;
		if(arr[i][j]+arr[i+1][j]+arr[i+2][j]==2)
		{
				cout<<"YES\n";
				return 0;
		}

	}


	for(int j=0;j<4;j++)
	{
		int i=1;
		if(arr[i][j]+arr[i+1][j]+arr[i+2][j]==2)
		{
				cout<<"YES\n";
				return 0;
		}

	}


	if(arr[0][0]+arr[1][1]+arr[2][2]==2)
	{
				cout<<"YES\n";
				return 0;
    }

    if(arr[0][2]+arr[1][1]+arr[2][0]==2)
	{
				cout<<"YES\n";
				return 0;
    }

     if(arr[0][1]+arr[1][2]+arr[2][3]==2)
	{
				cout<<"YES\n";
				return 0;
    }
     if(arr[0][3]+arr[1][2]+arr[2][1]==2)
	{
				cout<<"YES\n";
				return 0;
    }
     if(arr[1][1]+arr[2][2]+arr[3][3]==2)
	{
				cout<<"YES\n";
				return 0;
    }

     if(arr[1][3]+arr[2][2]+arr[3][1]==2)
	{
				cout<<"YES\n";
				return 0;
    }

     if(arr[1][0]+arr[2][1]+arr[3][2]==2)
	{
				cout<<"YES\n";
				return 0;
    }

     if(arr[1][2]+arr[2][1]+arr[3][0]==2)
	{
				cout<<"YES\n";
				return 0;
    }





	cout<<"NO\n";


	return 0;


}
