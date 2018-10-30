#include <iostream>
using namespace std;
#define ll long long int

int m=1000000007;
ll pow(ll a, ll b)
{
    if(b==0)
    return 1;
    else if(b==1)
    {
        return a;
    }
    else if(b%2==0)
    return ((pow(a,b/2)%m)*((pow(a,b/2))%m))%m;
    else
    return ((((a*pow(a,b/2))%m)*(pow(a,b/2))%m));
}

int main()
{
ll a,b;
cin>>a>>b;

ll  r;
r=pow(a,b);
cout<<r<<"\n";
}
