// 978 G CF
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mp make_pair
#define M (ll)(1e9+7)

bool compare(const pair<pair<int,int>, pair<int, int > > &a, const pair<pair<int,int>, pair<int,int > > &b)
{
	return (a.first.first < b.first.first);
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


int nday, nexam;

cin>>nday>>nexam;

int ansarr[nday] = {0};


vector< pair < pair<int,int>, pair<int,int> > > queries;



for (int i = 0; i < nexam; i++)
{
	int a, b, c;
	cin>>a>>b>>c;
	queries.pb(mp(mp(b,i),mp(a,c)));
	// cin>>queries[i].second.first>>queries[i].first>>queries[i].second.second;
	ansarr[queries[i].first.first - 1] = nexam + 1;
}

sort(queries.begin(), queries.end(), compare);



for (int i = 0 ; i < nexam ; i++)
{

	int count = 0 ;

	for(int j= queries[i].second.first-1 ; j < queries[i].first.first ; j++ )
	{
		if(ansarr[j] == 0)
		{
			ansarr[j] = queries[i].first.second + 1;
			count++;
		}
		if(count == queries[i].second.second)
		break;
	}
	if(count != queries[i].second.second)
	{
		cout<<"-1";
		return 0;
	}



}


for (int i = 0; i < nday; ++i)
{
	cout<<ansarr[i]<<" ";
}


return 0;
}
