//116 A CF
#include<stdio.h>
#include<algorithm>
using namespace std;
#include<iostream>

int main()
{
	
int t;
cin>>t;

int exitman;
int entryman;

int maxcap=0;
int currcap=0;
while(t--)
{
cin>>exitman;
cin>>entryman;
currcap+=(entryman-exitman);
if(maxcap<=currcap)
{
	maxcap=currcap;
}



}



cout<<maxcap;

return 0;

}