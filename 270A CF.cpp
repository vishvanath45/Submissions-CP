//270 A CF

#include<stdio.h>
#include<algorithm>
using namespace std;
#include<iostream>
#include<math.h>
int main()
{

int t;
cin>>t;

float f;

float f2;

while(t--)
{
	cin>>f;
	f2=360/(180-f);

	if(floor(f2)==f2)
	cout<<"YES\n";
	else
	cout<<"NO\n";
}



return 0;

}
