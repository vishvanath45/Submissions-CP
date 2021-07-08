// GRAPH01 REC CC
#include<bits/stdc++.h>

using namespace std;
#define pb push_back

int main()
{

int v,e;

cin>>v>>e;

int arr[v][v]={0};


for(int i=0;i<e;i++)
{
int l,r;
cin>>l>>r;
arr[l-1][r-1]=1;
arr[r-1][l-1]=1;
}


int q;
cin>>q;
while(q--)
{
int l,r;

cin>>l>>r;
if(arr[l-1][r-1]||arr[r-1][l-1])
cout<<"YES\n";
else
cout<<"NO\n";

}


return 0;
}
