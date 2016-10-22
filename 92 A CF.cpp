//92 A CF
#include<stdio.h>
#include<algorithm>
using namespace std;
#include<iostream>

int main()
{
	int ppl;
	int candy;
	cin>>ppl;
	cin>>candy;
	
	int sum=(ppl*(ppl+1))/2;

	candy=candy%sum;

	int i=0;

	while(i++<ppl)
	{
		if(candy>=i)
		{
			candy-=i;
		}
		else
		{
			cout<<candy;
			break;
		}
	}

return 0;

}