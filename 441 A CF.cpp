//  450 A CF
#include<bits/stdc++.h>
using namespace std;
#define ll long long int  


int main()
{
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
    #endif
ios_base::sync_with_stdio(false);
cin.tie(NULL);
	

ll t;

cin>>t;


while(t--)
{
	ll size;
	cin>>size;

	ll arr[size];

	for(ll i = 0 ;i <size ; i++)
		cin>>arr[i];

	ll flag =0;
	for(ll i = 0 ;i <size-1 ; i++)
	{
		if(arr[i]>arr[i+1])
		{
			swap(arr[i],arr[i+1]);
			i++;
		}
	}
		for(ll i = 0 ;i <size-1 ; i++)
	{
		if(arr[i]>arr[i+1])
			{flag=1;
				break;
			}
		}



	if(flag)
		cout<<"NO\n";
	else
		cout<<"YES\n";


}



// while(t--)
// {
// ll word,query;
// cin>>word>>query;

// string arr[word];

// for(ll i =0;i<word;i++)
// cin>>arr[i];

// set<string> stk;
// while(query--)
// {
// 	ll size;

// 	cin>>size;
// 	while(size--)
// 	{
// 		string s2;
// 		cin>>s2;
// 		stk.insert(s2);
// 	}
// }




// for(ll i =0;i<word;i++)
// {
// 	if(stk.count(arr[i])>0)
// 	{
// 		cout<<"YES"<<" ";
// 	}
// 	else
// 	{
// 		cout<<"NO"<<" ";
// 	}
// }
// cout<<"\n";






	// string s1,s2;
	// cin>>s1>>s2;

	// int flag=0;


	// for(ll i = 0 ;i<s1.length() ; i++)
	// {
	// 	if(s1[i]==s2[i]||s1[i]=='?'||s2[i]=='?')
	// 	{
	// 	}
	// 		else
	// 			{flag=1;
	// 				break;
	// 			}
	// 	}
	

	// if(flag)
	// 	cout<<"No\n";
	// else
	// 	cout<<"Yes\n";
// }





// while(t--)
// {
// 	ll a,b,c;
// 	cin>>a>>b>>c;
// 	ll house_search = b*c;
// 	ll arr2[a];
// 	ll arr[100]={0};

// 	for(ll i =0;i<a ;i++)
// 	{
// 		ll ppp;
// 		cin>>ppp;
// 		arr2[i]=ppp-1;


// 		arr[ppp-1]=1;

// 		ll startpos = ppp-1 - house_search;
// 		ll endpos = ppp-1 + house_search;

// 		if(startpos <0)
// 			startpos =0;
// 		if(endpos>=100)
// 			endpos = 99;

// 		for( ll i = startpos ; i <= endpos ;i++)
// 			arr[i]=1;
// 	}

// 	ll counter = 0;

// 	for (int i = 0; i <100; i++)
// 	{
// 		if(arr[i]==0)
// 			counter++;
// 		/* code */
// 	}

// 	cout<<counter<<"\n";
// }


















// ll n,k,m;
// cin>>n>>k>>m;

// vector<ll> vec;

// for(ll k = 0; k<n ; k++)
// {
// 	ll pp;
// 	cin>>pp;
// 	vec.push_back(pp);
// }

// sort(vec.begin(),vec.end());

// ll arr[n]={0};


// for(int i =0;i<n;i++)
// {
// ll count =0;
// 	for(int j =i+1 ; j<n; j++)
// 	{
// 		if((arr[j]-arr[i])%m==0)
// 			{
// 				count++;
// 			}
// 	}
// arr[i]=count;
// if(count>=k)
// break;

// }




// multiset <int, greater <int> > ms;

// for(ll i =0 ; i<n ; i++)
// {
// 	ll pp;
// 	cin>>pp;
// 	ms.insert(pp);
// }


// ll n;
// cin>>n;

// ll powten = log(n)/log(10);

// ll sumofnos=0;

// ll startpos = n - powten*10-10;
// if(startpos < 0)
// 	startpos =0;

// ll endpos = pow(10,powten+1);

// if(endpos > 10e9)
// 	endpos = 10e9l;

// std::vector<ll > v;
// ll counter =0;
// for(ll i = startpos ; i<=n;i++)
// {

// sumofnos = 0;
// ll n2 = i;
// while(n2)
// {
// sumofnos+=n2%10;
// n2/=10;
// }

// sumofnos+=i;


// if(sumofnos == n)
// 	{counter++;
// 	v.push_back(i);
// 	}
// 	else
// 	{
// 		// i+=abs(sumofnos-n);
// 	}

// }
// cout<<counter<<"\n";

// for(ll i = 0;i <v.size() ; i++)
// cout<<v[i]<<"\n";

// ll t;
// cin>>t;

// ll a,b,c;

// cin>>a>>b>>c;


// ll mini = min(min(a,b),c);

// if(mini==a||mini==b)
// {
// 	ll path = (t-1)*mini;
// 	cout<<path;
// }
// else
// {
// 	if(t==1)
// 		cout<<0;
// 	else
// 	{
// 		if(t==2)
// 			cout<<min(a,b);
// 		else
// 		{
// 			ll path = min(a,b);
// 			path += (t-2)*mini;
// 			cout<<path;

// 		}
// 	}
// }






// ll times=1;


// if(t==1 )
// 	{cout<<0<<"\n";
// return 0;
// }
// ll curr_at =1;

// ll path =0;
// while(times<=t)
// {
// 	if(curr_at==1)
// 	{
// 		if(a<c)
// 		{
// 			curr_at = 2;
// 			path+=a;
// 		}
// 		else
// 		{
// 			curr_at =3;
// 			path+=c;
// 		}
// 	}
// 	else if(curr_at==2)
// 	{
// 		if(a<b)
// 		{
// 			curr_at = 1;
// 			path+=a;
// 		}
// 		else
// 		{
// 			curr_at =3;
// 			path+=b;
// 		}
// 	}
// 	else if(curr_at==3)
// 	{
// 		if(b<c)
// 		{
// 			curr_at = 2;
// 			path+=b;
// 		}
// 		else
// 		{
// 			curr_at =1;
// 			path+=c;
// 		}
// 	}
// 	times++;
// // cout<<path<<"\n";
// // cout<<"hash";

// }
// cout<<path;


return 0;
}