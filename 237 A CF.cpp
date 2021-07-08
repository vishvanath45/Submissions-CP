// 237 A CF

#include<bits/stdc++.h>
#define ll long long int
using namespace std;


int main()
{

int t;
cin>>t;

int hash[10005]={0};

int h,m;

while(t--)
{
cin>>h>>m;
int pkp = h*100+m;
hash[pkp]++;
}

sort(hash,hash+10005,greater<int>());

cout<<hash[0];
return 0;

}
