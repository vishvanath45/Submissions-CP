//433 B CF
#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*

ll int fsum(ll int l, ll int r, ll int arr[100000], ll int size)
{
l-=1;
r-=1;


ll int sum=0;
while(l<=r)
{

sum+=arr[l];
l++;

}

return sum;

}

*/
int main()
{
	ll int t;
	cin>>t;

	ll int arr[t];
	ll int arr2[t];
	ll int i=0;
	while(i<t)
	{cin>>arr[i];
    arr2[i]=arr[i];
	i++;
	}

	sort(arr2,arr2+t);
	ll int type,l,r,q;

	i=1;
	while(i<t)
	{
		arr[i]+=arr[i-1];
		arr2[i]+=arr2[i-1];
		i++;
	}
	i=0;



	cin>>q;
	while(q--)
	{
		cin>>type>>l>>r;
		if(type==1)
		{
			cout<<arr[r-1]-((l!=1)?arr[l-2]:0)<<"\n";
		}
		else
		{
			cout<<arr2[r-1]-((l!=1)?arr2[l-2]:0)<<"\n";
		}
	}



	/*ll int po=0;
	ll int q,qno,l,r;
	cin>>q;
	while(q--)
	{
	cin>>qno;
	if(qno==1)
	{cin>>l>>r;

		po=fsum(l,r,arr,t);
		cout<<po<<"\n";
	}
	else if(qno==2)
	{
		cin>>l>>r;
		po=fsum(l,r,arr2,t);
		cout<<po<<"\n";
	}





	}6587
	*/

return 0;


}
