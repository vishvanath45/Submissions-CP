// Kadane algorithm

#include<bits/stdc++.h>

#define ll long long int
using namespace std;

int main()
{

/*#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif

*/

int n;


while(cin>>n)
{
if(n==0)
return 0;



ll arr[n];

for(ll i = 0 ;i<n;i++)
	cin>>arr[i];


// kadane starts

ll max_so_far=INT_MIN;
ll max_ending_here=INT_MIN;

int poschecker=0;

for(ll i=0;i<n;i++)
{
if(arr[i]>=0)
{poschecker=1;
}


	max_ending_here = max_ending_here+arr[i];
	if(max_ending_here<0)
		max_ending_here=0;
	if(max_so_far<max_ending_here)
		max_so_far=max_ending_here;


}
    if(poschecker==1)
	printf("The maximum winning streak is %d.\n", max_so_far);
	else
	cout<<"Losing streak."<<"\n";

	}
return 0;

}
