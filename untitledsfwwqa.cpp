#include<bits/stdc++.h>
using namespace std;


int main()
{
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    	scanf("%d",&a[i]);
    for(int i=0;i<n;i++)
    {
    	cout<<a[i]*a[i]<<" ";
    }

return 0;
}