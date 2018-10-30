// 1023 A CF
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

int sa,sb;

cin>>sa>>sb;

string a,b;
cin>>a>>b;

int p = 0;
int lol = 0;

for(int i = 0 ; i<sa; i++)
{
	if(a[i] == '*')
		p=1; 
}

for(int i = 0 ; i<sb; i++)
{
	if(b[i] < 'a' || b[i] > 'z')
		lol = 1;
}

if(p == 0)
{
	if(a==b)

		cout<<"YES";
	else
		cout<<"NO";
return 0;
}

if(lol)
{
	cout<<"NO";
	return 0;

}





if(sb < sa-1)
{
	cout<<"NO";
	return 0;
}

int j = 0;

for(int i = 0 ; i<sa; i++)
{
	if(a[i] == b[j])
	{
		//
		j++;

	}
	else if(a[i] == '*')
		break;
	else
	{
		cout<<"NO";
		return 0;	
	}
}


j = sb-1;

for(int i = sa-1 ; i>=0; i--)
{
	if(a[i] == b[j])
	{
		//
		j--;
	}
	else if(a[i] == '*')
		break;
	else
	{
		cout<<"NO";
		return 0;
	}	
}

cout<<"YES";

return 0;



}