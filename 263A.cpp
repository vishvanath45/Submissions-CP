//263 A CF
#include<stdio.h>
#include<algorithm>
using namespace std;
#include<iostream>
int main()
{


int arr[25],pos,i;
for(i=0;i<25;i++)
{cin>>arr[i];
if(arr[i]==1)
pos=i;
}

int r=(pos/5);
int c=(pos%5);

int ans=(abs(2-r)+abs(2-c));

cout<<ans<<"\n";



	return 0;

}
