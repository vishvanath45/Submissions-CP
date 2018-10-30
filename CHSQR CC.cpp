//nov 16 cc i am late in solving this question
//CC CHSQR
#include<bits/stdc++.h>
using namespace std;

int main()
{

int t;
cin>>t;

while(t--)
{
	int size;
	cin>>size;
	int i=size;
	int arr[i];

	int k,k2=(size/2)+1;
	for(i=0;i<size;i++)
		arr[i]=i+1;

	for(i=0;i<size;i++)
		{for(k=0;k<size;k++)
		{
		int pos =(k2+k)%size;
			cout<<arr[pos]<<" ";
		}
		cout<<"\n";
		k2++;


	}



}

return 0;

}
