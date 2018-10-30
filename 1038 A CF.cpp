// 1038 A CF
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mp make_pair
#define M (ll)(1e9+7)

int arr[26];

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);	

string s;

int l, k;
cin>>l>>k;

cin>>s;


for(int i = 0; i < l ;i++)
{
	arr[s[i]-'A']++;
}

int mini = arr[0];


for(int i = 0 ; i < k ;i++)
{
	if(arr[i] < mini)
	{
		mini = arr[i];
	}
}

if(mini == 0)
{
	cout<<mini;
	return 0;
}
else
{
	cout<<mini*k;
	return 0;
}




return 0;
}