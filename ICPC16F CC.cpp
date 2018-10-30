// ICPC16F CC
#include<bits/stdc++.h>

using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

int t;

cin>>t;

while(t--)
{
	int n, m,d,b,flag=0;
	cin>>n>>m>>d>>b;

	int arr[n][n];

	for(int i =0 ; i<n ; i++)
		for(int j =0 ; j <n ; j++)
			arr[i][j]=0;


	if((n*d)>m)
	{
		cout<<-1<<"\n";
		continue;

	}
	else
	{
		int pkp =0;int j = pkp;
		while(m>0)
		{
			int j = pkp;
		for(int i=0;i<n;i++)
		{
			
			
			if(pkp+1>b)
			{
				cout<<-1<<"\n";
				flag=1;
				break;
			}
			//cout<<" j "<<j<<"\n";
			//cout<<" pos "<<i<<" "<<j%n<<"\n";
			arr[i][j%n]=1;
			m--;
			j++;

			if(m==0)
			{
				break;
			}

		}
		pkp++;
		if(flag)
			break;

		}
	}

	if(flag==0)
		for(int i =0 ; i<n ; i++)
		{for(int j =0 ; j<n ; j++)
		{
			
			//	cout<<arr[i][j]<<" ";

			if(arr[i][j]==1)
			{
				cout<<i+1<<" "<<j+1<<"\n";
			}
		}
		//cout<<"\n";

	}




}

return 0;
}