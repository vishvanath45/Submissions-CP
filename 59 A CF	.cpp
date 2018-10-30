// 59 A CF	
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

ll l;
cin>>l;

string s;

cin>>s;

ll arr[26]={0};

ll ans=0;

for (int i = 0; i < l; ++i)
{
	arr[s[i]-'a']++;
	/* code */
}

ll counter=0;


for (int i = 0; i < 26; ++i)
{
	if(arr[i]>0)
	{	ll pkp = arr[i]-1;
		ans+=arr[i]-1;

			
	}
}
if(ans<25)
cout<<ans;
else
cout<<-1;




return 0;}