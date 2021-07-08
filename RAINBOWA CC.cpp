// RAINBOWA CC

#include<bits/stdc++.h>
using namespace std;


int main()
{
//ios_base::sync_with_stdio(0);
//#ifndef ONLINE_JUDGE
    // for getting input from input.txt
   // freopen("input.txt", "r", stdin);
    // for writing output to output.txt
 //   freopen("output.txt", "w", stdout);
//#endif

int t;
int kk;

cin>>t;

vector<int> standard;

standard.push_back(1);
standard.push_back(2);
standard.push_back(3);
standard.push_back(4);
standard.push_back(5);
standard.push_back(6);
standard.push_back(7);
standard.push_back(6);
standard.push_back(5);
standard.push_back(4);
standard.push_back(3);
standard.push_back(2);
standard.push_back(1);

while(t--)
{
cin>>kk;

int arr[kk];

for(int i =0;i<kk;i++)
cin>>arr[i];


int currmaxx=1;

vector<int> vcount;
vector<int> vcat;

vcat.push_back(arr[0]);
for(int i=1;i<kk;i++ )
{
	if(arr[i]==arr[i-1])
	{
		currmaxx++;
	}
	else
	{	vcat.push_back(arr[i]);
		vcount.push_back(currmaxx);
		currmaxx=1;
	}
}
vcount.push_back(currmaxx);

// for(int i =0;i<vcat.size();i++)
// 	cout<<vcat[i]<<"**";
// 	cout<<"\n";

int flag=0;
int flag2=0;

for(int i =0;i<vcat.size();i++)
{
	if(vcat[i]!=standard[i])
	{
		flag=1;
		break;
	}
}
if(flag==1)
{
	cout<<"no\n";
}
else
{
	for(int i =0 ;i<6;i++)
	{
		if(vcount[i]!=vcount[12-i])
		{
			flag2=1;
			break;
		}
	}
	if(flag2==1)
	{
		cout<<"no\n";
	}
	else
	{
		cout<<"yes\n";
	}


}


}

return 0;

}
