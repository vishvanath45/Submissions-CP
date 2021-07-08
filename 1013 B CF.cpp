// 1013 B CF
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mp make_pair
#define M (ll)(1e9+7)


int hashee[100009]={0};
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

int t, aand;

cin>>t>>aand;

std::vector<int> v;

for(int i = 0 ; i < t ; i++)
{
	int k;
	cin>>k;
	v.push_back(k);
	hashee[k]++;
}

int ans = 0;

for(int i = 0 ; i < v.size() ; i++)
{
	if(hashee[v[i]] >= 2 )
	{
		cout<<0<<"\n";
		return 0;
	}
}


for(int i = 0 ; i < v.size() ;i++)
{
	int jj =  v[i] & aand;
	if(jj!=v[i])
		hashee[jj]++;
}

for(int i = 0 ; i < v.size() ; i++)
{
	if(hashee[v[i]] >= 2 )
	{
		//cout<<v[i]<<" -\n";
		cout<<1<<"\n";
		return 0;
	}
}


for(int i = 0 ; i < 100009 ; i++)
{
	if(hashee[i] >= 2 )
	{
		//cout<<v[i]<<" -\n";
		cout<<2<<"\n";
		return 0;
	}
}

cout<<-1<<"\n";

return 0;
}


