// 632 B CF
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mp make_pair
#define M (ll)(1e9+7)


bool CompareVector(string  first, string  second)
{

string s1 = "";
s1 += first;
s1 += second;

string s2 = "";
s2 += second;
s2 += first;

   
   if(s1 >= s2)
    return false;
   return true;

}
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

std::vector<string> v;

for (ll i = 0; i < t; ++i)
{
  string s;
  cin>>s;
  v.push_back(s);
}

sort(v.begin(), v.end(), CompareVector);

string s2 = "" ;

for(ll i = 0 ; i < t; i++)
{
  s2+=v[i];
  
}

cout<<s2;


pair<ll, ll> pb[n+11];

pb[0].first = ans[0].first;
pb[0].second = ans[0].second;

kkk = 1;
ll prev = 0;
while(kkk < n)
{
  if(ans[kkk].first < pb[prev].second)
  {
    if(ans[kkk].second > pb[prev].second)
    {
      pb[i].second = ans[kkk].second;
    }
    kkk++;
  }
  else
  {
    prev++;
    pb[prev].first =  ans[kkk].first;
    pb[prev].second = ans[kkk].second;
    kkk++;
  }
}


return 0;
}