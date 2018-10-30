// 612 A CF
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

ll sze, a, b;

cin>>sze>>a>>b;
string s;
cin>>s;

// a*p + b*q = sze

ll a1 = 0, b1 = 0;

ll c = 0;
for(int i = 0 ; i < 105 ; i++)
{
	double x;

	x = (double)(sze - a*i)/(double)b;


	int k = int(x);
	if(k == x)
	{
		a1 = i;
		b1 = int(x);
		c = 1;
		break;
	}
}


// cout<<a1<<" "<<b1<<" "<<c<<"\n";
if(c == 0 || a1 < 0 || b1 < 0)
{
	cout<<"-1";
	return 0;
}

cout<<a1+b1<<"\n";
int i = 0;

ll p = 0;
for( ; i < sze ; i++)
{
	if(a1 == 0)
		break;

	cout<<s[i];

	p++;
	if(p%a == 0)
	{
		p = 0;
		cout<<"\n";
		a1--;
	}
}

p = 0;

for(; i < sze ; i++)
{

	cout<<s[i];


	if(b1 == 0)
		break;
p++;

if(p%b == 0)
{
	p = 0;
	cout<<"\n";
	b1--;
}

}

return 0;
}