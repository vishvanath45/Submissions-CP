//842 B CF
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
long long int rp, dp;
cin>>rp>>dp;
int n;
cin>>n;
long long int  x[n],y[n],dia[n];

for(int i = 0;  i < n ; i++)
{
	cin>>x[i]>>y[i]>>dia[i];
}

int counter=0;
for(int i =0 ; i< n; i++)
{
	long long int  dist = x[i]*x[i]+y[i]*y[i];
	 // cout<<dist<<"!!!\n";

	if((dist<=(rp-dia[i])*(rp-dia[i]))&&(dist>=(rp-dp+dia[i])*(rp-dp+dia[i])))
		counter++;
	// if(dist!=0)
	// if(( abs(dist-dia[i]) >= abs(rp-dp)) && (dist+dia[i] <= rp) && dist>=(rp-dp) )
	// 	{	
	// 		counter++;
	// 		 // cout<<i<<"**\n";
	// 	}
}  

cout<<counter<<"\n";

return 0;
}
