// 903 B CF
#include <bits/stdc++.h>
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

ll h1,a1,c1,h2,a2;

cin>>h1>>a1>>c1>>h2>>a2;

ll times = ceil(h2/a1);

times += times/(h1/a2);

cout<< times;

ll k = 1; 
while(1)
{
	if(k%(h1/a2)!= 0)
	{
		cout<<"STRIKE\n";
	}
	else
	{
		cout<<"HEAL\n";
	}
	k++;
}

return 0;
}