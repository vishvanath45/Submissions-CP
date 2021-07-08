// 749 D CF


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

ll t;
cin>>t;

ll uid, uamount;

vector< vector<int> > v;

for(int i =0 ;i<t; i++)
{cin>>uid>>uamount;

v[uid-1].push_back(uamount);
}

ll noofdays;
cin>>noofdays;

while(noofdays--)
{

int noofppl;
cin>>noofppl;

int arr[noofppl];


set <pair<int,int> > st;

for(int i=0;i<noofppl ; i++)
	cin>>arr[i];

int sop=0;


for(int i=0 ;i< v.size() ; i++)
{
	if((arr[sop]-1)!=i)
	{
	for(int j =0 ; j< v[i].size();j++)
	{
		st.insert(make_pair(v[i][j],i+1));
	}
	}
	else
	{	if(sop<noofppl)
		sop++;
	}
}

set <pair<int,int> >:: iterator it;

cout<<(*it).second<<" "<<(*it).first<<"\n";


}

return 0;

}
