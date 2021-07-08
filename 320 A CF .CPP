//320 A CF

#include<stdio.h>
#include<algorithm>
using namespace std;
#include<iostream>
#include<string>


int main()
{

/* working but resluting in repetitions
for ex 111444
in this it willremove 14 in middle

nad then it will become 1144 and again remove
14 and will become 14 and again remove 14 and become
 string length 0 and will satisfy my answer, so i am applying another approch


int i;

string t;
cin>>t;

int l;

string s2="1";
string s3="14";
string s4="144";

l=t.size();
while(l--)
{
 i = t.find(s4);


if (i != std::string::npos)
   t.erase(i, s4.length());
}

l=t.size();

while(l--)
{
 i = t.find(s3);


if (i != std::string::npos)
   t.erase(i, s3.length());
}

l=t.size();

while(l--)
{
 i = t.find(s2);


if (i != std::string::npos)
   t.erase(i, s2.length());
}

l=t.size();


if(l)
{
	cout<<"NO";
}
else
cout<<"YES";


return 0;

*/

string s;
cin>>s;
int l=s.size();

char ch,ch2,ch3;

int i=l-1;
int counter=0;


while(i>=0)
{

ch=s[i];

if(i>0)
{ch2=s[i-1];
}
if(i>1)
{ch3=s[i-2];

}

if((i>1)&&(ch=='4')&&(ch2=='4')&&(ch3=='1'))
		{i=i-3;

	goto ping;
	}



if(i>0&&ch=='4'&&ch2=='1')
		{i=i-2;
	goto ping;
}


if(ch=='1')
{
	i=i-1;
	goto ping;
}




counter=1;
	i=-2;



ping:
    int x;

}

if(counter==1)
cout<<"NO";
else
cout<<"YES";


return 0;
}




  






