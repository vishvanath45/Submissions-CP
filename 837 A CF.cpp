 	// 837 A CF

#include<bits/stdc++.h>
using namespace std;


int main()
{
ios_base::sync_with_stdio(0);
#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif


int len;
cin>>len;

string str;


// string str;
// cin>>str;

// int len = str.length();
int currmax=0;
int maxx=0;



while(cin>>str)
{
	maxx=0;
	for(int i =0 ; i<str.length();i++)
	{

	if(int(str[i])>='A'&&int(str[i])<='Z')
	{
		maxx++;
		if(maxx>currmax)
			currmax=maxx;
		 // cout<<"mAXXX =="<<maxx<<"\n";
	}
	}	


}

cout<<currmax<<"\n";


return 0;

}