// 689 B CF

#include<bits/stdc++.h>

using namespace std;
#define ll long long int

int main()
{

#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif


// int t;
// cin>>t;

// int arr[t+10]={0};

// int dataarr[t+10]={0};

// for(int i =1; i< t+1; i++)
// 	{
// 		cin>>arr[i];
// 		dataarr[i]=i;
// 	}

// int ansarr[t+10]={0};

// int currmax = arr[1];


// for(int i =1 ; i<arr[1]; i++)
// {
// 	ansarr[i]=i-1;
// }

// if(arr[1]==1)
// ansarr[currmax]=0;
// else
// ansarr[currmax]=1;

// cout<<" currmax "<<currmax<<"\n";

// int currmax2=currmax;
// int currmax2pos=currmax;

// for(int i =currmax+1; i< t+1; i++)
// {
// 	// cout<<" currmax "<<currmax<<"\n";

// 	if(dataarr[i]>currmax&&(dataarr[i]!=arr[i]))
// 	{
// 		ansarr[i]=i-currmax+ansarr[currmax];
// 		if(arr[i]>currmax2)
// 		{
// 			currmax2pos=i;
// 		}

// 	}
// 	if(dataarr[i]==arr[i])
// 	{
// 		cout<<" cu "<<currmax<<"\n";
// 		cout<<" cup "<<currmax2pos<<"\n";
// 		ansarr[i]=ansarr[currmax2pos]+i-currmax2pos;

// 		currmax=arr[i];
// 		currmax2pos=currmax;
// 	}

		
// }

// for(int i =1; i< t+1; i++)
// 	cout<<ansarr[i]<<" ";



int t;


cin>>t;

int arr[t];

for(int i =0 ; i< t; i++)
cin>>arr[i];


vector<int> v;

int currmax=1;

for(int i=1; i<t; i++)
{
	if(arr[i]==arr[i-1])
		currmax++;
	else
	{
		v.push_back(currmax);
		currmax=1;
	}
}
v.push_back(currmax);



int pkp =1;

int kk =0;
if(v[0]==1)
pkp=0;


for(int i =0 ; i < v.size(); i++)
{
	int sze = v[i].size();


	for(int j =0 ; j<sze-1; j++)
	{
		cout<<kk<<" ";

	}
	if(sze==1)
	{
		cout<<pkp<<" ";
		pkp+=1;
		kk=pkp;
	}
	else
	{
		cout<<pkp+2;
		pkp+=2;
		kk=pkp
	}

}


// 	if(sze>0)
// 	{cout<<pp<<" ";
// 	kkk=pp;
// 	pp+=2;
// 	}
// 	else
// 	{
// 		if( pp>0 && sze==0 )
// 		cout<<pp-1<<" ";
// 		else
// 		cout<<pp<<" ";

// 	kkk=pp;
// 	pp+=1;
// }
	
// 	 kkk+=1;
	



}






return 0;
}

