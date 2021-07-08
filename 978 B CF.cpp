// 978 B CF
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

int n;

cin>>n;


string s;

cin>>s;

int count = 0;
int remove = 0;

for (int i =0 ; i < n ; i++)
{
	if(s[i]=='x')
	{
		count++;
	}
	else
	{
		if(count > 2 )
		{
			remove+=(count-2);
		}
		count = 0;
	}
}

		if(count > 2 )
		{
			remove+=(count-2);
		}
		count = 0;


cout<<remove;

return 0;
}