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


int t;
cin>>t;

int id;
int summ = -1;
int lsum = -1 ;
int a,b,c,d;

vector<int> kk;


int tsum =0;
for(int i = 1; i<=t;i++)
{
	cin>>a>>b>>c>>d;
	lsum = a+b+c+d;

	if(i == 1)
	tsum = lsum;	

	kk.push_back(lsum);
}


sort(kk.begin(), kk.end());

int hh = 1;
for(int i = kk.size()-1 ; i>=0; i--)
{
	if(kk[i] == tsum)
	{
		cout<<hh;
		return 0;
	}
	hh++;
}

return 0;
}	