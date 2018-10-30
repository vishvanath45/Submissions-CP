//PROBLEM CONTEST 754 A
//FINALLY AC, CONTEST MAI NAHI SOCH PAYA PAR AGLE DIN HO GYA :-)
#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	int noofzeros=0;
	int arr[t];

	for(int i=0;i<t;i++)
	{

		cin>>arr[i];
		if(arr[i]==0)
		noofzeros++;

	}

	if(noofzeros==t)
	{
		cout<<"NO\n";
		return 0;
	}
	else if(t==1)
	{
		cout<<"YES\n";
		cout<<"1\n";
		cout<<"1 1\n";

		return 0;
	}


	int begarr[t]={0};
	int endarr[t]={0};
	int begpointer=0;
	int endpointer=0;

	begarr[0]=1;
	int posscan=0;

	int counter=0;

	cout<<"YES\n";

while(posscan<t)
{
	if(arr[posscan]!=0)
	{
      //  cout<<"current poss is "<<posscan<<"\n";
      //  cout<<"poss p scn mai 0 nhi aaya "<<arr[posscan]<<"\n";
		begarr[begpointer]=posscan+1;
		endarr[endpointer]=posscan+1;
		begpointer++;
		endpointer++;
		posscan++;


	}
	else
	{
       // cout<<"current poss is "<<posscan<<"\n";
       // cout<<"poss p scn mai 0 aaya "<<arr[posscan]<<"\n";
		begarr[begpointer]=posscan+1;
		begpointer++;
		while(posscan<t&&arr[posscan]==0)
		{
			posscan++;
		}
	 	//cout<<"agla poss mila pos p "<<posscan<<"\n";
		if(posscan!=t)
		{
			endarr[endpointer]=posscan+1;
			endpointer++;
		}
		else
		{
			endarr[endpointer]=t;
			endpointer++;
		}
		posscan++;
	}
}

int tbegpointer=begpointer;

//cout<<"fuck wrong \n";


int mom=begarr[begpointer-1];
int dad=endarr[begpointer-1];

//cout<<"mom and dad"<<mom<<" "<<dad<<"\n";

if(arr[mom-1]==0&&arr[dad-1]==0)
{
//cout<<"fuck happens\n";
endarr[begpointer-2]=endarr[begpointer-1];
begpointer--;
}

cout<<begpointer<<"\n";

for(int i=0;i<begpointer;i++)
cout<<begarr[i]<<" "<<endarr[i]<<"\n";





return 0;


}




