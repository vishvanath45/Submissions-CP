// 1017 B CF
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

int l;
cin>>l;

string a,b;
cin>>a>>b;

int one_a = 0;
int zero_a = 0;

int op = 0;
int zp = 0;

for(int i = 0; i<l ;i++)
{
	if(a[i] == '1')
		one_a++;
	else
		zero_a++;
}

for(int i = 0; i<l ;i++)
{

if(b[i] == '0')
{
	if(a[i] == '1')
		op++;
	else
		zp++;
}

}
int ans = op*zero_a + zp*one_a - op*zp;


cout<<ans;
return 0;

}





