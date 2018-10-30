// LITTLE DEEPU & ARRAY HR 

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mp make_pair
#define M (ll)(1e9+7)
#define MAX 100000

ll done[26];

ll segtree[4*MAX];
ll lazy[4*MAX];
ll arr[MAX];

void build_seg_tree(ll l, ll r, ll pos)
{
	if( l > r)
		return;
	if(l == r)
	{
		segtree[pos] = arr[l];
		return;
	}

	ll mid = (l+r)>>1;
	build_seg_tree(l, mid, pos*2+1);
	build_seg_tree(mid+1, r, pos*2+2);

	segtree[pos] = min(segtree[pos*2+1], segtree[pos*2+2]);
}

void update(ll ql, ll qr, ll l, ll r, ll pos, ll x, ll val,)
{
	if(ql < l || qr > r )
		return;

	if(lazy[pos] != 0)
	{
		segtree[pos] += lazy[pos];

		if(qr != ql)
		{
			lazy[2*pos+1] += lazy[pos];
			lazy[2*pos+2] += lazy[pos];
		}
	lazy[pos] = 0;
	}

if(segtree[pos] > x)
{
	segtree[pos] += val;
	if( qr != ql)
	{
		lazy[2*pos + 1] += val;
		lazy[2*pos + 2] += val;
	}
	return ;
}



}
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

return 0;
}