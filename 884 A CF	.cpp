// 884 A CF	
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mp make_pair
#define M (ll)(1e9+7)
 

bool isSubSequence(string str1, string str2, ll m, ll n)
{
    // Base Cases
    if (m == 0) return true;
    if (n == 0) return false;
 
    // If last characters of two strings are matching
    if (str1[m-1] == str2[n-1])
        return isSubSequence(str1, str2, m-1, n-1);
 
    // If last characters are not matching
    return isSubSequence(str1, str2, m, n-1);
}


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

ll asze = a.length();
ll bsze = b.length();

if(bsze>asze)
{
	cout<<"need tree";
	return 0;

}
else if( bsze == asze)
{
	sort(a.begin(),a.end());
	sort(b.begin(),b.end());

	for (int i = 0; i < asze; ++i)
	{
		if(a[i]!=b[i])
		{
			cout<<"need tree";
			return 0;
		}
		/* code */
	}
	cout<<"array";
	return 0;
}
else
{
	if (a.find(b) != std::string::npos)
	{
		cout<<"automaton";
		return 0;
	}

	ll ha[26]={0};
	ll hb[26]={0};

	for (int i = 0; i < asze; ++i)
	{
		ha[a[i]-'a']++;
		/* code */
	}

	for (int i = 0; i < bsze; ++i)
	{
		hb[b[i]-'a']++;
		/* code */
	}
	

	for (int i = 0; i < 26; ++i)
	{
		if(hb[i]>ha[i])
		{
			cout<<"need tree";
			return 0;
		}
		/* code */
	}

	if(isSubSequence(b,a,bsze,asze))
	{
		cout<<"automaton";
	}
	else
	{
		cout<<"both";
	}
		return 0;


}


return 0;
}




