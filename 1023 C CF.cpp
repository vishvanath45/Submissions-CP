// 1023 C CF
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

int n,k;
cin>>n>>k;


string s;
cin>>s;

int torem = n-k;
torem = torem/2;

stack<char> stk;


for(int i = 0 ; i < n ; i++)
{
	if(s[i] == '(')
		stk.push(s[i]);
	else if(s[i] == ')')
	{	
		if(torem != 0)
			{
				stk.pop();
				torem--;
			}
		else
			stk.push(s[i]);
	}
}


string ans;

while(!stk.empty())
{
	char mm =  stk.top();

	//cout<<mm;

	ans += mm;
	stk.pop();
}

reverse(ans.begin(), ans.end());

cout<<ans;

//cout<<"Asdas";
return 0;
}
