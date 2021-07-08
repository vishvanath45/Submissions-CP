//SANKEEAT CC

#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{

  ios_base::sync_with_stdio(false);
   cin.tie(NULL);
#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif

ll t;
cin>>t;

while(t--)
{
ll arrsze;
ll query;
cin>>arrsze;
cin>>query;

ll arr[arrsze+1]={0};

for(ll i =0;i<arrsze;i++)
	cin>>arr[i];

//sorted in ascending order
sort(arr,arr+arrsze);


// for(int i =0;i<arrsze+1;i++)
// 	cout<<arr[i]<<"*";

while(query--)
{
ll ans =0 ;
ll inputquery=0;
cin>>inputquery;

int auxarr[arrsze+1]={0};

for(int i = arrsze-1;i>=0;i--)
{
if(arr[i]<inputquery)
{
	auxarr[i]=auxarr[i+1]+inputquery-arr[i];
	if(auxarr[i]<=i)
	{
		ans++;
	}
	else
	{
		break;
	}
}
else
ans++;
}
cout<<ans<<"\n";
}
}
return 0;
}
