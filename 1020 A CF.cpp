// 1020 A CF
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


int a,b;

cin>>a>>b;

string s[a];


for(int i = 0; i < a ; i++)
cin>>s[i];


int sumx = 0;
int sumy = 0;

int pp = 0;

for(int i = 0 ; i < a ; i++)
{
	for(int j = 0 ; j < b ; j++)
	{
		if(s[i][j]=='B')
		{
			sumx += i+1;
			sumy += j+1;
			pp++;
		}
	}
}




cout<<sumx/pp<<" "<<sumy/pp;



return 0;
}