//208 A CF

#include<stdio.h>
#include<algorithm>
using namespace std;
#include<iostream>

#include<string>
int main()
{

int i;

string t ;
cin>>t;

int l=t.size();
string s = "WUB";
string s2=" ";

int found;
found=t.find("WUB");


while(found!=std::string::npos)
{t.replace(t.find(s),s.length(),s2);
found=t.find("WUB");
}
cout<<t;


return 0;


}
