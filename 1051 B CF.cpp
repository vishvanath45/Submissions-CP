// 1051 B CF
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

ll a, b;


cin>>a>>b;

cout<<"YES\n";
for(int i = a; i <=b ;)
{
	cout<<i<<" "<<i+1<<"\n";
	i+=2;
}

return 0;
}