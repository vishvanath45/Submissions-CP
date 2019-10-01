#include<bits/stdc++.h>
#define ll long long
#define sfd(x) scanf("%lld",&x)
#define sfc(x) scanf("%c",&x)
#define pf printf
#define M 1000000007
using namespace std;
/*
inline void sfd(int &x)
{
    register int c = getchar_unlocked();
    x = 0;
    int neg = 0;
    for(; ((c<48 || c>57) && c != '-'); c = getchar_unlocked());
    if(c=='-') {
        neg = 1;
        c = getchar_unlocked();
    }
    for(; c>47 && c<58 ; c = getchar_unlocked()) {
        x = (x<<1) + (x<<3) + c - 48;
    }
    if(neg)
        x = -x;
}*/
ll toint(string s){
	ll n=0,i;
	for(i=0;i<s.length();i++){
		n=n*10+((ll)(s[i])-48);
	}
	//cout<<n<<endl;
	return n;
}
ll dectobin(ll n){
	stack<ll> s;
	while(n>=2){
		ll x=n%2;
		s.push(x);
		n=n/2;
	}
	s.push(n);
	ll ans=0;
	while(!s.empty()){
		ans=ans*10+s.top();
		s.pop();
	}
	return ans;
}
ll reverse(ll n){    /*returns the reverse of number n*/
	ll i,r=0;
	while(n>0){
		i=n%10;
		r=r*10+i;
		n/=10;
	}
	return r;
}
ll countinfactn(ll n,ll i){   /*returns the number of times a prime number*/
	ll c=0,k=i;					/* i appears in n!*/
	while(i<=n){
		c=c+(n/i);
		i=i*k;
	}
	return c;
}
ll mx[4]={-1,1,0,0};
ll my[4]={0,0,-1,1};
//ll mx[8]={-1,1,0,0,-1,-1,1,1};
//ll my[8]={0,0,-1,1,-1,1,-1,1};
struct l{
	ll in;
	ll a;
	ll b;
};
int main(){
	#ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif 
	ll n;
	sfd(n);
	string s;
	cin>>s;
	ll i;
	l li[n];
	for(i=0;i<n;i++){
		if(s[i]=='1')
			li[i].in=1;
		else
			li[i].in=0;
	}
	for(i=0;i<n;i++){
		cin>>li[i].a>>li[i].b;
	}
	ll ans=0,j;
	for(j=0;j<n;j++){
			if(li[j].in==1)
				ans++;
		}
	for(i=1;i<10000;i++){
		for(j=0;j<n;j++){
			if(i==li[j].b){
				li[j].in=(li[j].in+1)%2;
			}
		}
		ll cnt=0;
		for(j=0;j<n;j++){
			if(li[j].in==1)
				cnt++;
			li[j].b+=li[j].a;
		}
		if(cnt>ans)
			ans=cnt;
	}
	cout<<ans<<endl;
}