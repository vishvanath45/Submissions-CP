//PREFINVS CC

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
string arr;
cin>>arr;

int l = arr.length();

int i;

for (i = l-1; i >= 0; i--)
{
	if(arr[i]=='1')
		break;
}

int position_matters=i;

int counter=0;

int antcounter=0;

for(int j = position_matters;j>0;j--)
{
	if((arr[j]=='1'&&arr[j-1]=='0')||(arr[j]=='0'&&arr[j-1]=='1'))
		counter++;
	else
		antcounter++;

}

if(position_matters>=0)
cout<<counter+1;
else
cout<<0;



return 0;
}