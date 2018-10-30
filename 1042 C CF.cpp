// 1042 C CF
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mp make_pair
#define M (ll)(1e9+7)
#include<string>


int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

ll t;

cin>>t;

vector< pair<int, int> > vp;

ll cn=0;
ll cz=0;

for(int i = 1 ; i <= t ; i++)
{
	ll k;
	cin>>k;

	if(k < 0)
		cn++;
	else if(k == 0)
		cz++;

	vp.push_back({k, i});
}

sort(vp.begin(), vp.end());


ll steps = 1;

if(cn%2 == 0)
{
	if(cz == 0 )
	{
		for(int i = 0; i < t-1; i++)
		{
			cout<<"1 "<<vp[i].second<<" "<<vp[i+1].second<<"\n";
		}
	}
	else
	{
		int i = 0;
		ll lastneg = -1;
		while(vp[i].first !=0 && vp[i+1].first != 0 && i < t-1)	
		{
			cout<<"1 "<<vp[i].second<<" "<<vp[i+1].second<<"\n";
			lastneg = i+1;
			i++;
			steps++;
		}
		// i++;
		while(vp[i].first == 0 && vp[i+1].first == 0 && i < t-1)
		{
			cout<<"1 "<<vp[i].second<<" "<<vp[i+1].second<<"\n";
			i++; 	
			steps++;
		}
		// i+=1;
		if(steps < t)
		{cout<<"2 "<<vp[i].second<<"\n";
		steps++;
		}
		// i+=1;
		i=i+1;

		while(i<t-1)
		{
			cout<<"1 "<<vp[i].second<<" "<<vp[i+1].second<<"\n";
			i++;
		}
		if(lastneg != -1)
		cout<<"1 "<<vp[lastneg].second<<" "<<vp[i].second<<"\n";
	}
}
else 
{
	if(cz == 0)
	{
		cout<<"2 "<<vp[0].second<<"\n";

		int i = 1;

		while( i < t-1)
		{
			cout<<"1 "<<vp[i].second<<" "<<vp[i+1].second<<"\n";
			i++;			
		}

	}
	else
	{
		ll want = vp[0].second;

		ll i = 1;
		steps = 1;
		while(vp[i].first !=0 && vp[i+1].first != 0 && i < t-1)
		{
			if(steps < t)
			{			
			cout<<"1 "<<vp[i].second<<" "<<vp[i+1].second<<"\n";
			steps++;
			i++;
			}
		}
		// i++;
		while(vp[i].first == 0 && vp[i+1].first == 0 && i < t-1)
		{
			if(steps < t)
			{
				cout<<"1 "<<vp[i].second<<" "<<vp[i+1].second<<"\n";
				steps++;
				i++;
			}
		}
		if(steps < t)
		{
		cout<<"1 "<<want<<" "<<vp[i].second<<"\n";
		steps++;
		}
		if(steps < t)
		{
		cout<<"2 "<<vp[i].second<<"\n";
		i+=1;
		steps++;
		}

		while(i<t-1)
		{
			if(steps < t)
			{
			cout<<"1 "<<vp[i].second<<" "<<vp[i+1].second<<"\n";
			i++;
			steps++;
		}
		}
	}
}


return 0;
}
