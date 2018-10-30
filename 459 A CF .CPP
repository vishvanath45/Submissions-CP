//459 a cf

#include<bits/stdc++.h>

using namespace std;

int main()
{

int x1,x2,x3,x4,y1,y2,y3,y4,sd;
cin>>x1>>y1>>x2>>y2;


if((x1==x2)&&(y1!=y2))
{
sd=abs(y1-y2);
x3=x1+sd;
x4=x2+sd;

cout<<x3<<" "<<y1<<" "<<x4<<" "<<y2;

}
else if(((x1-x2)==(y1-y2))||((x1-x2)==(y2-y1)))
{

sd=x1-x2;

x3=x1;
y3=y2;
x4=x2;
y4=y1;
cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4;


}
else if((y1==y2)&&(x1!=x2))
{
sd=abs(x1-x2);
y3=y1+sd;
y4=y2+sd;
cout<<x1<<" "<<y3<<" "<<x2<<" "<<y4;

}
else
	cout<<"-1";

return 0;


}
