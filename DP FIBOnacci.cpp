// DP FIBOnacci


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
dp[n]=fib(n-1)+fib(n-2);
return dp[n];

}
}


int main()
{

memset(dp ,-1 ,sizeof(dp));

dp[0]=dp[1]=1;
int n;
cin>>n;

int kk = fib(n);

cout<<kk;
return 0;


}
