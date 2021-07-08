// // 1059 C CF
// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long int
// #define pb push_back
// #define mp make_pair
// #define M (ll)(1e9+7)


// int main()
// {
//     #ifndef ONLINE_JUDGE
//         freopen("input.txt","r",stdin);
//         freopen("output.txt","w",stdout);
//     #endif
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

// ll t;

// cin>>t;

// if(t == 3)
// {
// 	cout<<"1 1 3";
// 	return 0;
// }
// if(t == 1)
// {
// 	cout<<1;
// 	return 0;

// }

// if(t == 2)
// {
// 	cout<<"1 2";
// 	return 0;
	
// }

// if(t == 4)
// {
// 	cout<<"1 1 2 4";
// 	return 0;
	
// }

// if(t%2 != 0)
// {
// 	ll a = (t-1)/2;

// 	for(int i = 0 ; i < a+1 ; i++)
// 		cout<<1<<" ";
// 	for(int i = 0 ; i < a ; i++)
// 		cout<<2<<" ";
// 	cout<<t-1<<" ";
// 	return 0;
// }
// else
// {
// 	ll a = (t)/2;

// 	for(int i = 0 ; i < a ; i++)
// 		cout<<1<<" ";
// 	for(int i = 0 ; i < a ; i++)
// 		cout<<2<<" ";
// 	cout<<t<<" ";
// 	return 0;

// }

// return 0;
// }

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define Endl endl
#define pb push_back
#define mkp make_pair
#define scl(n) scanf("%lld",&n)
#define pfl(n) printf("%lld ",n)
#define sc(n) scanf("%d",&n)
#define pf(n) printf("%d ",n)

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t,i,j,l,r,q,k,kk,x,c,m,n,p;
    cin>>n;
    ll g = 1;
    while(1){
    	if(n==3){
    		cout<<g<<" "<<g<<" "<<(g*3);
    		break;
    	}else if(n==2){
    		cout<<g<<" "<<(2*g);
    		break;
    	}else if(n==1){
    		cout<<g;
    		break;
    	}else{
    		ll p = (n+1)/2;
    		for(i=0;i<p;i++){
    			cout<<g<<" ";
    		}
    		n = n/2;
    		g = g*2;
    	}
    }
return 0;
}