//300 A CF

#include<stdio.h>
#include<algorithm>
using namespace std;
#include<iostream>

int main()
{
	int t;
	cin>>t;
	int parr[t],narr[t],zarr[t];
	int pno=0,nno=0,zno=0;

	int i=-1;

	int rand;

	while(++i<t)
	{
	cin>>rand;
	if(rand>0)
	{
	parr[pno]=rand;
	pno++;
	}
	else if(rand<0)
	{
	narr[nno]=rand;
	nno++;
	}
	else
	{
	zarr[zno]=0;
	zno++;
	}
	}

	if(pno==0)
	{ int x=nno-1;
		parr[pno]=narr[x];
		pno++;
		nno--;
		 int y= nno-1;
		parr[pno]=narr[y];
		pno++;
		nno--;
    if(nno%2==0)
    {
		    x=nno-1;
			zarr[zno]=narr[x];
			zno++;
			nno--;
		}

	}
	else if(pno%2==0)
	{
		if(nno%2==0)
		{
		    int x=nno-1;
			zarr[zno]=narr[x];
			zno++;
			nno--;
		}

	}
	else
	{
		if(nno%2==0)
		{int x=nno-1;
			zarr[zno]=narr[x];
			zno++;
			nno--;
		}
	}

cout<<nno<<" ";
while(nno--)
{
cout<<narr[nno]<<" ";
}
cout<<"\n";
cout<<pno<<" ";
while(pno--)
{
cout<<parr[pno]<<" ";
}
cout<<"\n";

cout<<zno<<" ";
while(zno--)
{
cout<<zarr[zno]<<" ";
}


return 0;


}
