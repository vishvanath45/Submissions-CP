// SEG TREE RMQ
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mp make_pair
#define M (ll)(1e9+7)
#define maxmin (ll)(-1e9+7)


void buildsegtree(ll input[], ll segarr[], ll low, ll high, ll pos)
{
	if(low == high)
	{
		segarr[pos] = input[low];
	}
	else
	{
		ll mid = low + (high - low)/2;
		buildsegtree(input, segarr, low, mid, 2*pos+1);
		buildsegtree(input, segarr, mid+1, high, 2*pos+2);
		segarr[pos] = min(segarr[2*pos+1], segarr[2*pos+2]);
	}
}


int rmq(ll segarr[], ll qlow, ll qhigh, ll low, ll high, ll pos)
{
	// here I have to see three cases total overlap , partial overlap, no overlap, 
	// worst case time complexity 4* log(N) 
	//cout<<low<<" "<<high<<"\n";
	if(qlow > high || qhigh < low)
		return M;
	else if(qlow <= low && qhigh >= high)
		return segarr[pos];
	ll mid = low + (high - low)/2;
	return min(rmq(segarr, qlow, qhigh, low, mid, 2*pos +1), rmq(segarr, qlow, qhigh, mid+1, high, 2*pos+2));
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

cin>>sze;

ll arr[sze];


ll segarr[4*sze];

for (ll i = 0; i < sze; ++i)
cin>>arr[i];

for(ll i = 0; i < 4*sze ; i++)
segarr[i] = M;


buildsegtree(arr, segarr, 0, sze-1, 0);



// for (int i = 0; i < sze; ++i)
// {
// 	cout<<segarr[i]<<" ";
// 	/* code */
// }
ll q;
cin>>q;

while(q--)
{
	ll l,r;

	cin>>l>>r;

	// cout<<l<<r;

	ll ans = rmq(segarr, l, r, 0, sze-1, 0);

	cout<<ans<<endl;
}



return 0;
}