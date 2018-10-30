// CF CONTEST 758 A

#include<bits/stdc++.h>

using namespace std;

int main()
{

int t;
cin>>t;

int arr[t];
int sum=0;

for(int i=0;i<t;i++)
{
cin>>arr[i];
sum+=arr[i];
}

int maxele;
maxele=*max_element(arr,arr+t);

int tsum=maxele*t;

cout<<tsum-sum;


	return 0;

}
