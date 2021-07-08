//735 D

#include<stdio.h>
#include<algorithm>
using namespace std;
#include<iostream>
#include<string.h>
#include<math.h>
#include<vector>
/*
int isp(int n)
{
	int i=2;
	while(i<n)
	{
		if(n%i==0)
			return 1;
		else
			{   if(i%2==0)
                {
                i=i+1;
                }
                else
                {
                i=i+2;
                }
			}
	}

	return 0;

}
*/

int main()
{


long int n;
cin>>n;

if(n==2)
  {cout<<"1";
    exit(0);
    }

if(n%2==0)
    {cout<<"2";
    exit(0);
    }
long int prime=0;

for(long int p=2; p*p<=n; p++)
    {
        if(n%p==0)
           {prime =1;
           break;
           }
    }
if(prime==0)
{cout<<1;
exit(0);
}

prime =0;

n=n-2;
for(long int p=2; p*p<=n; p++)
    {
        if(n%p==0)
           {prime=1;

           break;
           }
    }


if(prime==0)
{
    cout<<2;
}
else
cout<<3;




return 0;
}

/*
int n;
cin>>n;


if(isp(n)==0)
{
cout<<1;
exit(0);
}

int mom=n-2;

while(isp(mom)!=0&&mom>0)
{

if(mom%2==0)
mom=mom-1;
else
mom=mom-2;
}

int remaining=n-mom;

int i=2;

while(remaining%i!=0&&i<=remaining)
{i++;
}

int ans=1+remaining/i;

cout<<ans;

return 0;
}

}


*/
