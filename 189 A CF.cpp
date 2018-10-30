//189 A CF

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



	int n;
	int arr[3];
	cin >> n >> arr[0] >> arr[1] >> arr[2];
	sort(arr,arr+3);
	int amx=n/arr[0];
	int bmx=n/arr[1];
	int cmx=n/arr[2];
	int ans=0;
	for (int i=0;i<=amx;i++)
		for (int j=0;j<=(n-i*arr[0])/arr[1];j++)
			if ((n-i*arr[0]-j*arr[1])%arr[2]==0)
				{
					if(i+j+(n-i*arr[0]-j*arr[1])/arr[2]>ans)
						ans=i+j+(n-i*arr[0]-j*arr[1])/arr[2];
				}
	cout << ans ;
	return 0;
}