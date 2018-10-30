// CF 1027 C
#include<bits/stdc++.h>
using namespace std;
#include <unordered_map>
#define ll long long int
#define pb push_back
#define mp make_pair
#define M (ll)(1e9+7)

int main()
{
    // #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        // freopen("output.txt","w",stdout);
    // #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

int t;

cin>>t;

while(t--)
{
	unordered_map<int,int>mp;
	std::vector<int> v;
	int sze;
	cin>>sze;

	double area = INT_MAX;
	int k;
	for(int i = 0 ; i < sze ; i++)
	{
		
		cin>>k;
		if(!mp.count(k))
		{
			mp[k] = 1;
			v.push_back(k);
		}
		else
		{
			mp[k] = mp[k] + 1;
		}
	}

	sort(v.begin(), v.end());
	
	int a1,a2;
	int flag = 0;
	if(v.size() == 1)
	{
	    a1 = v[0];
	    flag = 1;
	}
	for(int i = 0; i < v.size()-1; i++)
	{   
		int f = v[i];
		if(mp[f]>=4)
		{
		    a1 = f;
		    flag =1;
		    continue;
		}
		int s = v[i+1];
		
		if(mp[f] > 1 && mp[s] > 1)
		{   
		    
			double la = (double)f/s + (double)s/f;

			if( la < area)
			{
				area = la;
				a1 = f;
				a2 = s;
			} 
		}
	}

    if(flag == 1)
    cout<<a1<<" "<<a1<<" "<<a1<<" "<<a1<<"\n";
    else
	cout<<a1<<" "<<a1<<" "<<a2<<" "<<a2<<"\n";
	flag = 0;
	mp.clear();
    
    
}

return 0;
}