// DP COINS
//byteland coins cc

#include<bits/stdc++.h>
#define pb push_back
using namespace std;

int dp[100];

// this is top down approch

int fib(int n )
{

if(dp[n]!=-1)
return dp[n];
else
{

if(n<=n/2+n/3+n/4)
{

dp[n]=fib(n/2)+fib(n/3)+fib(n/4);
return dp[n];

}
else
{
dp[n]=n;
return n;
}
}
}


int main()
{


int t;

cin>>t;


while(t--)
{
memset(dp ,-1 ,sizeof(dp));



dp[0]=0;
int n;
cin>>n;

int kk = fib(n);

cout<<kk<<"\n";

}return 0;


}
