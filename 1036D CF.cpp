// 1036D CF
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

ll l1;
cin>>l1;

ll a1[l1];
// ll a2[l];

ll s1=0,s2=0;

for(ll i = 0 ; i < l1 ; i++)
{
	cin>>a1[i];
	s1+=a1[i];
}

ll l2;
cin>>l2;

ll a2[l2];

for(ll i = 0 ; i < l2 ; i++)
{
	cin>>a2[i];
	s2+=a2[i];
}

if(s1 != s2)
{
	cout<<-1;
	return 0;
}


ll i = 0, j = 0;

ll sum1 = 0;
ll sum2 = 0;


ll ans = 0;

while(i < l1 || j < l2)
{

if(sum1 + a1[i] > sum2 + a2[j])
{
	sum2 += a2[j];
	j++;
}
else
if(sum1 + a1[i] < sum2 + a2[j])
{
	sum1 += a1[i];
	i++;
}
else
{
	sum2 += a2[j];
	j++;
	sum1 += a1[i];
	i++;
	ans++;
}
}

cout<<ans;

return 0;
}