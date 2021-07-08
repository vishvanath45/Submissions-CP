// 1015 D CF
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

ll n, k , s;

cin>>n>>k>>s;

ll maxi = n-1;

if(s > maxi*k  || k > s)
{
	cout<<"NO";
	return 0;
}
else
{
	cout<<"YES\n";
}

ll ps = s/k;
ll rem = s%k;

ll currpos = 1;

ll flag = 1;

for(ll i = 0 ; i < k  ; i++)
{

if(rem>0)
{
	currpos += flag*(ps + 1);
	rem--;
	cout<<currpos<<" ";
	flag = flag*(-1);
}
else
{
	currpos += flag*(ps);
	// rem--;
	cout<<currpos<<" ";
	flag = flag*(-1);

}


}




return 0;
}