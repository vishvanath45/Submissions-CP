//evaluating postfix operation using stack
//problem is in type conversion it is taking ascii conversion

#include<stdio.h>
#include<algorithm>
using namespace std;
#include<iostream>
#include<stack>
#include<ctype.h>

bool isoperator(char ch)
{
	if(ch=='+'||ch=='-'||ch=='*'||ch=='/')
		return true;
	else
		return false;
}

int main()
{
    stack<int> s;
	string str;
	int k;

cin>>str;

char ch,ch2;


int l=str.size();
int i=0;

while(i<l)
{
	ch=str[i];


if(isoperator(ch)==false)
{
	int x=ch-'0';


	s.push(x);

	i+=1;

}
else if(isoperator(ch)==true)
{
	int x=s.top();
	s.pop();
	int y=s.top();
	s.pop();
	int m;

if(ch=='+')
{
    m=x+y;
	s.push(m);
}
else if(ch=='-')
{m=y-x;
	s.push(m);
}
else if(ch=='*')
{m=x*y;
	s.push(m);
}
else if(ch=='/')
{m=y/x;
	s.push(m);
}

i+=1;

}

}


int t=s.top();
s.pop();

cout<<t;

return 0;



}
