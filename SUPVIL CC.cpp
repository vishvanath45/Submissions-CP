// SUPVIL CC

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{	int counter=0;
		int n;
		cin>>n;
		int hero=0;
		int villan=0;

		
		string s;
		while(n--)
		{
			cin>>s;
			int ll=s.length();

			int pos=ll-1;
			int pos2=ll-2;
			int pos3=ll-3;

			if((s[pos]=='n')&&(s[pos2]=='a')&&(s[pos3]=='m'))
				hero++;
			else
				villan++;

			if(hero-villan>=2)
			{
				cout<<"superheroes \n";
				counter=1;
			}
			else if(villan-hero>=3)
			{
				cout<<"villains \n";
				counter=1;
			}

			if(counter==1)
				break;

		}
		if(counter==0)
			cout<<"draw \n";
	}

	return 0;

}
