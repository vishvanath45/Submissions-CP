//merge sort

#include<bits/stdc++.h>
using namespace std;


int merge (int arr[], int l , int mid, int gh, int r)
{
	int pkp =0;
	int sarr[1000];
	int i = l ;
	int j = gh ;

	while(i<=mid&&j<=r)
	{
		if(arr[i]<arr[j])
		{
			sarr[pkp++]=arr[i];
			i++;
		}
		else
		{
			sarr[pkp++]=arr[j];
			j++;
		}
	}

	while(i<=mid)
	{
		sarr[pkp++]=arr[i++];
	}

	while(j<=r)
	{
		sarr[pkp++]=arr[j++];
	}

	//cout<<" curr l and r are "<<l<<" "<<r<<"  ***"<<pkp<<"\n";
	for(int i = 0; i<pkp;i++)
	{
	//	cout<<sarr[i]<<" ";
		arr[l+i]=sarr[i];
	}
	//cout<<"\n\n";

}


int mergesort( int arr[], int l, int r)
{
	
	if(l<r)
	{
	int mid = l + (r-l)/2;

	mergesort(arr,l ,mid);
	mergesort(arr,mid+1,r);

	merge(arr,l,mid, mid+1, r);
	}
	

}


int main()
{
#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input_codemonk.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output_codemonk.txt", "w", stdout);
#endif


    int n;
    cin>>n;

    int arr[n];


for(int i =0 ;i< n ; i++)
   	cin>>arr[i];

   mergesort(arr, 0,n-1);


for(int i =0; i<n;i++)
	cout<<arr[i]<<" ";



   return 0;
}