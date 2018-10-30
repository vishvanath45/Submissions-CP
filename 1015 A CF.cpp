// 1015 A CF
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

int a, b;
cin>>a>>b;

int arr[b];

for(int i = 0 ; i < b ; i++)
arr[i]=0;

while(a--)
{
	int p,q;

	cin>>p>>q;
	for(int i = p-1; i <=q-1 ; i++)
	{
		arr[i]++;
	}
}

int count = 0;

std::vector<int> v;


for(int i = 0 ; i < b ; i++)
{
	if(arr[i]==0)
	{
		v.push_back(i+1);
	}
}


cout<<v.size()<<"\n";

for(int i = 0 ; i < v.size() ; i++)
{
cout<<v[i]<<" ";
}


return 0;
}