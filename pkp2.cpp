#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mp make_pair
#define M (ll)(1e9+7)
 struct abc
 {
  ll x;
  ll y;
 };
 bool func( abc a ,abc b)
 {
  if(a.x<b.x)
    return true;
  else
    return false;
 }
 bool func1( abc a ,abc b)
 {
  if(a.x<=b.x)
    return true;
  else
    return false;
 }
  ll flag=1;
 bool func2( abc a ,abc b)
 {
  if(a.x<b.x)
    return true;
  else if(a.x==b.x&&flag==1)
  {
    flag=0;
    if(a.y>b.y)
      return true;
    else
    return false;

  }else
  return false;
 }
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
ll n,m,i,x,j;
cin>>n;
abc a[n],b[n],c[n];
for(i=0;i<n;i++)
  {cin>>x;
    a[i].x=x;
    a[i].y=i+1;
    b[i].x=x;
    b[i].y=i+1;
    c[i].x=x;
    c[i].y=i+1;
}
if(n<=2)
{
  cout<<"NO";
  return 0;
}

sort(a,a+n,func);
sort(b,b+n,func1);
sort(c,c+n,func2);
ll f=0;

for(i=0;i<n;i++)
{
  if(a[i].y!=b[i].y)
  {
    f++;
    break;
  }
}
for(i=0;i<n;i++)
{
  if(c[i].y!=b[i].y)
  {
    f++;
    break;
  }
}
for(i=0;i<n;i++)
{
  if(a[i].y!=c[i].y)
  {
    f++;
    break;
  }
}
if(f>=3){
cout<<"YES\n";

for(i=0;i<n;i++)
{
  cout<<a[i].y<<" ";
}
cout<<"\n";

for(i=0;i<n;i++)
{
  cout<<b[i].y<<" ";
}
cout<<"\n";

for(i=0;i<n;i++)
{
  cout<<c[i].y<<" ";
}
cout<<"\n";
}
else
cout<<"NO";
return 0;

 
}
 