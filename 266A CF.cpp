//266A CF
#include<stdio.h>
#include<algorithm>
using namespace std;
#include<iostream>

int main()
{
int l;
cin>>l;
string s;
cin>>s;


int ch=s[0];
int ch2;
int i=-1;
int ans=0;
while(i++<(l-1))
{
char ch=s[i];
if(ch==s[i+1])
{
ans++;
}


}


cout<<ans;


return 0;
}











