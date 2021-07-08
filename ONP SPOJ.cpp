// ONP SPOJ
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
	stack<string> alpha;
	stack<string> sign;
	string s;
	cin>>s;

	for (ll i = 0; i < s.length(); i++)
	{
		// cout<<s[i]<<" ";
		if(s[i] >= 'a' && s[i] <= 'z')
		{
			string kk;
			kk += s[i];
			alpha.push(kk);
		}
		else if(s[i] != '(' && s[i] != ')')
		{
			string kk;
			kk += s[i];
			sign.push(kk);
		}
		else if(s[i] == ')')
		{
		    
			string p = alpha.top();
			alpha.pop();
			string q = alpha.top();
			alpha.pop();

			string r = q + p;

			string kk = sign.top();
			sign.pop();
			r += kk;
			alpha.push(r);
			// cout<<p<<" "<<q<<" "<<r<<" -- \n";
		}
	}

	cout<<alpha.top()<<"\n";

}


return 0;
}