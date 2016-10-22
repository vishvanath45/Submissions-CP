//ex SEPT16 cc
#include<stdio.h>
#include<algorithm>
using namespace std;
#include<iostream>

int main()
{

int ttt;
cin>>ttt;
while(ttt--)
{
int player;
cin>>player;
int temp5=player;
int marks[player];
int sze,temp;



for(int i2=0;i2<player;i2++)
{
int arr[6]={0};

cin>>sze;

int temp2=sze,temp3=sze,temp4=sze;
int mrks=0;

while(temp3--)
{
cin>>temp2;

switch(temp2)
{
	case 1: arr[0]++;
	break;
	case 2:	arr[1]++;
	break;
	case 3: arr[2]++;
	break;
	case 4:	arr[3]++;
	break;
	case 5:	arr[4]++;
	break;
	case 6:	arr[5]++;
	break;
}


}

sort(arr,arr+6);

int i=6;
int k=0;
while(temp4!=0)
{
marks[i2]+=arr[k]*i;

temp4-=arr[k]*i;
k++;
i--;


}

}
int kk=-1;
int kkpos;
int i3;

for(i3=0;i3<player;i3++)
{
	if(marks[i3]>kk)
	{
		kkpos=i3;
	}
}

sort(marks,marks+player);

if(marks[player-1]==marks[player-2])
{
	cout<<"tie"<<"\n";
}
else if (kkpos==0)
{
	cout<<"chef"<<"\n";
}
else
{
	cout<<kkpos+1<<"\n";
}
}
return 0;

}