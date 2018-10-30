// 839 B CF

#include<bits/stdc++.h>

using namespace std;


int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif


 int row, grp;

cin>>row>>grp;

int grpsze[grp];

for(int i =0 ; i< grp ; i++)
cin>>grpsze[i];


int completerows = 0;

int arr[8]={0};

for(int i =0 ; i< grp ; i++)
{
	arr[grpsze[i]%8]++;

	completerows+=grpsze[i]/8;
}

int remrow = row - completerows;

// 7 wali row hat gyi h
remrow-=arr[7];
arr[7]=0;

//6 wali row ko 2 or 1 se set kiya
if(remrow>0)
{
remrow-=arr[6];

if(arr[2]=>arr[6])
arr[2]-=arr[6];
else
{
	if(arr[1]>=(arr[6]-arr[2]))
		{
			arr[1]-=(arr[6]-arr[2]);
			arr[2]=0;
		}
		else
		{
			arr[1]=0;
			arr[2]=0;
		}
}
arr[6]=0;
}


// 5 wali row ko 2 or 1 se set kiya
if(remrow > 0)
{

remrow-=arr[5];

if(arr[2]=>arr[5])
arr[2]-=arr[5];
else
{
	if(arr[1]>=(arr[5]-arr[2]))
		{
			arr[1]-=(arr[5]-arr[2]);
			arr[2]=0;
		}
		else
		{
			arr[1]=0;
			arr[2]=0;
		}
}

arr[5]=0;
}


// 4 wali row ko 3, 2, 1 se set kiya
if(remrow > 0)
{

remrow-=arr[4];

if(arr[3]=>arr[4])
arr[3]-=arr[4];
else
{
	if(arr[2]>=(arr[4]-arr[3]))
		{
			arr[2]-=(arr[4]-arr[3]);
			arr[3]=0;
		}
		else
		{
			if(arr[1]>=(arr[4]-arr[3]-arr[2]))
			{
				arr[1]-=(arr[4]-arr[3]-arr[2]);
				arr[2]=0;
				arr[3]=0;
			}
			else
			{
			arr[1]=0;
			arr[2]=0;
			arr[3]=0;
			}
		}
}
arr[4]=0;

}


// 3 wali row ko


if(remrow > 0)
{

}







}









