// UNICOURS CC

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
	int max =0;
	int pkp;
	int temp = sze;
	while(temp--)
	{
		cin>>pkp;

		if(pkp>max)
			max=pkp;
	}
	cout<<sze-max<<"\n";

}

return 0;

}
