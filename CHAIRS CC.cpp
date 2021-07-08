//CHAIRS CC

#include<bits/stdc++.h>

#define ll long long int

using namespace std;

int main()
{

ll t;
cin>>t;
while(t--)
{

ll sze;
cin>>sze;

string s;
cin>>s;

ll noof=0;
ll arr[1000001]={0};

for(ll i=0;i<sze;i++)
{
    char ch;
    ch=s[i];

	if(ch=='1')
	{
	arr[noof]=i;
    noof++;
	}
}

int diff[1000001]={0};
int pkp=0;
int currmax=0;
for(int i =1;i<=noof;i++)
{
diff[pkp]=arr[i]-arr[i-1];

if(diff[pkp]>=currmax)
{
currmax=diff[pkp];
}

pkp++;
}


int sum=0;

for(int i=0;i<pkp;i++)
{
sum+=diff[i];
}
sum-=currmax;


cout<<sum<<"\n";

}

return 0;

}
