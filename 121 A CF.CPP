//121 A
#include<bits/stdc++.h>

using namespace std;


int nextmagic(int n)
{
	int n2=n;

	int pkp;

	while(n)
	{
        int x=n%10;

		if((x==4)||(x==7))
		{
				n=n/10;
		}
		else
		{
		    pkp=nextmagic(n2+1);
            return pkp;
		}
	}



return n2;
}

int main()
{
	int r,l;


	cin>>l>>r;
	int sum=0;
	while(l<=r)
	{
sum+=nextmagic(l);
l++;
	}


	cout<<sum;;

	return 0;

}
