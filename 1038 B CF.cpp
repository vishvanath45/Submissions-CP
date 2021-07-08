// 1038 B CF
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mp make_pair
#define M (ll)(1e9+7)

int arr[26];

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);	


int n;
cin>>n;

if(n<=2)
{
	cout<<"No";
	return 0;
}
else
{
	cout<<"Yes\n";

	
	vector<int>ve;
	vector<int>vo;

	for(int i = 1 ; i <= n ; i++)
	{
		if(i%2 == 0)
			ve.push_back(i);
		else
			vo.push_back(i);
	}

	int sa=0,sb=0;
	cout<<ve.size()<<" ";
	for(int i = 0 ; i < ve.size() ; i++)
		{
			cout<<ve[i]<<" ";
			//sa+=ve[i];
		}
	cout<<"\n";

	cout<<vo.size()<<" ";
	for(int i = 0 ; i < vo.size() ; i++)
		{
			cout<<vo[i]<<" ";
			//sb+=vo[i];
		}
	cout<<"\n";

	//cout<<sa<<" "<<sb;
	return 0;

}




return 0;
}