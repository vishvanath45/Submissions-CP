// ROBOTG CC

#include<bits/stdc++.h>

using namespace std;

#define ll long long int

int main()
{



ll t;
cin>>t;

while(t--)
{
	int bh,bl;
	cin>>bh>>bl;

	string s;
	cin>>s;

	int sl = s.size();
	int hmax=0,lmax=0,hcurr=0,lcurr=0,hmin=0,lmin=0;

	for(ll i =0;i<sl;i++)
	{
		//U =+1
		//D =-1
		//R =+1
		//L =-1;


		char ch;

		ch = s[i];

        if(hmax<=hcurr)
			hmax=hcurr;
        else if(hmin>=hcurr)
            hmin=hcurr;

		if(lmax<=lcurr)
			lmax=lcurr;
        else if(lmin>=lcurr)
            lmin=lcurr;


		if(ch=='U')
			hcurr++;
		else if(ch=='D')
			hcurr--;
		else if(ch=='R')
			lcurr++;
		else if(ch=='L')
			lcurr--;


        if(hmax<=hcurr)
			hmax=hcurr;
        else if(hmin>=hcurr)
            hmin=hcurr;

		if(lmax<=lcurr)
			lmax=lcurr;
        else if(lmin>=lcurr)
            lmin=lcurr;



	}
        cout<<hmax<<" hmax "<<lmax<<" lmax\n";

        cout<<hmin<<" hmin "<<lmin<<" lmin\n";

		if(((hmax+abs(hmin))<=bh-1)&&(lmax+abs(lmin)<=bl-1))
			cout<<"safe\n";
		else
			cout<<"unsafe\n";

}
return 0;


}
