// BRLADDER CC


#include<bits/stdc++.h>

#define ll long long int
using namespace std;

int main()
{

    ll t;

    ll a, b;

    cin>>t;

    while(t--)
    {

        ll counter = 0;

        cin>>a>>b;

        if(a%2==0)
        {
            if((b==a-1))
                counter=1;
            if((b==a+2))
                counter =1;
            if(b==a-2)
                counter =1;
        }
        else
        {
            if((b==a+1))
                counter=1;
            if((b==a+2))
                counter=1;
            if(b==a-2)
                counter=1;
        }

        if(counter==1)
            cout<<"YES\n";
        else
            cout<<"NO\n";



    }

    return 0;

}
