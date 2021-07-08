// PALINGAM CC

#include<bits/stdc++.h>

using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

int t;
cin>>t;

while(1)
{

	pkp:
	t--;
	if(t<0)
		break;
	string a,b;
	int hashA[26],hashB[26];

	memset(hashB,0,sizeof(hashB));
	memset(hashA,0,sizeof(hashA));
	cin>>a>>b;

	int length = a.length();

	for(int i =0; i< length; i++)
	{
		hashA[a[i]-'a']++;
		// presenceA[a[i]-'a']=1;
		hashB[b[i]-'a']++;
		// presenceB[b[i]-'a']=1;
	}

//---------
	for(int i =0; i< 26; i++)
	{
		// cout<<hashA[i]<<" ";
	}


// cout<<"\n";
	for(int i =0; i< 26; i++)
	{
		// cout<<hashB[i]<<" ";
	}


int extrainA=0;
int extrainB=0;

for(int i =0 ; i<26 ; i++)
{
	if(hashA[i]>0&&hashB[i]==0)
	{
		extrainA++;
	}
	else if(hashB[i]>0&&hashA[i]==0)
	{
		extrainB++;
	}
}


if(extrainA==0)
{
	cout<<"B\n";
	goto pkp;
}

if(extrainB==0)
{
	cout<<"A\n";
	goto pkp;
}


for(int i =0 ; i< 26 ; i++)
{
	if(hashA[i]>=2&&hashB[i]==0)
	{
		cout<<"A\n";
		goto pkp;
	}
}

cout<<"B\n";
goto pkp;





}

return 0;
}









