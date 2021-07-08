//285 C CF

#include<bits/stdc++.h>

using namespace std;

int main()
{

long long int  t;

cin>>t;

long long int  arr[t];

for(long long int  i=0;i<t;i++)
cin>>arr[i];


sort(arr,arr+t);

long long int  sum=0;

for(long long int  i=0;i<t;i++)
{

sum+=(abs(i+1-arr[i]));

}

cout<<sum;

return 0;
}
