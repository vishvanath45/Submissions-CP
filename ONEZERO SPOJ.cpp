//ONEZERO SPOJ

#include<bits/stdc++.h>

#include<stack>
using namespace std;

#define ll long long int

int main()
{

int t;
cin>>t;

while(t--)
{

int pkp;
cin>>pkp;
	queue <int> v;

 	int arr[pkp]={0};

	v.push(1);
    int t;
	while(v.size()!=0)
	{
        //cout<<"curr size "<<v.size()<<"\n";
		t=v.front();
        v.pop();

		int remainder=t%pkp;

		if(arr[remainder]!=1)
		{
			arr[remainder]=1;

            t=t*10+1;

			//cout<<"tcheck 1 "<<t<<"\n";

			if(t%pkp!=0)
			v.push(t);
			else
			{
				cout<<t<<"\n";
				break;
			}


			t=t*10;
			//cout<<"tcheck 2 "<<t<<"\n";

			if(t%pkp!=0)
			v.push(t);
			else
			{
				cout<<t<<"\n";
				break;
			}
		}
	}
	}
return 0;

}
