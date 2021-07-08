// 978 D CF
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mp make_pair
#define M (ll)(1e9+7)

int t;

int min_diff(int arr[],int a, int b)
{
	int temp_arr[t];

	memcpy (temp_arr, arr, t*sizeof(int));

	temp_arr[0] = a;
	temp_arr[1] = b;
	int d = b-a;

	for(int i = 2; i < t ; i++ )
	{
		temp_arr[i] = a+i*d;
	}

	int min_change = 0;
	int min_change_local = 0;

	for(int i = 0 ; i < t ; i++)
	{
		min_change_local = abs(temp_arr[i] - arr[i]);

		if(min_change_local > 1)
		{
			return 2*t;
		}
		else
		{
			min_change += min_change_local;
		}

	}

return min_change;

}
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

cin>>t;

if(t==1)
{
	cout<<"0";
	return 0;
}

int arr[t];

for (int i = 0; i < t ; i++)
	cin>>arr[i];

int a, b;
a = arr[0];
b = arr[1];

vector<int> min_change;

// C1 a = a, b = b ;

min_change.pb(min_diff(arr,a, b));
min_change.pb(min_diff(arr,a, b+1));
min_change.pb(min_diff(arr,a, b-1));
min_change.pb(min_diff(arr,a+1, b));
min_change.pb(min_diff(arr,a+1, b+1));
min_change.pb(min_diff(arr,a+1, b-1));
min_change.pb(min_diff(arr,a-1, b));
min_change.pb(min_diff(arr,a-1, b+1));
min_change.pb(min_diff(arr,a-1, b-1));

sort(min_change.begin(), min_change.begin() + min_change.size());

// for (int i =0; i< min_change.size(); i++)
// 	cout<<min_change[i]<<" ";


int ans = min_change[0];

if(ans > t)
cout<<"-1";
else
cout<<ans;

return 0;
}