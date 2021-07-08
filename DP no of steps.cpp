// DP no of steps


#include<bits/stdc++.h>
#define pb push_back
using namespace std;



int waysfromspecificstep[100];
int waysfromspecificstep[100];


waysfromspecificstep[n-1]=1;
waysfromspecificstep[n]=1;


int dp(int s)
{
if(s==n)
return 1;
else if(waysfromspecificstep[s]!=-1)
return waysfromspecificstep[s];
else
{
waysfromspecificstep[s] = dp(s-1)+dp(s-2);
return waysfromspecificstep[s];
}



}
