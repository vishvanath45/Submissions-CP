//KBIGNUMB

#include<bits/stdc++.h>

#define ll long long int

using namespace std;

int main()
{
	int t;

    int digits;
	cin>>t;
	while(t--)
	{
		ll a,n,m;
		cin>>a>>n>>m;

		ll arr[100001]={0};
        ll b =a;
		ll remainder;
		ll n2=0;
		ll digits;


   	if ( a < 10 )
      digits = 1;
   	else if ( a < 100 )
      digits = 2;
    else if  ( a < 1000 )
      digits = 3;
    else if  ( a < 10000 )
      digits = 4;

		int pkp=0;

    while(1)
    {
    remainder=a%m;

    arr[pkp]=remainder;
    pkp++;

    a=(remainder*(pow(10,digits)));
    a=a+b;


    if(remainder==0)
    break;

    if(pkp>a+1)
    break;

    }

    //for(int count =0;count<pkp;count++)
   // cout<<arr[count]<<"* ";



    n=n%(pkp);

    cout<<arr[n-1]<<"\n";




	}

	return 0;


}
