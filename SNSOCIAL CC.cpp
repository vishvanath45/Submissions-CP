//SNSOCIAL CC

#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{

//#ifndef ONLINE_JUDGE
//    // for getting input from input.txt
//    freopen("input.txt", "r", stdin);
//    // for writing output to output.txt
//	freopen("output.txt", "w", stdout);
//#endif


int t;
cin>>t;

while(t--)
{
	int l,r;
	cin>>l>>r;

	int arr[l][r];


	int max_corr[2][250];
	int min_corr[2][250];

	int pkp;
	int mina = 1000000;
	int maxa = -1;
	for(int i =0;i<l;i++)
		for(int j=0;j<r;j++)
		{
			cin>>pkp;
			if(pkp<mina)
				mina = pkp;

			if(pkp>maxa)
				maxa = pkp;
			arr[i][j]=pkp;

		}
        if(mina==maxa)
        cout<<0<<"\n";
        else
        {
		int maxcount=0;
		int mincount=0;

		for(int i =0;i<l;i++)
		for(int j=0;j<r;j++)
		{
			if(arr[i][j]==maxa)
			{
				max_corr[maxcount][0]=i;
				max_corr[maxcount][1]=j;
				maxcount++;
			}
			else if(arr[i][j]==mina)
			{
				min_corr[mincount][0]=i;
				min_corr[mincount][1]=j;
				mincount++;
			}

		}


		int bigbucket= -1;

		for(int i =0 ; i<mincount;i++)
		{

			int currx = min_corr[i][0];
			int curry = min_corr[i][1];


			int min = 999999;

			for(int j = 0 ;j<maxcount;j++)
			{
				if (min>(abs(currx-max_corr[j][0])+abs(curry-max_corr[j][1])))
					min = abs(currx-max_corr[j][0])+abs(curry-max_corr[j][1]);

			}

			if (min>bigbucket)
				bigbucket=min;




		}

		cout<<bigbucket<<"\n";

        }



}

return 0;

}
