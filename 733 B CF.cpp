//733 B CF


#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main()
{

ll int t;
cin>>t;

ll int arr[t];
ll int l,r;
ll int i=-1;

ll int negsum=0;
ll int possum=0;


while(++i<t)
{
	cin>>l>>r;
		arr[i]=l-r;
		if(arr[i]>0)
		{
			possum+=arr[i];
		}
		else
		{
			negsum+=abs(arr[i]);
		}
}

ll int maxvalue=abs(possum-negsum);
ll int value;
ll int ans;

ll int counter=0;
ll int temp,temp2,t3;
i=-1;

while(++i<t)
{
	if(arr[i]>0)
	{

		temp=possum-arr[i];
		temp2=negsum+arr[i];
		t3=abs(abs(temp)-abs(temp2));
		if(t3>maxvalue)
		{
			ans=i;
			counter=1;
			maxvalue=t3;
		}

	}
	else if(arr[i]<0)
	{
		temp=possum+abs(arr[i]);
		temp2=negsum-abs(arr[i]);
		t3=abs(abs(temp)-abs(temp2));
		if(t3>maxvalue)
		{
			ans=i;
			counter=1;
			maxvalue=t3;
		}
	}
}

if(counter==1)
{
	cout<<ans+1;
}
else
cout<<"0";


return 0;

}
	/*int t;

	int arr[t][3];

	int =-1;

	int maxnegdiff=1;
	int maxnegdiffpos,maxposdiffpos;
	int maxposdiff=-1;
	int negdiff=0;
	int posdiff=0;

	while(++i<t)
	{
	cin>>arr[t][0]>>arr[t][1];
		arr[t][2]=arr[t][0]-arr[t][1];

		if(arr[t][2]>0)
		{
			posdiff++;
			if(arr[t][2]>maxposdiff)
			{
				maxposdiff=arr[t][2];
				maxposdiffpos=t;
			}
		}
		else if(arr[t][2]<0)
		{
			negdiff++;
			if(arr[t][2]<maxnegdiff)
			{
				maxnegdiff=arr[t][2];
				maxnegdiffpos=t;
			}

		}


	}

	if(negdiff==0||posdiff==0)
	{
		cout<<0;
	}
	else if(negdiff>posdiff)
	{
		cout<<maxposdiffpos+1;
	}
	else if(posdiff>negdiff)
	{
		cout<<maxnegdiffpos+1;
	}
	else if(posdiff==negdiff)
	{

	}
}
*/
