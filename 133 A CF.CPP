//133 A CF
// string::operator[]
/*
#include <iostream>
#include <string>

int main ()
{
  std::string str ("Test string");
  for (int i=0; i<str.length(); ++i)
  {
    std::cout << str[i];
  }
  return 0;
}
*/
#include<iostream>
#include<string.h>

#include<stdio.h>
#include<algorithm>
using namespace std;

#include<cstdio>
int main(void)
{

string s;

cin>>s;

 int l;

 l=s.size();

int ans=0;
while(l--)
{
    char df =s[l];
	if(df=='H'||df=='Q'||df=='9')
		ans=1;

}
if(ans)
cout<<"YES";
else
cout<<"NO";

return 0;
}

