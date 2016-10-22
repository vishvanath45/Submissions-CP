//339 B CF

//to be done

#include<stdio.h>
#include<algorithm>
using namespace std;
#include<iostream>

int main()
{

int n,t;
cin>>n>>t;

int arr[t];

int i=-1;

int time=0;
while(++i<t)
{
	cin>>arr[i];
}

i=-1;
int currhno=1;
int lasthno=1;
while(++i<t)
{

	if(i>0)
		lasthno=arr[i-1];


if(currhno<arr[i])
{
	time+=(arr[i]-currhno);
	currhno=arr[i];
}
else if(currhno==arr[i])
{
	if(lasthno!=currhno)
	{
		time+=n;
	}

}


}
cout<<time;


return 0;




}
