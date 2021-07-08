//315B CF

#include<bits/stdc++.h>

using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif

int m,n;

cin>>m>>n;

int arr[m];

for(int i =0;i<m;i++)
	cin>>arr[i];

int toadd=0;

while(n--)
{

int q,w;
cin>>q>>w;

if(q==1)
{
	int val;
	cin>>val;
	arr[w-1]=val-toadd;
}
else if(q==2)
{
	toadd+=w;
}
else
{
cout<<arr[w-1]+toadd<<"\n";
}
}


return 0;
}
