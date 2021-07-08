#include<bits/­stdc++.h>
using namespace std;
#define ll long long int
ll a[26],A[26],one[10];
int main()
{

#ifndef ONLINE_JUDGE
// for getting input from input.txt
freopen("input.txt",­ "r", stdin);
// for writing output to output.txt
freopen("output.txt"­, "w", stdout);
#endif

ll t,n,i,j,k,l;
cin>>n;
string s;
cin>>s;
l=s.size();
for(i=0;i<l;i++)
{
if(s[i]>=65&&s[i]<=9­0)
{
A[s[i]-'A']++;
}
else if(s[i]>=48&&s[i]<=5­7)
{
one[s[i]-'0']++;
}
else
{
a[s[i]-'a']++;
}
}

char odd[64];
k=0;
for(i=0;i<26;i++)
{
if(a[i]%2)
{
odd[k++]=i+'a';
a[i]--;
}
if(A[i]%2)
{
odd[k++]=i+'A';
A[i]--;
}
}
for(i=0;i<10;i++)
{
if(one[i]%2)
{
odd[k++]=i+'0';
one[i]--;
}

}

ll p=(n-k);
stack<pair<char,ll> >st;
for(i=0;i<26;i++)
{
st.push(make_pair(i+­'a',a[i]));
st.push(make_pair(i+­'A',A[i]));
if(i<=9)
{
st.push(make_pair(i+­'0',one[i]));
}

}
if(k==0)
{
cout<<1<<"\n";
string ft,thd;

for(j=0;j<(n/2);j++)
{
pair<char,ll>pp;
pp=st.top();
if(pp.second!=0)
{
ft=ft+pp.first;
thd=thd+pp.first;
st.pop();
st.push(make_pair(pp­.first,pp.second-2))­;
}
else
{
st.pop();
j--;
}
}
reverse(thd.begin(),­thd.end());
cout<<(ft+thd)<<" ";
return 0;
}

ll len=p/k;
if(p%k==0&&(len%2!=1­))
{
char ans[400011];
cout<<k<<"\n";
for(i=0;i<k;i++)
{
string ft,sec,thd;
sec=sec+odd[i];
for(j=0;j<(len/­2);j++)
{
pair<char,ll>pp;
pp=st.top();
if(pp.second!=0)
{
ft=ft+pp.first;
thd=thd+pp.first;
st.pop();
st.push(make_pair(pp­.first,pp.second-2))­;
}
else
{
st.pop();
j--;
}
}
reverse(thd.begin(),­thd.end());
cout<<(ft+sec+thd)<<­" ";
}
}
else
{
cout<<n<<"\n";
for(i=0;i<n;i++)
cout<<s[i]<<" ";
}

return 0;

}