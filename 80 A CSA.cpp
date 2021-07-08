// 80 A CSA
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mp make_pair
#define M (ll)(1e9+7)

bool compare(const pair<pair<int,int>, pair<int, int > > &a, const pair<pair<int,int>, pair<int,int > > &b)
{
	return (a.first.first < b.first.first);
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


int arr[16];


for(int i =0 ;i<16; i++)
{
	cin>>arr[i];
}

ll count = 4;

for(int i =4 ;i< 16 ; i++)
{
	if(arr[i] + 300 > arr[3] )
	{
		count++;
	}
}


cout<<count;
return 0;
}



