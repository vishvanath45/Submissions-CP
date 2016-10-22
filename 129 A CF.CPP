//129 A CF
#include<stdio.h>
#include<algorithm>
using namespace std;
#include<iostream>


int main()
{
	/* code */
	int t;
	int t2;
	int eno=0,ono=0;
int t2=t;

while(t--)
{
	cin>>t2;

if(t2%2==0)
	eno++;
ono++;

}
if(ono%2!=0)
{
    if(ono!=t2)
	cout<<ono;
	else
        cout<<0;
}
else
{
	cout<<eno;
}







	return 0;
}
