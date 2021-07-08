//RGAME CC
/*INPUT
1
3
1 2 3 4
*/

#include<bits/stdc++.h>
#include<algorithm>



using namespace std;

int main()
{
int t;
cin>>t;

while(t--)
{
int n;
cin>>n;
int arr[n];
int pow2[n];

pow2[0]=1;
int begno;
cin>>begno;
for(int i=0;i<n;i++)
{
	cin>>arr[i];
	pow2[i]=pow(2,i);
}

int sum=0;
int tsum=0;
int localsum=0;
for(int i=1;i<n;i++)
{
int local=arr[i];
int t=i;

localsum=0;

for(i=0;i<t;i++)
{
int t2sum =local*arr[i];

t2sum=t2sum*pow2[i];
localsum+=t2sum;
localsum+=local;

}
cout<<"local sum is"<<localsum<<"\n";

sum+=localsum;
/*
	int local= arr[i]*arr[i-1];
	local=local*pow2[i-1];
	cout<<"pow used"<<pow2[i-1]<<"\n";
	cout<<"local came out "<<local<<"\n";
	sum+=local;
*/
}


/*int localsum2=0;
for(int i=0;i<n;i++)
{
localsum2+=begno*arr[i];
}

sum+=localsum2;
*/
sum*=2;

cout<<sum<<"\n";


}
return 0;

}
