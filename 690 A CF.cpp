// 690 A CF
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
ll sze;

cin>>sze;


ll ok = sze;

if(sze%2 == 0)
{
cout<<sze/2;
}
else
{
cout<<sze/2+1;	
}



return 0;
}