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

ll t;
cin>>t;

while(t--)
{
	ll x,y,m;
	cin>>x>>y>>m;

ll arr[m]={0};

for (int i = 0; i <m; i++)
{
	cin>>arr[i];
	arr[i]-=1;
	/* code */
}

sort(arr,arr+m);

ll house[100]={0};

ll houses_to_cover = x*y;

for(int i =0;i<m;i++)
{
	ll currhouse =arr[i];
	house[currhouse]=1;
	for(int i =currhouse-1;i>=currhouse-1- houses_to_cover+1;i--)
	{
		house[i]=1;
	}

	for(int i =currhouse+1 ;i<=currhouse+1+houses_to_cover-1;i++)
		house[i]=1;

}

ll count =0;
for (int i = 0; i < 100; i++)
{
	/* code */

	if(house[i]==0)
		count++;
}


cout<<count<<"\n";



}











// ll t;
// cin>>t;
// while(t--)
// {

// ll n,k;
// cin>>n>>k;

// ll arr[n];


// ll sum=0;
// for (int i = 0; i < n; i++)
// {
// 	cin>>arr[i];
// 	sum+=arr[i];
// 	/* code */
// }

// if(sum%2!=0)
// {
// 	cout<<"even\n";
// }
// else
// {
// 	if(k==1)
// 		cout<<"odd\n";
// 	else
// 		cout<<"even\n";
// }



// }




// ll t;
// cin>>t;

// while(t--)
// {

// 	ll size;
// 	cin>>size;

// 	ll arr[1005]={0};
	
// 	for (int i = 0; i < size; i++)
// 	{
// 		ll t;
// 		cin>>t;

// 		arr[t-1]=1;
// 	}


// ll count =0;
// for (int i = 0; i <1005; i++)
// {
// 	if(arr[i]>0)
// 		count++;
// 	/* code */
// }
// cout<<count<<"\n";
// }
// ll t;
// cin>>t;

// while(t--)
// {
// 	ll size;
// 	cin>>size;
// 	ll arr[size];
// 	ll sum =0;
// 	for (int i = 0; i < size; ++i)
// 	{
// 		cin>>arr[i];
// 		sum+=arr[i];
// 		 code 
// 	}
// 	ll some = sum/(size-1);

// 	for (int i = 0; i < size; ++i)
// 	{
// 		cout<<some-arr[i]<<" ";
// 		/* code */
// 	}
// 	cout<<"\n";

// }



// ll t;
// cin>>t;

// while(t--)
// {
// 	ll size;
// 	ll a,b;
// 	cin>>size>>a>>b;

// 	ll arr[size]={0};

// 	for(int i =0;i<a;i++)
// 	{
// 		ll k;
// 		cin>>k;
// 		arr[k-1]+=1;
// 	}

// 	// for(int i =0;i<bli++)


// 	for(int i =0;i<b;i++)
// 	{
// 		ll k;
// 		cin>>k;
// 		arr[k-1]+=2;
// 	}



// ll aa=0,ba=0;

// 	for(int i =0;i<size;i++)
// 	{
// 		if(arr[i]==3)
// 			aa++;
// 		else if(arr[i]==0)
// 			ba++;
// }
// cout<<aa<<" "<<ba<<"\n";

// }
// ll t;
// cin>>t;

// while(t--)
// {
// 	ll side ;
// 	cin>>side;
// 	side-=2;
// 	if(side<2)
// 	{
// 		cout<<0<<"\n";
// 	}
// 	else
// 	{
// 		ll times = side/2;
// 		times = times*(times+1)/2;
// 		cout<<times<<"\n";
// 	}
// }








// ll t;
// cin>>t;
// while(t--)
// {
// 	ll size;
// 	cin>>size;
// 	size+=1;

// 	ll arr[size];
// 	for(int i =0;i< size-1; i++)
// 		cin>>arr[i];
// 	arr[size-1]=0;
// 	sort(arr,arr+size,greater<ll>());



// 	ll cost=0;
// 	for(ll i =0 ; i<size;)
// 	{
// 		//cout<<"i is "<<i<<"\n";
// 		cost+=arr[i];
// 		if(i+1<size)
// 		cost+=arr[i+1];
// 		i+=4;
// 	}
// cout<<cost<<"\n";



// }









// ll t;
// cin>>t;
// while(t--)
// {
// 	ll p;
// 	cin>>p;
// ll ans = 1;

// ll a,b;

// for(ll i =0;i<p;i++)
// cin>>a>>b;


// for(ll i = 2 ;i <=p;i++)
// {
// 	ans^=i;
// }
// cout<<ans<<"\n";


// }
// return 0;




// ll t;

// cin>>t;

// while(t--)
// {

