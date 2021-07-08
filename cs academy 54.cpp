// cs academy 54
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


string a,b;

cin>>a>>b;

ll sze= a.size();

ll arr[sze]={0};

ll flag =0;


for (ll i = 0; i < a.size(); i++)
{
	arr[i] = a[i]-'a';
	if(a[i]!='z')
		flag=1;
	/* code */
}

if(!flag)
{
	cout<<"No such string";
	return 0;
}

for (ll i = sze-1; i >=0; i--)
{
	// cout<<arr[i]<<'\n';
	if((arr[i])==25)
	{
		arr[i]=(arr[i]+1)%26;
	}
	else
	{
		arr[i]=(arr[i]+1)%26;
		break;
	}
	/* code */
}



for (ll i = 0; i < sze; i++)
{
	char ch = arr[i]+'a';
	a[i]=ch;

	/* code */
}
ll topi =0;


for (ll i = 0; i < sze; ++i)
{
	if(a[i]<b[i])
	{
		topi =1;
		break;
	}
	else if(a[i]>b[i])
	{
		break;
	}
	/* code */
}

if(topi)
{
	for (ll i = 0; i < sze; i++)
		cout<<a[i];
}
else
{
	cout<<"No such string";
	return 0;
}

return 0;
}