//MXMEDIAN CC

#include<bits/stdc++.h>

using namespace std;

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

while(t--)
{
	int sze;
	cin>>sze;

	int taxi = 2*sze;

	int arr[taxi];

	for(int i =0;i<2*sze;i++)
	{
		cin>>arr[i];
	}



	sort(arr,arr+taxi);

	int anspos= sze+(sze/2);

	cout<<arr[anspos]<<"\n";

	for(int i =0;i<sze;i++)
		cout<<arr[i]<<" "<<arr[i+sze]<<" ";
		cout<<"\n";


}

return 0;

}