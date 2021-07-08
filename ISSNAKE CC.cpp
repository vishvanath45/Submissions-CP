//ISSNAKE CC

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
	int k;
	cin>>k;

	char arr[k][2]={0};

	for(int j =0;j<2;j++)
	for(int i =0 ;i<k;i++)
	{
		cin>>arr[i][j];
	}

	// 	for(int j =0;j<2;j++)
	// for(int i =0 ;i<k;i++)
	// {
	// 	cout<<arr[i][j];
	// }

	int starting_snake=-5;
	int ending_snake=-5;
	int i ;

	for(i =0 ;i<k;i++)
	{
		if(arr[i][0]=='#'||arr[i][1]=='#')
			{starting_snake=i;
			break;}
	}
	int flag=0;
	if(starting_snake==-5)
		flag =1;

	//cout<<"ss "<<starting_snake<<"\n";

	for(int yy =k-1 ;yy>=0;yy--)
	{
		if(arr[yy][0]=='#'||arr[yy][1]=='#')
			{ending_snake=yy;
			break;}
	}

	//cout<<"se "<<ending_snake<<"\n";


	char top='a';
			char down='b';
			
	int dumbcounter=0;

	for(i = starting_snake;i<ending_snake;i++)
	{

		if(flag==0)
		{


		if(arr[i][0]=='#'&&arr[i][1]=='.')
		{	dumbcounter=0;
			if((arr[i+1][0]=='.'&&arr[i+1][1]=='#'))
			{
				flag=1;
				//cout<<"cs22\n";
				break;
			}
		}
		else if((arr[i][0]=='.'&&arr[i][1]=='#'))
		{	dumbcounter=0;
			if((arr[i+1][0]=='#'&&arr[i+1][1]=='.'))
			{
				flag=1;
				//cout<<"cs23\n";
				break;
			}
		}
		else if(arr[i][0]=='.'&&arr[i][1]=='.')
		{
			flag=1;
			//cout<<"cs24\n";
			break;
		}
		else if(arr[i][0]=='#'&&arr[i][1]=='#')
		{
			
			if(i>starting_snake)
			{

			if(arr[i-1][0]!='#'||arr[i-1][1]!='#')
			{
			top=arr[i-1][0];
			//cout<<"top "<<top<<"\n";

			down=arr[i-1][1];
			//cout<<"down "<<down<<"\n";

			}
			}
			dumbcounter++;

		//	cout<<dumbcounter<<" dc\n";

		//	cout<<(arr[i+1][0]==top)?1:0;


			if((arr[i+1][0]==top)&&(arr[i+1][1]==down)&&((dumbcounter%2)==1))
			{	//cout<<i<<"i i s\n";

				flag=1;
				//cout<<"cs25\n";
				break;
			}
			else if((arr[i+1][0]==down&&arr[i+1][1]==top)&&dumbcounter%2==0)
			{
				flag=1;
				//cout<<"cs26\n";
				break;
			}


		}
	}
	else
	{
		break;
	}

	}

	if(flag==0)
		cout<<"yes\n";
	else
		cout<<"no\n";



}

return 0;
}
