// ALLIZWEL SPOJ

#include<bits/stdc++.h>
using namespace std;
string s= "ALLIZZWELL";
// s[0] = "A";
// s[1] = 'L';
// s[2] = 'L';
// s[3] = 'I';
// s[4] = 'Z';
// s[5] = 'Z';
// s[6] = 'W';
// s[7] = 'E';
// s[8] = 'L';
// s[9] = 'L';


string strings[10000];
int visited[101][101];

int pattern(int i ,int  j ,int  row,int  col ,int  k )
{
	if(i>row-1||j>col-1||i<0||j<0)
		return 0;
	if(k>9)
		return 0;
	if(visited[i][j]==1)
		return 0;
	if(s[k]!=strings[i][j])
		return 0;

	if(k==9&&strings[i][j]=='L')
		return 1;



	visited[i][j]=1;
	k+=1;
	if(i+1<row)
		if(pattern(i+1,j,row,col,k)==1)
			return 1;
	if(i-1>=0)
		if(pattern(i-1,j,row,col,k)==1)
			return 1;
	if(j-1>=0)
		if(pattern(i,j-1,row,col,k)==1)
			return 1;
	if(j+1<col)
		if(pattern(i,j+1,row,col,k)==1)
			return 1;
	if(i-1>=0&&j+1<col)
		if(pattern(i-1,j+1,row,col,k)==1)
			return 1;
	if(i+1<row&&j+1<col)
		if(pattern(i+1,j+1,row,col,k)==1)
			return 1;
	if(i-1>=0&&j-1>=0)
		if(pattern(i-1,j-1,row,col,k)==1)
			return 1;
	if(i+1<row&&j-1>=0)
		if(pattern(i+1,j-1,row,col,k)==1)
			return 1;

	visited[i][j]=0;
	

	return 0;


}



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

int row,col;
cin>>row>>col;
int flag =0;

for(int i =0 ; i<row ; i++)
	cin>>strings[i];
	
	for(int i =0 ; i <row; i++)
	{	for(int j =0; j<col; j++)
		{


			if(strings[i][j]=='A')
			{

			 for(int pkp =0 ;pkp <row; pkp++)
			 	for(int kpk=0; kpk <col; kpk++)
					visited[pkp][kpk]=0;
				flag = pattern(i,j,row,col,0);
				if(flag==1)
				break;
			}
			if(flag==1)
				break;
		}
		if(flag==1)
			break;
	}

	if(flag==1)
		cout<<"YES\n";
	else
		cout<<"NO\n";







// int row,col;
// cin>>row>>col;

// int string = 'ALLIZZWELL';
// int k = 0;

// for(int i =0; i<row ; i++)
// 	for(int j = 0 ; j<col ; j++)
// 		cin>>arr[i][j];

// vector < pair<int , int> > matrix[row][col];


// for(int i =0 ; i < row ; i ++)
// {
// 	for(int j=0; j<col; j++)
// 	{
// 		if(arr[i][j]!='.')
// 			{
// 				if(i-1>=0)
// 				{	if(arr[i-1][j]!='.')
// 					matrix[i][j].push_back(make_pair(i-1,j));
// 				}
// 				if(i+1<row)
// 				{if(arr[i+1][j]!='.')
// 					matrix[i][j].push_back(make_pair(i+1,j));
// 				}
// 				if(j-1>=0)
// 				{if(arr[i][j-1]!='.')
// 					matrix[i][j].push_back(make_pair(i,j-1));
// 				}
// 				if(j+1<col)
// 				{if(arr[i][j+1]!='.')
// 					matrix[i][j].push_back(make_pair(i,j+1));
// 				}
// 				if(i+1<row&&j+1<col)
// 				{if(arr[i+1][j+1]!='.')
// 					matrix[i][j].push_back(make_pair(i+1,j+1));
// 				}
// 				if(i+1<row&&j-1>=0)
// 				{if(arr[i+1][j-1]!='.')
// 					matrix[i][j].push_back(make_pair(i+1,j-1));
// 				}
// 				if(i-1>=0&&j+1<col)
// 				{if(arr[i-1][j+1]!='.')
// 					matrix[i][j].push_back(make_pair(i-1,j+1));
// 				}
// 				if(i-1>=0&&j-1>=0)
// 				{if(arr[i-1][j-1]!='.')
// 					matrix[i][j].push_back(make_pair(i-1,j-1));
// 				}

// 			}
// 	}
// }









}



	return 0;
}
