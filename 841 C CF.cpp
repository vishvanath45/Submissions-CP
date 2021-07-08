// 841 C CF

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

long long int  t;

cin>>t;

long long int  arr1[t];
long long int  arr2[t];
long long int  arr3[t];

for(long long int  i =0 ; i<t ; i++)
	cin>>arr1[i];


vector< pair<long long int , long long int > >a ;
long long int  k;
for (long long int  i = 0 ;i < t ; i++) {
    // filling the original array
    cin >> k;
    a.push_back(make_pair (k,i)); // k = value, i = original index
}

sort(arr1, arr1+t, greater<long long int >());


sort (a.begin(),a.end());


for(long long int  i =0;i<t; i++)
{

arr3[a[i].second]=arr1[i];


}

for(long long int  i =0 ; i< t ; i++)
cout<<arr3[i]<<" ";




return 0;

}



