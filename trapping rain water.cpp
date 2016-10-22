//trapping rain water
#include<stdio.h>
#include<algorithm>
using namespace std;
#include<iostram>

int arr[1000001];
int twater=0;
int lwater=0;

int leftwatertrap(int l,int r);
int rightwatertrap(int l, int r);

struct pkp
{
	int maxlength;
	int maxlengthpos;

};


struct pkp max(int l, int r)
{
struct pkp pk;

int t1=arr[l];
int t2;
while(l<=r)
{
t2=arr[l];
if(t2>=t1)
{
	t2=t1;
	pkp.maxlengthpos=l;
	pkp.maxlength=t2;

}

l++;

}
return pk;

}

int main()
{
int t;
cin>>t;

int i=0;
while(i<t)
{
	cin>>arr[i];
	i++;
}

int c;
c=rightwatertrap(0,t-1);









}


int leftwatertrap(int l,int r)
{
int maxh1=0;
int maxh2=0;
int i=0;
int twater=0;
int pwater=0;
max1=arr[i];
int l=i;
while(i<=r)
{

if(max1<=arr[i])
{
twater=(i-l-1)*max1;
pwater+=twater;
l=i;
max1=arr[i];

}





return pwater;
}
int rightwatertrap(int l, int r);

