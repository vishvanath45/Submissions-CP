//266 B CF
#include<stdio.h>
#include<algorithm>
using namespace std;
#include<iostream>

int main()
{
int l,sec;

cin>>l>>sec;

string s;
cin>>s;

int i;

char ch,ch2,temp;

while(sec--)
{

for(i=0;i<(l-1);)
{
ch=s[i];
ch2=s[i+1];

if((ch=='B')&&(ch2=='G'))
{
s[i]=ch2;
s[i+1]=ch;
i+=2;
}
else
{
    i++;
}
}

}

cout<<s;

return 0;


}
