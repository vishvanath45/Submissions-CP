// Kadane algorithm

#include<bits/stdc++.h>

#define ll long long int
using namespace std;

struct xyz
{
	int x;
	char y;
	short z;
} s1;

int main()
{
	cout << alignof(s1) << endl;

#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif
/*
int p = clock();
int n;

cin>>n;

ll arr[n];

for(ll i = 0 ;i<n;i++)
	cin>>arr[i];


// kadane starts

ll max_so_far=0;
ll max_ending_here=0;

for(ll i=0;i<n;i++)
{
	max_ending_here = max_ending_here+arr[i];
	if(max_ending_here<0)
		max_ending_here=0;
	if(max_so_far<max_ending_here)
		max_so_far=max_ending_here;


}
	cout<<max_so_far<<"\n ###@@@#";
float s = (float)(clock()-p)/CLOCKS_PER_SEC;

cout<<"wdwad "<<s<<"\n";
*/
return 0;

}
