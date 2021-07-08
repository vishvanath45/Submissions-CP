// 1027 A CF
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

while(t--)
{

ll sze;
cin>>sze;

string s;

cin>>s;

ll start = 0 ;
ll end = sze-1;

ll flag = 0;

while(start < end)
{

set<int> st;

if(s[start] == 'a')
{
	//st.insert(s[start]-'a');
	st.insert(s[start]-'a'+1);
}
else if(s[start] == 'z')
{
	//st.insert(s[start]-'a');
	st.insert(s[start]-'a'-1);
}
else
{
	//st.insert(s[start]-'a');
	st.insert(s[start]-'a'-1);
	st.insert(s[start]-'a'+1);
}

if(s[end] == 'a')
{
	if( st.count(s[end]-'a'+1) > 0)
	{
		//
	}
	else
	{
		flag = 1;
	}
	
}
else if(s[end] == 'z')
{
	if( st.count(s[end]-'a'-1) > 0)
	{
		//
	}
	else
	{
		flag = 1;
	}
}
else
{
	if(st.count(s[end]-'a'-1) +st.count(s[end]-'a'+1) > 0)
	{
		//
	}
	else
	{
		flag = 1;
	}
}

start++;
end--;

}

if(flag == 1)
{
	cout<<"NO\n";
}
else
{
	cout<<"YES\n";
}


}


return 0;
}