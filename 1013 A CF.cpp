// 1013 A CF
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

int sze; int k;
cin>>sze>>k;
string s;
cin>>s;

string p = s;

int j = 0;
int flag = 0;

for(int i = 1; i < sze ; i++)
{
	int k = i;

for(j = 0 ; k < sze ; )
{
	if(s[j] == s[k])
	{	
		j++;
		k++;
		flag = 1;
	}
	else	
	{
		flag =0;
		break;
	}
}
// cout<<"\n";
if(k == sze)
{
	cout<<"here";
break;
}
}

if(flag)
{
	string lol;
	cout<<" j "<<j<<"\n";
	for(int hh = j ;  hh < sze; hh++)
		lol += s[hh];

	cout<<"  lol "<<lol<<"\n";

	for(int i = 0 ; i < k -1 ; i++)
		s += lol;
}
else
{
	for(int i = 0 ; i < k -1 ; i++)
		s += p;
}

cout<<s;

return 0;
}