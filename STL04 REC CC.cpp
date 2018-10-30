// STL04 REC CC

#include<bits/stdc++.h>


#define ll long long int
using namespace std;


int main()
{

    ll t;

    cin>>t;

    set<ll> st;

    while(t--)
    {

    ll ch1,no;

    cin>>no>>ch1;


        if(no==1)
        st.insert(ch1);
        else if(no==2)
        {
        if(st.count(ch1)!=0)
            st.erase(ch1);
        }
        else
        {
        if(st.count(ch1)!=0)
        {
        cout<<"Yes\n";
        }
        else
        cout<<"No\n";
        }



    }


return 0;


}
