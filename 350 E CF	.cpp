// 350 E CF	
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

ll n,m,k;

cin>>n>>m>>k;


if(n==k||(m>(((n*(n-1))/2)-k+1)))
{
	cout<<-1;
	return 0;
}

ll arr[n+1][n+1];

for (ll i = 1; i <=n; ++i)
{
	for (ll j = 1; j <=n; ++j)
	{
		if(i==j)
		{
			arr[i][j]=-1;
		}
		else
		{
			arr[i][j]=0;
		}
		/* code */
	}
	/* code */
}

std::vector<ll> v;

ll chichi[n+1]={0};

for (ll i = 0; i < k; ++i)
{
	ll mm;
	cin>>mm;
	v.pb(mm);
	/* code */
}


for (int i = 0; i < v.size(); ++i)
{
	chichi[v[i]]++;
	/* code */
}

ll firstunattached=-1;


for (int i = 1; i < n+1; ++i)
{
	if(chichi[i]==0)
	{
		firstunattached=i;
		break;
	}
	/* code */
}





sort(v.begin(),v.end());

ll first = v[0];

ll counter =0;


// cout<<first<<" "<<firstunattached<<"\n";
arr[firstunattached][first]=-1;
arr[first][firstunattached]=-1;
// counter++;
if(counter>=m)
	return 0;
// cout<<v[1]<<" "<<firstunattached<<"\n";
arr[v[1]][firstunattached]=-1;
arr[firstunattached][v[1]]=-1;
// counter++;
if(counter>=m)
	return 0;

ll mm = 1;

for (ll i = 1; i <=n; ++i)
{
	if(i==v[mm])
	{
		arr[first][i]=-1;
		arr[i][first]=-1;
		mm++;
	}

}

for (ll i = 1; i <=n; ++i)
{
	for (ll j = 1; j <=n; ++j)
	{

		cout<<arr[i][j]<<" ";
		/* code */
	}
	cout<<"\n";
	/* code */
}





for (ll i = 1; i <=v.size() ; ++i)
{
	ll pkp = v[i-1];

	for(ll j =1; j <= n ; ++j)
	{
		if(arr[pkp][j]==0)
		{
			// cout<<pkp<<" "<<j<<"\n";
			arr[pkp][j]=-1;
			arr[j][pkp]=-1;
			// counter++;

			if(counter>=m)
				return 0;
		}
	}


	/* code */
}



for (ll i = 1; i <=n; ++i)
{
	for (ll j = 1; j <=n; ++j)
	{
		if(arr[i][j]==0)
			{
				// cout<<i<<" "<<j<<"\n";
			arr[j][i]=-1;
			arr[i][j]=-1;
			// counter++;
			if(counter>=m)
				return 0;
		}
		/* code */
	}
	/* code */
}




return 0;
}

