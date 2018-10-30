// merge two sorted arrays

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


int size1;
int size2;

cin>>size1>>size2;

int arr1[size1];
int arr2[size2];

for(int i =0 ;i<size1 ;i++)
cin>>arr1[i];

for(int i =0 ;i<size2 ;i++)
cin>>arr2[i];


int finalarr[size1+size2];

int i =0, j=0,k=0;

while( i<size1 && j<size2 )
{
	if(arr1[i] < arr2[j])
	{
		finalarr[k]=arr1[i];
		k++;
		i++;
	}
	else
	{
		finalarr[k]=arr2[j];
		k++;
		j++;
	}

}

while(i < size1)
{
	finalarr[k]=arr1[i];
	k++;
	i++;

}


while(j < size2 )
{
	finalarr[k]=arr2[j];
	k++;
	j++;
} 


for(int i =0 ;i<size1+size2;i++)
{
	cout<<finalarr[i]<<" ";

}

return 0;
}