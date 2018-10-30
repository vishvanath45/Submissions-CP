//336 A CF

#include<stdio.h>
#include<algorithm>
using namespace std;
#include<iostream>
#include<math.h>

int main()
{
	int xco,yco,cono=0;
	cin>>xco;
	cin>>yco;

if(xco>0&&yco<0)
	cono=4;
else if(xco<0&&yco>0)
	cono=2;
else if(xco<0&&yco<0)
	cono=3;
else if(xco>0&&yco>0)
	cono=1;

int ans= abs(xco)+abs(yco);

if(cono==1)
{

    cout<<"0"<<" "<<ans<<" "<<ans<<" "<<"0";

}
else if(cono==2)
{

 	cout<<-1*ans<<" "<<"0"<<" "<<"0"<<" "<<ans;
}
else if(cono==3)
{
cout<<-1*ans<<" "<<"0"<<" "<<"0"<<" "<<-1*ans;

}
else
{

	cout<<"0"<<" "<<-1*ans<<" "<<ans<<" "<<"0"<<" ";
}

return 0;
}