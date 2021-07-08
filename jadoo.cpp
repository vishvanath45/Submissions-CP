// 879 C CF
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

ll t;
cin>>t;
ll z;
ll orr=0;
ll andorr = -99;
ll xorrr = 0;

char ch;
ll p;
ll flag = 0;
ll x = 1023;
ll y = x;
for (ll i = 0; i < t; ++i)
{
cin>>ch;
cin>>p;

if(ch=='|')
{
	y|=p;
	// cout<<y<<"\n";
}
else if(ch == '^')
{
	y^=p;
	// cout<<y<<"\n";

}
else
{
	y&=p;
	// cout<<y<<"\n";
}


}
	// cout<<y<<"***\n";
z = y^x;

// cout<<"z "<<z<<"\n";
if(z)
{
cout<<1<<"\n";
cout<<"^ "<<z;
return 0;
}
else
{
cout<<0;
}
return 0;
}

