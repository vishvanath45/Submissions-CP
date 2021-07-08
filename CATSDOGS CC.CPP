//CATSDOGS cc JAN17
//AC :-)
#include<bits/stdc++.h>

using namespace std;

int main()
{
	long long int t;
	cin>>t;
	long long int cats,dogs,clegs,dlegs,tlegs;
	while(t--)
	{

	cin>>cats;
	cin>>dogs;
	cin>>tlegs;

    clegs=tlegs-4*dogs;
    long long int mom=4*cats-clegs;

    if(mom>=0&&mom<=8*dogs&&clegs>=0&&tlegs%4==0)
    {
    cout<<"yes\n";
    }
    else
    {
    cout<<"no\n";
    }


}

return 0;
}
