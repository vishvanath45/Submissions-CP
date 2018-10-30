// 1015 B CF
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

int sze;
cin>>sze;

string s1, s2;

cin>>s1>>s2;

string s3,s4;
s3 = s1;
s4 = s2;

sort(s3.begin(), s3.end());

sort(s4.begin(), s4.end());

if(s3!=s4)
{
	cout<<-1;
	return 0;
}

int x = sze-1;
int y = sze-1;

std::vector<int> ans;

while(1)
{
	if(s1[x] == s2[y])
	{
		x--;
		y--;
	}
	else
	{
		for(int k = 0 ; k < x ; k++)
		{
			if(s1[k] == s2[y])
			{
				for(int m = k ; m <y ; m++)
				{
					swap(s1[m], s1[m+1]);
					ans.push_back(m+1);
				}
			x--;
			y--;
				break;
			}

		}
	}

	if(x==-1)
		break;
}

cout<<ans.size()<<"\n";

for(int i = 0 ; i < ans.size() ;i++)
	cout<<ans[i]<<" ";


return 0;
}
