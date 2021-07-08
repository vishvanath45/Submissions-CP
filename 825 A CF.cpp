// 825 A CF

#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{

#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif


	int t;
	cin>>t;

	vector<int> vec;

	int counter =0;
	int zcounter=0;

	string s;
	cin>>s;

	for(int i=0;i<t;i++)
	{
		//cout<<s[i]<<"\n";
	if(s[i]=='1')
	{
		counter++;
		zcounter=-1;
	}
	else if(s[i]=='0')
		{if(counter!=0)
		vec.push_back(counter);
		counter=0;
		
		if(zcounter>=0)
		vec.push_back(0);

		zcounter++;
		}


	}

	//cout<<counter<<"\n";
	if(counter!=0)
	vec.push_back(counter);

	if(s[t-1]=='0')
		vec.push_back(0);



	int ss = vec.size();

	//cout<<"vec size "<<ss<<"\n";
	for(int k =0 ; k<ss;k++)
		cout<<vec[k];



return 0;

}