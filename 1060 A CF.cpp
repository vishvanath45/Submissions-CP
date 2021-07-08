// 1060 A CF
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

int t;

cin>>t;

string s;

cin>>s;

ll cs = 0;

for(int i = 0 ; i < t ; i++)
{
	if(s[i] == '8')
		cs++;
} 

ll k = t/11;

//cout<<cs<<" "<<k<<"\n";
cout<<min(k,cs);


return 0;
}