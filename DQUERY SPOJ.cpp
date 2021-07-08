// DQUERY SPOJ

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mp make_pair
#define M (ll)(1e9+7)

vector< set <ll> > segtree;

void buildsegtree(ll input[], ll low, ll high, ll pos)
{
	if(low == high)
	{
		set<ll> s;
		s.insert(input[low]);
		segtree[pos] = s;
	}
	else
	{
		ll mid = low + (high - low)/2;
		buildsegtree(input, low, mid, 2*pos+1);
		buildsegtree(input, mid+1, high, 2*pos+2);
		set<ll> s1;
		set<ll> s2 =  segtree[2*pos+1];
		set<ll> s3 =  segtree[2*pos+2];
		s1.insert(s2.begin(), s2.end());
		s1.insert(s3.begin(), s3.end());
		segtree[pos] = s1;	
	}
}

set<ll> query( ll ql, ll qr, ll low, ll high, ll pos)
{
	if(ql > high || qr < low)
		{
			set < ll > s5;
			return s5;
		}
	else if(ql <= low && qr >= high)
		{
		set<ll> s5 =  segtree[pos];
		return s5;
	}

	ll mid = low + (high - low)/2;

	set<ll> s1 =  query( ql, qr,low, mid, 2*pos+1);
	set<ll> s2 =  query( ql, qr,mid+1, high, 2*pos+2);
	set<ll> s3 ;
	s3.insert(s1.begin(), s1.end());
	s3.insert(s2.begin(), s2.end());
	return s3;
}


int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

ll sze;

ll arr[sze];

for (ll i = 0; i < sze; ++i)
cin>>arr[i];


for(int i = 0; i < 4000 ; i++)
{
	set<ll> s6;
	segtree.push_back(s6);
}


buildsegtree(arr, 0, sze-1, 0);

ll q;
cin>>q;

set <ll> st;
while(q--)
{
ll a,b;
cin>>a>>b;

st =  query(a-1, b-1, 0, sze-1, 0);

cout<<st.size()<<"\n";

}

return 0;

}
