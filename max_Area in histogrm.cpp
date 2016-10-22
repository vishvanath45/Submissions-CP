#include<stdio.h>
#include<algorithm>
using namespace std;
#include<iostream>
#include<vector>

long arr[10000001];

vector<int> v;

//used structure because i was unable to return 2 values from function
struct pkp
{
	int minval;
	int minvaladd;

};

//following function will return structure containing min value and its address in given range
struct pkp min(int l, int r)
{
struct pkp pk;

int min1=arr[l];
while(l<=r)
{
if(arr[l]<=min1)
	{
		min1=arr[l];
		pk.minvaladd=l;
		pk.minval=min1;


}
l++;

}

return pk;
}

// this function will calculate min area (min element in range * length of range) and put in vector
void minarea(int l,int r)
{
int min_no;
int min_no_position;
int area;

struct pkp pk;

if(r-l>0)
{

pk=min(l,r);

min_no=pk.minval;
min_no_position=pk.minvaladd;

area=min_no*(r-l+1);

v.push_back(area);

minarea(l,min_no_position-1);
minarea(min_no_position+1,r);



}
else
{

	v.push_back(arr[l]);
}

}


// now my job is to just find max area in vector
int main()
{

int t;
cin>>t;
if(t!=0)
{int i=0;
while(i<t)
{
	cin>>arr[i];
	i++;

}

minarea(0,t-1);

int max2=0;
int rand2;

while(v.empty()==0)
{
rand2=v.back();
v.pop_back();
if(max2<=rand2)
{
	max2=rand2;

}
}


cout<<max2<<"\n";
}
else
{
    return 0;
}

return 0;

}