// ll m;



// ll rounds;
// cin>>m>>rounds;
// ll arr[m]={0};
// ll pos[rounds]={0};

// for (int i = 0; i < rounds; ++i)
// {
// 	cin>>pos[i];
// 	// pos[i]-=1;
// 	/* code */
// }

// sort(pos,pos+rounds);

// ll pos2[2];
// pos2[0]=pos[0];
// pos2[1]=pos[rounds-1];


// for(int i =0; i < m;i++)
// {
// 	for (int j = 0; j < 2; j++)
// 	{
// 		// cout<<arr[i]<<" "<<abs(arr[i]-pos[j])<<"\n";

// 		if(arr[i]<abs(i-pos2[j]))

// 			arr[i]=abs(i-pos2[j]);
// 	}
// }
// for(int i =0;i<m;i++)
// {
// 	cout<<arr[i]<<" ";
// }
// cout<<"\n";





// }
// ll a,b;
// cin>>a>>b;
// // cout<<ceil(a/2);
// if(b<=ceil((double)a/2))
// {
// 	ll m  = 2*(b)-1;
// 	cout<<m;
// }
// else
// {
// 	ll k =2*(b-ceil((double)a/2));
// 	cout<<k;
// }
// return 0;


// string s;
// cin>>s;

// for(int i =0;i<s.length() ; i++)
// {
// 	if(s[i]=='5')
// 		s[i]='4';
// 	else if(s[i]=='6')
// 		s[i]='3';
// 	else if(s[i]=='7')
// 		s[i]='2';
// 	else if(s[i]=='8')
// 		s[i]='1';
// 	else if(s[i]=='9'&&i!=0)
// 		s[i]='0';


// }
// cout<<s;

// string s;
// cin>>s;


// set <char>stk;

// for(int i = 0 ;i<s.length();i++)
// {
// 	stk.insert(s[i]);
// }

// if(stk.size()%2==0)
// {
// 	cout<<"CHAT WITH HER!";

// }
// else
// cout<<"IGNORE HIM!";
// return 0;


 
// ll a,b;
// cin>>a>>b;


// if(b==10)
// {
// 	if(a==1)
// 	{	cout<<-1;
// 		return 0;
// 	}
// 	else
// 	{
// 		cout<<1;
// 		for(int k = 0; k<a-1;k++)
// 			cout<<0;
// 		return 0;
// 	}

// }
// for(int i =0;i< a;i++)
// cout<<b;
// return 0;


// int arr[10] = {0};

// arr[0] = 2;
// arr[1] = 7;
// arr[2] = 2;
// arr[3] = 3;
// arr[4] = 3;
// arr[5] = 4;
// arr[6] = 2;
// arr[7] = 5;
// arr[8] = 1;
// arr[9] = 2;

// string s;
// cin>>s;

// int a  = s[0]-'0';
// int b  = s[1]-'0';
// // cout<<a<<" "<<b;

// cout<<arr[a]*arr[b];
// return 0;













// ll a,b;
// cin>>a>>b;


// ll i;
// for( i =1;i<=10;i++)
// {
// 	ll xx = a*i;
// 	ll y = xx%10;
// 	if(y==0||y==b)
// 	{
// 		break;
// 	}
// }
// cout<<i;
// return 0;


// ll t;

// ll pos;
// cin>>t>>pos;

// ll arr[t];

// for(int i =0;i<t;i++)
// arr[i]=-1;


// vector <ll> position;
// vector <ll> height;
// for(int i =0;i<pos;i++)
// {
// 	ll l,m;
// 	position.push_back(l-1);
// 	height.push_back(m);
// 	// cin>>l>>m;
// 	// arr[l-1]=m;
// }

// int currbegin = 0;
// int previous = -1;
// vector <ll> vec;

// // for first

// ll begin;
// ll end;

// for(int i =0 ; position.size()<t ; i++)
// {
// 	if(height[i]>=0)
// 	{
// 		ll diff_in_pos = position[i]-currbegin;
// 		ll maxheight = height[i]+diff_in_pos;
// 		vec.push_back(maxheight);
// 		begin = position[i];
// 		break;
// 	}
// }

// // for last
// for(int i =position.size()-1;i>=0;i--)
// {
// 	if(height[i]>=0)
// 	{
// 		ll diff_in_pos = t-position[i]-1;
// 		ll maxheight = height[i]+diff_in_pos;
// 		vec.push_back(maxheight);
// 		end = position[i];
// 		break;
// 	}
// }

// // cout<<begin<<" "<<end<<"\n";

// ll last_max = arr[begin];
// ll last_maxpos = begin;



// for(int i = begin+1; i<=end ; i++)
// {

