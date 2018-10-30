// 978 E CF
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

int n, w;

cin>>n>>w;

int data[n];


for(int i = 0 ; i < n ; i++)
	cin>>data[i];

struct start
{
	int greaterthan;
	int lessthan;
}s1;

s1.lessthan = w;
s1.greaterthan = 0;
int curr_cap = 0;

for (int i = 0 ; i < n ; i++)
{
curr_cap += data[i];
// cout<<" curr_cap "<< curr_cap <<"\n";

int temp = w - curr_cap;

if(temp < 0 )
{
	cout<<"0";
	return 0;
}

if(temp < s1.lessthan)
	s1.lessthan = temp;

if(curr_cap < s1.greaterthan)
	s1.greaterthan = curr_cap;

// cout<<s1.greaterthan<<" "<<s1.lessthan<<" \n";
}

// cout<<s1.greaterthan<<" "<<s1.lessthan<<" ";

if(abs(s1.lessthan) < abs(s1.greaterthan))
{
	cout<<"0";
	return 0;

}
cout<<abs(abs(s1.greaterthan) - abs(s1.lessthan)) + 1;




return 0;
}