// 80 C CSA
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mp make_pair
#define M (ll)(1e9+7)

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

int n;
int x;

cin>>n>>x;

int arr[n];

int sum = 0;

for (int i = 0; i < n; ++i)
{
	cin>>arr[i];
	sum += arr[i];
}

int bottles = ceil((float)sum/x);

sort(arr, arr+n, std::greater<int>());

int shampoo_sum =0 ;

int time = 0; 

for(int i = 0; i <n ; i++)
{


if(shampoo_sum == sum)
{
	break;
	cout<<bottles<<" "<<time;
	return 0;	
}

shampoo_sum += arr[i];

if(shampoo_sum == sum)
{
	break;
	cout<<bottles<<" "<<time;
	return 0;
}
else 
{
	int rem = sum - shampoo_sum ;

	cout<<rem<<"rem \n";
	if(rem < x - arr[i] )
	{
		time += rem;
		shampoo_sum += rem;
	}
	else
	{
		time += x - arr[i];
		shampoo_sum += x - arr[i];
	}
}

// cout<<shampoo_sum<<"<< "<<sum<<" " ;
}
	cout<<bottles<<" "<<time;

return 0;

}