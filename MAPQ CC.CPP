//MAPQ CC

#include<bits/stdc++.h>
using namespace std;

long long int power(long long int x, unsigned long long int y)
{
    int temp;
    if( y == 0)
        return 1;
    temp = power(x, y/2);
    if (y%2 == 0)
        return temp*temp;
    else
        return x*temp*temp;
}

int main()
{

	long long int t;
    long long int n;

cin>>t;
while(t--)

{


cin>>n;
long long int i,j;
long long int arr[n][n];
long long int horichk=0;
long long int sum=0;

for( i=0;i<n;i++)
	for(j=0;j<n;j++)
		cin>>arr[i][j];


//hori check


	for( i=0;i<n;i++)
	{
		sum=0;
		for(j=0;j<n;j++)
		{
				sum+=arr[i][j];
			}

if(sum==n)
	{
	horichk++;
	}


	}

long long int verchk=0;;

	for( i=0;i<n;i++)
	{
		sum=0;
		for(j=0;j<n;j++)
		{
				sum+=arr[j][i];

			}
if(sum==n)
	{
	verchk++;
	}

	}

long long int diachk=0;
sum=0;

for(i=0,j=0;i<n;)
{
	sum+=arr[i][j];
	i++;
	j++;

}

if(sum==n)
{
	diachk++;
}

sum=0;
for( i=0;i<n;i++)
	{

		for(j=0;j<n;j++)
			{
				if((i+j)==(n-1))
				{
					sum+=arr[i][j];
				}
			}


	}

if(sum==n)
{
	diachk++;
}


long long int ans= (horichk+verchk+diachk)*(power(2,n)-1);
if(ans!=0)
{ans=ans%(1000000007);
    cout<<ans<<"\n";
}
else
cout<<"-1"<<"\n";


}
return 0;


}






