// 978 F CF
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mp make_pair
#define M (ll)(1e9+7)

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


int np, nq;

cin>>np>>nq;

int peopleskill[np];
int pairs[nq][2];

map<int, int> mp;
map<int, int>:: iterator it;


for (int i =0 ; i < np ; i++)
{
	cin>>peopleskill[i];
	mp[peopleskill[i]]++;
}

for (int i = 0 ;i < nq ; i++)
{
	for (int j = 0 ; j < 2 ; j++ )
	{
		int pos;
		cin>>pos;
		pairs[i][j] = pos-1;
	}
}

int cum_sum = 0;

// for ( it = mp.begin() ; it!=mp.end() ; it++)
// {
// 	cout<<it->first<<" "<<it->second;
// 	cout<<" cum_sum "<< cum_sum <<" \n";
// 	cum_sum = cum_sum + it->second;
// }

cum_sum = 0;
for ( it = mp.begin() ; it!=mp.end() ; it++)
{
	int pkp = it->second;
	it->second = cum_sum;
	cum_sum = cum_sum + pkp;
	// cout<<it->first<<" "<<it->second<<" \n";

}


int ans_arr[np];

for(int i = 0 ; i < np ; i++)
{
	it = mp.find(peopleskill[i]);

	ans_arr[i] = it->second;
}

// for(int i = 0 ; i < np ; i++)
// {
// 	cout<<ans_arr[i]<<" ";
// }
// cout<<"\n";


for(int i = 0; i < nq ; i++)
{
	int f = peopleskill[pairs[i][0]];
	int s = peopleskill[pairs[i][1]];

	if(f>s)
	{
		ans_arr[pairs[i][0]]--;
	}
	else if(f<s)
	{
		ans_arr[pairs[i][1]]--;
	}
}


for(int i = 0 ; i < np ; i++)
{
	cout<<ans_arr[i]<<" ";
}




// it = mp.find(1);

// cout<<it->first;
// cout<<it->second;


return 0;
}