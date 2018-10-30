// 834 A CF

#include<bits/stdc++.h>
using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif

string str;

char a, b;
cin>>a;
cin>>b;

str[0]=a;
str[1]=b;

int times;
cin>>times;


times = times%4;

if(times==0)
{
	cout<<"undefined\n";
	return 0;

}

//cout<<str[0]<<str[1]<<"\n";


if(str[0]=='^')
{
	if(str[1]=='>')
	{
		if(times==1)
			cout<<"cw";
		else
			cout<<"ccw";

		return 0;
	}
	else if(str[1]=='v')
	{
		cout<<"undefined";
		return 0;
	}
	else if(str[1]=='<')
	{
		if(times==1)
			cout<<"ccw";
		else
			cout<<"cw";

		return 0;
	}

}
else if(str[0]=='>')
{
		if(str[1]=='v')
	{
		if(times==1)
			cout<<"cw";
		else
			cout<<"ccw";

		return 0;
	}
	else if(str[1]=='<')
	{
		cout<<"undefined";
		return 0;
	}
	else if(str[1]=='^')
	{
		if(times==1)
			cout<<"ccw";
		else
			cout<<"cw";

		return 0;
	}

}
else if(str[0]=='v')
{
		if(str[1]=='<')
	{
		if(times==1)
			cout<<"cw";
		else
			cout<<"ccw";

		return 0;
	}
	else if(str[1]=='^')
	{
		cout<<"undefined";
		return 0;
	}
	else if(str[1]=='>')
	{
		if(times==1)
			cout<<"ccw";
		else
			cout<<"cw";

		return 0;
	}

}
else if(str[0]=='<')
{
		if(str[1]=='^')
	{
		if(times==1)
			cout<<"cw";
		else
			cout<<"ccw";

		return 0;
	}
	else if(str[1]=='>')
	{
		cout<<"undefined";
		return 0;
	}
	else if(str[1]=='v')
	{
		if(times==1)
			cout<<"ccw";
		else
			cout<<"cw";

		return 0;
	}
}

return 0;

}