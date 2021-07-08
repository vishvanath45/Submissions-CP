//acm q3 vishva
//wrong answer

#include<stdio.h>
#include<algorithm>
using namespace std;
#include<iostream>

#include<math.h>

int main()
{
long long int arr[100001];
int t,n;
cin>>t;
int i;

int ch;

int zerocount,onecount,negonecount;

while(t--)
{
    zerocount=0;
    onecount=0;
    negonecount=0;

cin>>n;
int arr[n];
i=0;
while(i<n)
{
	cin>>ch;
	arr[i]=ch;
if(ch==1)
{
	onecount++;
}
else if(ch==0)
{
	zerocount++;
}
else if(ch==-1)
{
negonecount++;
}
i++;
}
if(n==1)
   {

   cout<<"no\n";
   }
else if(n==2)
{
    int k=arr[0]*arr[1];
	if((k==arr[1])||(k==arr[0]))
	{
		cout<<"yes\n";
	}
	else
       {
           cout<<"no\n";
       }
}
else if(n==3)
{
	if(onecount==3||zerocount==3)
	{
		cout<<"yes\n";
	}
	else if((onecount==2&&zerocount==1)||(onecount==1&&zerocount==2))
	{
		cout<<"yes\n";
	}
	else if((onecount==1)&&(zerocount==1))
	{
		cout<<"yes\n";
	}
	else
		cout<<"no\n";
}
else if(n>=4)
{

if((onecount==0)&&(negonecount>1))
{
	cout<<"no\n";
}
else if(onecount+zerocount+negonecount<=(n-1))
{
    if((onecount+zerocount)>=n-1)
    {cout<<"yes\n";
    }
else
	{cout<<"no\n";
    }
}
else if((onecount+zerocount+negonecount)==n)
{
	cout<<"yes\n";
}

}

}

return 0;


}

















