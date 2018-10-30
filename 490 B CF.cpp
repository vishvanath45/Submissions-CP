// 490 B CF
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

int t;
string s;
cin>>t;
cin>>s;

vector<int> vt;


for(int i = t; i >0 ; i--)
{
	if(t%i == 0)
		vt.push_back(i);
}


for(int i = vt.size()-1 ; i >=0 ; i--) 
{
	reverse(s.begin(), s.begin()+vt[i]);
	//cout<<vt[i]<<" "<<s<<"\n";
}


cout<<s;

return 0;
}