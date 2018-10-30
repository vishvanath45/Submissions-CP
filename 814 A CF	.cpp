// 814 A CF	
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

string ggl,apl;

cin>>ggl>>apl;

ll counter=0;

ll pos =0;

while(1)
{
	if(ggl.find(apl,pos)!=string::npos)
	{
		pos = ggl.find(apl,pos);
		pos+=apl.length();
		counter++;
	}
	else
	{
		cout<<counter;
		return 0;

	}
}

return 0;
}