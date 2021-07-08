// 1006 D CF
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

ll sze;

cin>>sze;


string a,b;

cin>>a>>b;

ll i = 0; 
ll j = sze-1;

ll ans = 0;


while(i<j)
{
	set<ll> st;

	st.insert(a[i]-'a');
	st.insert(a[j]-'a');
	st.insert(b[i]-'a');
	st.insert(b[j]-'a');

	// for(auto it = st.begin(); it != st.end(); it++)
	// 	cout<<*it<<" ";

	// cout<<"\n";
	if(st.size() == 4)
	{
		ans+=2;
	}
	else if(st.size() == 3)
	{
		ans+=1;

	}
	if(st.size() == 2)
	{
		
		ll c1 = 1;
		ll c2 = 1;
		ll c3 = 1;
		ll c4 = 1;


		if(a[i] == a[j])
			c1++;

		if(a[i] == b[i])
			c1++;

		if(a[i] == b[j])
			c1++;


		if(a[j] == a[i])
			c4++;

		if(a[j] == b[i])
			c4++;

		if(a[j] == b[j])
			c4++;


		if(b[i] == a[i])
			c2++;

		if(b[i] == a[j])
			c2++;

		if(b[i] == b[j])
			c2++;



		if(b[j] == a[i])
			c3++;

		if(b[j] == a[j])
			c3++;

		if(b[j] == b[i])
			c3++;

		ll maxi = 0;
		maxi = max(c2, c1);
		maxi = max(maxi, c3);
		maxi = max(maxi, c4);

		//cout<<maxi<<"- \n";

		if(maxi == 3)
		{
			ans+=1;
		}



	}


	i++;
	j--;

	st.clear();

}


if(sze%2 == 1)
{
	if(a[sze/2] != b[sze/2])
		{
			ans++;
		}


}

cout<<ans;

return 0;
}