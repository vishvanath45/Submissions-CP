// 978 A CF
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

int n;

cin>>n;

int m;
set<int> s;
std::vector<int> v;
while(n--)
{
cin>>m;
v.push_back(m);
}

std::vector<int> v2;
for(int i = v.size()-1; i>=0; i--)
{

int set_size = s.size();

s.insert(v[i]);

if(set_size<s.size())
{
	v2.push_back(v[i]);
}

}

cout<<v2.size()<<"\n";
for(int i = v2.size()-1; i>=0; i--)
{
cout<<v2[i]<<" ";
}
return 0;
}