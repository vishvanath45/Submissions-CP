//817 A CF

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


int a1,a2,b1,b2,d1,d2;

cin>>a1>>a2>>b1>>b2>>d1>>d2;



if((((float)(b1-a1)/d1)==(ceil((float)(b1-a1)/d1))&&((float)(b2-a2)/d2)==(ceil((float)(b2-a2)/d2))))
		{		if((((b1-a1)/d1)+((b2-a2)/d2))%2==0)
			cout<<"YES\n";
			else
				cout<<"NO\n";
		}
	else
		cout<<"NO\n";


	return 0;

}