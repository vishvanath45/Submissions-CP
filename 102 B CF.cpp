/*= compile: g++ -std=c++11 -Wall $src -o $exe =*/
/*= run: $exe < 102\ B\ CF.txt =*/
//102 B CF

#include<stdio.h>
#include<algorithm>
using namespace std;
#include<iostream>
#include<string.h>
#include<streambuf>
#include<sstream>

int main()
{
string s;
string s2;
cin>>s;
int p=0;
int times=0;
int i;

int l =s.length();

while(l!=1)
{
	times++;

for(i=0;i<l;i++)
{
	p+=(s[i]-'0');
cout<<p<<"\n";
}


cout<<"      "<<p<<"\n";
//s<<p;
cout<<s<<"\n";
l =s.length();
}


cout<<times;

return 0;


}





















/*
int main()
{
	string s;
	cin>>s;
int l=s.size();
int l2=l;
int t;
while(l--)
{
	t+=s[l]-'0';
}

int sum=0;
int times=1;
ping:
while(t)
{
	sum+=t%10;
	t/=10;

}
cout<<sum<<"\n";
if(sum>9)
{
	times++;
	t=sum;
	sum=0;
	goto ping;
}
if(l2!=1)
cout<<times;
else
cout<<'0';

return 0;

}
*/
