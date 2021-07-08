//SAMKNI CC

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;

	while(t--)
	{
		int n,m;
		cin>>n;
		cin>>m;

		int type,id,k;
		string arr[10001];
		int freq[1000][100]={0};
		int aesc[1000][100]={0};

        string s2;
		for(int i=0;i<n;i++)
			{cin>>s2;


			int l2=s2.length();

				for(int q=0;q<l2;q++)
				{
					int pp=s2[q]-'a';
					freq[i][pp]++;
				}
				sort(freq[i],freq[i]+26,std::greater<int>());
				int pkp=0;

				for(int xx=0;xx<26;xx++)
				{
					if(freq[i][xx]>0)
					{
						aesc[i][pkp]=freq[i][xx];
						pkp++;
					}

				}
				sort(aesc[i],aesc[i]+pkp);

			}


		for(int i=0;i<m;i++)
		{

			cin>>type;
			if(type==1)
			{
				cin>>id;
				int pos;
				cin>>pos;


				cout<<freq[id-1][pos-1]<<"\n";
			}
			else
			{
				cin>>id;
				int pos;
				cin>>pos;

//1 1 10
//abbbccccccddd


					cout<<aesc[id-1][pos-1]<<"\n";

			}





		}
	}
	return 0;


}
