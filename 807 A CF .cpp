#include<bits/stdc++.h>

using namespace std;

int main()
{
int t;
cin>>t;

int arr1[t]={0};
int arr2[t]={0};

int counter=0;

for(int i=0;i<t;i++)
{
cin>>arr1[i];
cin>>arr2[i];

if(arr1[i]!=arr2[i])
counter=1;

}


if(counter==1)
cout<<"rated\n";
else
{
int pop=0;

for(int x=0;x<t-1;x++)
{
if(arr1[x]>=arr1[x+1])
{
pop=1;
}
else
{
pop=0;
break;
}
}

if(pop==1)
cout<<"maybe\n";
else
cout<<"unrated\n";


}

return 0;
}
