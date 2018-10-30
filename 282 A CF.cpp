//282 A CF
#include<stdio.h>
#include<algorithm>
using namespace std;
#include<iostream>
#include<string>

int main()
{
int t;
cin>>t;
int x=0;
string s;

while(t--)
{
cin>>s;

if(s.find_first_of("++")!=string::npos)
{


x++;

}
else
{


	x--;
}
}

cout<<x;
return 0;

}