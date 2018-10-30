// 1047 A CF
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


ll t;

cin>>t;

if((t-2)%3 != 0) 
{
	cout<<"1 1 "<<t-2<<"\n";
}
else
{
	cout<<"1 2 "<<t-3<<"\n";
}


return 0;
}