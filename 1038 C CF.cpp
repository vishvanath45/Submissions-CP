// 1038 C CF
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mp make_pair
#define M (ll)(1e9+7)

int arr[26];

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

ll a[sze], b[sze];

for(ll i = 0; i <sze; i++)
cin>>a[i];

for(ll i = 0; i <sze; i++)
cin>>b[i];


sort(a, a+sze);
sort(b, b+sze);

ll pa = sze-1, pb = sze-1;

ll sa = 0, sb = 0;

ll ta =1;
ll tb =0;

while(pa >= 0  || pb >= 0)
{

	//cout<<pa<<" pa "<<pb<<" pb \n";

if(ta)
{
	if(pa < 0)
	{
		pb--;
	}
	else
	{
		if(pb < 0 || a[pa] > b[pb])
		{
			sa += a[pa];
			pa--;
		}
		else
		{
			pb--;
		}
	}
	ta = 0;
}
else
{	
	if(pb<0)
	{
		pa--;
	}
	else
	{
		if(pa < 0 || b[pb] > a[pa])
		{
			sb += b[pb];
			pb--;
		}
		else
		{
			pa--;
		}
	}
	ta = 1;
}
//cout<<sa<<" "<<sb<<"\n";
}

cout<<sa-sb;

return 0;
}