// 	if(arr[i]>=0)
// 	{
// 		ll diff_in_pos = i-last_maxpos;

// 		if(arr[last_maxpos]+diff_in_pos<arr[i]||arr[last_maxpos]-diff_in_pos>arr[i])
// 		{
// 			cout<<"IMPOSSIBLE";
// 			return 0;
// 		}

// 		ll p = diff_in_pos-1;
// 		p-=abs(last_max-arr[i]);
// 		//cout<<p<<"asdad";
// 		if(p%2==1)
// 		{
// 			p=p/2;
// 			p+=1;
// 		}
// 		else
// 		{
// 			p/=2;
// 		}
// 		ll ss = arr[i];
// 		p+=max(last_max,ss);
// 		last_max = arr[i];
// 		last_maxpos = i;
// 		vec.push_back(p);

// 	}

// }

// sort(vec.begin(), vec.end());

// cout<<vec[vec.size()-1];
// return 0;

// string s;
// cin>>s;

// string s3 = "CODEFORCES";
// // string str2 = s2.substr (3,5);

// // cout<<str2;


// for(int i =0;i< s.length();i++)
// {
// 	for(int j= i;j<s.length();j++)
// 	{	
// 		//cout<<"adadasdasdd";
// 		int t,k;

// 		string spp = "";

// 		for(int aa =0;aa<i;aa++)
// 		{
// 			spp+=s[aa];
// 		}


// 		for(int aa =j+1;aa<s.length();aa++)
// 		{
// 			spp+=s[aa];
// 		}

// 		if(spp == s3)
// 		{
// 			cout<<"YES";
// 			return 0;
// 		}
// 	}
// }


// // cout<<"saaad";


// cout<<"NO";
// return 0;


// int j=0;
// for(int i =0;i< s.length();i++)
// {
// 	if(s[i]==s2[j])
// 	{
// 		j++;
// 	}
// }

// if(j==10)
// 	cout<<"YES";
// else
// 	cout<<"NO";

// return 0;




// ll t;

// cin>>t;


// int flag1 = 0;
// int flag2 = 0;

// ll p1=t;
// ll p2=t;

// int sss =0;

// int zeroin1 =0;
// int zeroin2 =0;

// while(flag1==0)
// {
// p1+=1;
// ll xx =abs(p1);

// while(xx!=0)
// {
	

// 	if(xx%10==8)
// 	{
// 		flag1=1;
// 		break;
// 	}
// 	xx/=10;
// 	if(flag1)
// 		break;


// }

// if(flag1)
// break;


// }



// while(flag2==0)
// {
// p2-=1;
// ll xx =p2;

// while(xx!=0)
// {
// 	if(xx%10==8)
// 	{
// 		flag2=1;
// 		break;
// 	}
// 	xx/=10;
// }

// if(flag2)
// break;


// }

// ll ans = abs(p1-t);
// cout<<ans;




// ll t;
// cin>>t;

// ll arr[t];

// for(ll i=0;i<t;i++)
// {
// 	cin>>arr[i];
// }


// ll mini = 10e9;
// ll maxi = 0;

// for(ll i=0;i<t;i++)
// {
// 	if(mini>arr[i])
// 		mini = arr[i];
// 	if(maxi<arr[i])
// 		maxi = arr[i];
// }

// ll count =0;


// for(ll i=0;i<t;i++)
// {
// 	if(arr[i]>mini&&arr[i]<maxi)
// 		count++;
// }

// cout<<count;







// ll a,b;
// cin>>a>>b;
// int pp = abs(a-b);

// if(a==0&&b==0)
// 	{cout<<"NO";
// return 0;
// }


// if(pp>1)
// {
// 	cout<<"NO";
// }
// else
// 	cout<<"YES";
// return 0;




// ll t;
// cin>>t;

// string s[t];

// for(int i =0;i<t; i++)
// 	cin>>s[i];

// int flag =0;

// for(int i =0; i<t;i++)
// {

// 	for(int j=0;j<4;j++)
// 	{
// 		if(s[i][j]=='O'&&s[i][j+1]=='O')
// 		{
// 			flag=1;
// 			s[i][j]='+';
// 			s[i][j+1]='+';

			

// 		}
// 		if(flag)
// 			break;
// 	}
// 			if(flag)
// 			break;

// }


// if(!flag)
// {
// 	cout<<"NO";
// }
// else
// {
// 		cout<<"YES\n";
// 	for(int i =0;i<t;i++)
// 		cout<<s[i]<<"\n";
// }


// ll t;
// cin>>t;

// vector< pair<int,int> > vecpr;

// int a,b;

// int arr[t]={0};

