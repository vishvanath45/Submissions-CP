//849 B CF
#include<bits/stdc++.h>
using namespace std;
#define ll long long int  

int main()
{
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
    #endif

int t;
cin>>t;

ll y[t+1];

y[0]=0;

ll x[t+1];

x[0]=0;

for( int i =1 ; i< t+1; i++)
{
	cin>>y[i];
	x[i]=i;
}

double m1 = y[2]-y[1];
double c1 =  y[1]-m1*x[1];
double c2 =  y[3]-m1*x[3];


double m2 = y[3]-y[2];
double c3 =  y[2]-m2*x[2];
double c4 =  y[1]-m2*x[1];


double m3 = (double)(y[3]-y[1])/2;
double c5 =  y[1]-m3*x[1];
double c6 =  y[2]-m3*x[2];


int counter11=0,counter22=0;

for(int i =1 ; i<t+1; i++)
{
	if((double)y[i]-m1*(double)x[i]-(double)c1==0)
		counter11++;
	else if((double)y[i]-m1*(double)x[i]-(double)c2==0)
		counter22++;
	else
	{
				//cout<<i<<"flag\n";

		break;
	}
}
// cout<<counter22<<"**"<<counter11<<"\n";

if(counter22>0&&counter11>0&&(counter11+counter22==t))
{
	cout<<"Yes\n";
	return 0;
}

counter22=0;
counter11=0;

for(int i =1 ; i<t+1; i++)
{
	if((double)y[i]-m2*(double)x[i]-(double)c3==0)
		counter11++;
	else if((double)y[i]-m2*(double)x[i]-(double)c4==0)
		counter22++;
	else
	{
		// cout<<"flag\n";
		break;
	}
}

// cout<<counter22<<"**"<<counter11<<"\n";

if(counter22>0&&counter11>0&&(counter11+counter22==t))
{
	cout<<"Yes\n";
	return 0;
}

counter22=0;
counter11=0;


for(int i =1 ; i<t+1; i++)
{
	// cout<<m3<<"\n";	
	// cout<<c5<<"@@"<<c6<<"\n";

	// cout<<(double)y[i]-(double)m3*(double)x[i]-(double)c6<<"@@@\n";

	if((double)y[i]-(double)m3*(double)x[i]-(double)c5==0)
		counter11++;
	else if((double)y[i]-(double)m3*x[i]-(double)c6==0)
		counter22++;
	else
	{
				// cout<<"flaaag\n";

		break;
	}
}
// cout<<counter22<<"**"<<counter11<<"\n";
if(counter22>0&&counter11>0&&(counter11+counter22==t))
{
	cout<<"Yes\n";
	return 0;
}

counter22=0;
counter11=0;

cout<<"No\n";

return 0;
}

