//DWNLD CC

#include<bits/stdc++.h>

#define ll long long int

using namespace std;

int main()
{

int t;

cin>>t;

while(t--)
{


int n,k;

int tdata=0;

cin>>n>>k;

while(n--)
{
	int min2,speed;

	cin>>min2>>speed;

	if(k<=min2)
	{
		tdata+=(min2-k)*speed;
		k=0;
	}
	else if(k>min2)
	{
		k=k-min2;
	}
}

cout<<tdata<<"\n";


}

return 0;

}