// for(int i=0;i<t; i++)
// {
// cin>>a;
// vecpr.push_back(make_pair(a,i));
// }
// sort(vecpr.begin(), vecpr.end(),oop);


// int prevval;
// int prearank;
// for(int i =0; i<vecpr.size(); i++)
// {

// if(i==0)
// {
// 	arr[vecpr[i].second]=1;
// 	prevval = vecpr[i].first;
// 	 prearank=1;
// }
// else
// {
// 	if(vecpr[i].first!=prevval)
// 	{
// 		arr[vecpr[i].second]=i+1;
// 		prevval = vecpr[i].first;
// 		prearank = i+1;
// 	}
// 	else
// 	{
// 		arr[vecpr[i].second]=prearank;
// 	}
// }




// }

// for(int i =0;i<t; i++)
// cout<<arr[i]<<" ";

// return 0;





// ll t;
// cin>>t;




// int flag =0;

// while(flag!=1)
// {
// int hash[10]={0};
// t++;
// int pkp = t;

// while(pkp!=0)
// {
// 	hash[pkp%10]=1;
// 	pkp=pkp/10;
// }

// int ppp=0;
// for(int i =0;i<10; i++)
// {
// 	if(hash[i]==1)
// 	{
// 		ppp++;
// 	}
// }
// if(ppp==4)
// {
// 	flag=1;
// }

// }



// cout<<t;








// ll t;
// cin>>t;
// int arr[t][t]={0};
// int sum[t][t]={0};

// for(int i =0;i<t; i++)
// {
// 	sum[0][i]=1;
// 	sum[i][0]=1;
// 	arr[0][i]=1;
// 	arr[i][0]=1;
// }

// for(int i =1; i<t;i++)
// {
// 	for(int j =1; j<t; j++)

// 	{
// 		arr[i][j]=arr[i-1][j]+arr[i][j-1];

// 		// IF(	)

// 	}
// }

// for(int i =0; i<t;i++)
// {
// 	for(int j =0; j<t; j++)
// 		cout<<arr[i][j]<<" ";
// 	cout<<"\n";
// }





// cout<<arr[t-1][t-1];
return 0;

// string s;
// cin>>s;

// int pos =0;

// for(int i =0;i< s.length() ;i++)
// {
// 	if(s[i]>='a'&&s[i]<='z')
// 	{
// 		pos=i;
// 	}
// }

// if(pos ==0)
// {
// for(int i =0;i< s.length() ;i++)
// {
// 	if(isupper(s[i]))
// 	{
// 		s[i]=tolower(s[i]);
// 	}
// 	else
// 	{
// 		s[i]=toupper(s[i]);
// 	}
// }
// }

// cout<<s;
// return 0;

// int a,b;
// cin>>a>>b;

// int aa = max(a,b);
// int bb = min(a,b);

// cout<<bb<<" ";

// int rem = a-b;
// rem = rem/2;

// cout<<rem;

// return 0;

// string s;
// cin>>s;

// string ls = "#";
// string rs = "#";

// int flag=0;

// for(int i =0;i<s.length(); i++)
// {

// if(s[i]=='|')
// {
// 	flag=1;
// }
// else
// {
// 	if(flag==1)
// 	{
// 		rs+=s[i];
// 	}
// 	else
// 	{
// 		ls+=s[i];
// 	}
// }
// }


// string s2;
// cin>>s2;


// for(int i=0; i<s2.length() ;i++)
// {

// if(rs.length()<ls.length())
// {
// 	char ch = s2[i];
// 	rs+=ch;
// 	// cout<<"!";

// }
// else
// {
// 	char ch = s2[i];
// 	ls+=ch;
// 	// cout<<"@";
// }

// }

// if(rs.length()!=ls.length())
// {
// 	printf("Impossible\n");
// 	return 0;	
// }


// for(int i =1; i< ls.length(); i++)
// cout<<ls[i];
// cout<<"|";
// for(int i =1; i< rs.length(); i++)
// cout<<rs[i];

// int t;

// ll arr[3005]={0};

// cin>>t;

// for(int i =0; i< t; i++)
// {
// 	ll s;
// 	cin>>s;
// 	arr[s]=1;
// }

// for(int i =1; i<=3001;i++)
// {
// 	if(arr[i]==0)
// 	{
// 		cout<<i;
// 		return 0;

// 	}
// }

// ll t;
// cin>>t;
// ll a[t];
// ll b[t];

// for(int i =0;i < t; i++)
// 	cin>>a[i];


// for(int i =0;i < t; i++)
// 	cin>>b[i];

// ll sum1=0;
// ll sum2=0;

// for(int i =0;i < t; i++)
// {
// 	sum1|=a[i];
// 	sum2|=b[i];
// }
// cout<<sum1+sum2;

return 0;
}	