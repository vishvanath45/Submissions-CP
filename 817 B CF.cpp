//817 B CF

#include<bits/stdc++.h>
using namespace std;
#define ll long long int

long long int  combi(ll n,ll k)
{
    long long int  ans=1;
    k=k>n-k?n-k:k;
    ll j=1;
    for(;j<=k;j++,n--)
    {
        if(n%j==0)
        {
            ans*=n/j;
        }else
        if(ans%j==0)
        {
            ans=ans/j*n;
        }else
        {
            ans=(ans*n)/j;
        }
    }
    return ans;
}

int main()
{
#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif

int n;
cin>>n;

int arr[n];

for(int i =0;i<n;i++)
	cin>>arr[i];


sort(arr,arr+n);


int freq = arr[2];

int counter=0;



for(int i =0;i<n;i++)
{
	if(arr[i]==freq)
		counter++;
}


if(freq!=arr[0]&&freq!=arr[1])
cout<<counter;
else if(freq == arr[0])
{
	ll ans = combi(counter,3);
	cout<<ans;
}
else if(freq== arr[1])
{
	{
	ll ans = combi(counter,2);
	cout<<ans;
}
}

return 0;

}