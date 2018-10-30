// ICPC16D CC

#include<bits/stdc++.h>

using namespace std;


int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif


int t;
cin>>t;


while(t--)
{

int size;
cin>>size;

vector<int> arr[size];

int maxi =0;
for(int i =0 ;i < size; i++)
{
cin>>arr[i];

if(maxi<arr[i])
{
	maxi = arr[i];
}
}

sort(arr,arr+size);

int count[size]={0};

for(int i =0 ; i< size; i++)
{
	int pkp =arr[i];
	int counter=0;
	for(int j = i+1; j<size; j++)
	{
		if( arr[j]%pkp==0 )
		{
			arr[i].push_back(arr[j]);
			counter++;
		}
	}
	count[i]=counter;

}


for(int j = 0; j< size; j++)
{
}


}