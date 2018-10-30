// 292 A CF
#include<bits/stdc++.h>
using namespace std;
#define ll int
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

ll x;
cin>>x;
ll arr[x];


if(x>6)
{
    cout<<0;
    return 0;
}
for (ll i = 0; i < x; ++i)
{
    cin>>arr[i];
}

sort(arr, arr+x);

vector<int> one;
vector<int> two;
vector<int> three;

vector<int> final;

for (ll i = 0; i < x; ++i)
{
    final.push_back(arr[i]);
}

for (ll i = 0; i < x; i++)
{
    for(ll j = 0 ; j < x ; j++)
        {
            // string s = to_string(arr[i]);
            // string s2 = to_string(arr[j]);
            final.push_back(arr[i]*10+arr[j]);
        }
}

for(ll i = 0 ; i < x ; i++)
{
    for(ll j = 0 ; j < x ; j++)
    {
        for( ll k = 0 ; k < x ; k++)
        {
            // string s = to_string(arr[i]);
            // string s2 = to_string(arr[j]);
            // string s3 = to_string(arr[k]);
            ll mm = arr[i]*100 + arr[j]*10+arr[k];
            if(mm <= 255)
            {
                final.push_back(mm);  
            }          
        }
    }
}

set<ll>st;

for(int i = 0; i <final.size(); i++)
{
    st.insert(final[i]);
}

final.clear();

for(auto it = st.begin();  it != st.end() ; it++)
{
    final.push_back(*it);
}

// cout<<final.size();
// return 0;


std::vector<string> printthis;

for(ll i = 0; i < final.size() ; i++)
{
    ll nano = final[i];

    while(nano/10!=0)
        nano/=10;

    for(ll j = 0; j < final.size() ; j++)
    {
        for(ll k = 0; k < final.size() ; k++)
        {
            string mom = to_string(final[i])+to_string(final[j])+to_string(final[k]);

            set<char> st;

            for(int vv = 0 ; vv < mom.length() ; vv++)
            {
                st.insert(mom[vv]);
            }

            if(st.size() != x)
                continue;

            for(ll p = 0; p < final.size() ; p++)
             {
                if(final[p]%10 != nano)
                        continue;

                string papa = to_string(final[i])+to_string(final[j])+to_string(final[k])+to_string(final[p]);
                
                string papa2 = papa;

                reverse(papa2.begin(), papa2.end());

                if(papa2 != papa)
                    continue;

                    papa = to_string(final[i])+"."+to_string(final[j])+"."+to_string(final[k])+"."+to_string(final[p]);
                    printthis.push_back(papa);
                    
            }
        }
    }
}

cout<<printthis.size()<<"\n";

for(ll i = 0; i < printthis.size() ; i++)
    cout<<printthis[i]<<"\n";

// cout<<"asda";


return 0;
}