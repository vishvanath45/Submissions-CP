//315 A CF

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

int t;
cin>>t;

int arr[t];
for(int i =0;i<t;i++)
cin>>arr[i];

int l,r;
cin>>l>>r;
l--;
/

sort(arr+l,arr+r);


for(int i =0;i<t;i++)
cout<<arr[i]<<" " ;






// int t;
// cin>>t;
// int t2=t;

// int arr1[1001]={0};
// int arr2[1001]={0};
// int arr3[1001]={0};
// int count[1001]={0};

// int a, b,pkp;
 
// int maxa=0;

// for(int i =0;i<t;i++)
// {

// cin>>a>>b;
// arr1[i]=a;
// arr2[i]=b;
// }

// int counter=0;

// for(int  i =0;i<t;i++)
// {
// 	int pkp = arr1[i];
// 	for (int j = 0; j < t; j++)
// 	{
// 		if(j!=i)
// 		{
// 			if(arr1[i]==arr2[j])
// 			{
// 				counter++;
// 				break;

// 			}
// 		}
// 	}
// }

// cout<<t-counter;

return 0;
}