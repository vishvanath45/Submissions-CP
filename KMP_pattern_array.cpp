// KMP pattern array 
#include "bits/stdc++.h"
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

string s;

cin>>s;

ll slen = s.length();

// ll pkp = slen+2;
ll arr[10];

for (int i = 0; i < slen+2; ++i)
{
	/* code */
	arr[i]=0;
}

ll j=0;
ll i=1;

for ( ; j < slen ; j++)
{
	for (; i < slen; i++)
	{	
		cout<<s[i]<<" "<<s[j]<<" *\n";
		if(s[j]!=s[i])
		{
			arr[i]=0;
			if(j>0)
			{
				cout<<"--\n";
				j = arr[j-1];
				if(s[j]==s[i])
				{
					arr[i]=j+1;
					j++;					
				}
		}
		else
		{
			arr[i]=j+1;
			j++;
		}
	}
}
}

for (int i = 0; i < slen+2; ++i)
{
	cout<<arr[i]<<" ";
}

return 0;
}