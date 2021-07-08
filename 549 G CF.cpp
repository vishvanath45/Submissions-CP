// 549 G CF

#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long int

int main()
{

int t;
cin>>t;

int arr[t];

for(int i = 0 ; i<t;i++)
{
int y;
cin>>y;
y=y+i;
arr[i]=y;
}

sort(arr,arr+t);


for(int i=0;i<t;i++)
{
arr[i]-=i;
}

int check =1;

for(int i=0;i<t-1;i++)
{
if(arr[i]>arr[i+1])
{check=0;
break;
}

}


if(check==0)
cout<<":( \n";
else
{
for(int i=0;i<t;i++)
{
cout<<arr[i]<<" ";
}
}


return 0;





}
