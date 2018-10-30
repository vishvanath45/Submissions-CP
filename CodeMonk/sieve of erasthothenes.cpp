// sieve of erasthothenes

#include<bits/stdc++.h>
using namespace std;




int simple_sieve_implementation()
{
	int n;
cin>>n;


int arr[n+2]={0};


for(int i = 2; i*i < n; i++)
{
	if(arr[i]==0)
	{	
		for(int j = i*i;j<n;j+=i)
		{
			arr[j]=1;
		}

	}
}

for(int i = 2; i<n ;i++)
{
	if(arr[i]==0)
		cout<<i<<"  ";
}

return 0;
}





int main()
{
#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input_codemonk.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output_codemonk.txt", "w", stdout);
#endif




return 0;

}