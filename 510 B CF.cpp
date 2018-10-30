// 731A CF

#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int visited[28];
int counterrr[26];
vector<char> v[26];
std::vector<pair <ll,ll>> vecpair;
std::vector<char> v2;



ll finalvisited[26];

void chichi()
{
	for (int i = 0; i < 26; ++i)
	{
		/* code */
	
	visited[i]=0;
}
}
	int flag =0;
int dfs( int n1,int i)
{
if(flag)
	return 0;

	// char ch = n1+'a';
	// cout<<ch<<"\n";
		visited[n1]=1;

		ll ss=0;
        for(vector <char>::iterator pp = v[n1].begin() ; pp!=v[n1].end(); pp++)
        {

            if(visited[*pp]!=1)
            {
             ss = dfs(*pp,i);
            }
            else
            {
            	// cout<<"Impossible\n";

            	flag=1;
            }
        }
        // v2.push_back(n1+'a');
        return ss+1;
}

void dfs2( int n1)
{
	char ch = n1+'a';
	cout<<ch;
		finalvisited[n1]=1;

		ll ss=0;
        for(vector <char>::iterator pp = v[n1].begin() ; pp!=v[n1].end(); pp++)
        {
            if(finalvisited[*pp]!=1)
            {
            dfs2(*pp);
            }
        }
        v2.push_back(n1+'a');
        return ;
}



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

string words[t];

for( ll i = 0 ; i <t; i++)
cin>>words[i];


char preword = words[0][0];

for(ll i = 1; i <t ; i++)
{
ll pkp = 0;

	for(int j = 0 ; j < min(words[i].size(),words[i-1].size());j++)
	{
		if(words[i][j]!=words[i-1][j])
		{
			ll sze = v[words[i-1][j]-'a'].size();

			ll toinsert = words[i][j]-'a';

			ll present =0;

			for(ll jj = 0; jj< sze; jj++)
			{
				if(v[words[i-1][j]-'a'][jj] == toinsert)
					present =1;

			}
			if(!present)
			{
			v[words[i-1][j]-'a'].push_back(words[i][j]-'a');
			}
			pkp = 1;
			break;
			
		}
	}
	if(pkp==0)
	{
		if(words[i].size()<words[i-1].size())
		{
			cout<<"Impossible";
			return 0;
		}

	}
}

// ll startpos = words[0][0]-'a';

// dfs(startpos);

for(int i=0;i<26;i++)
    {
    // if(visited[i]==0)
    	chichi();
        {ll counter = dfs(i,0);
        	// counterrr[i]=counter;
        	vecpair.push_back(make_pair(counter,i));

        }

    }


if(flag)
{
	cout<<"Impossible";
	return 0;
}

sort(vecpair.begin(),vecpair.end());



for (int i = vecpair.size()-1; i >=0; i--)
{
	if(finalvisited[vecpair[i].second]==0)
	{
		// chichi();
		// cout<<vecpair[i].second<<" **";
		dfs2(vecpair[i].second);


	}

	/* code */
}



// for (int i = 0; i < 26; ++i)
// {
// 	cout<<counterrr[i]<<" ";
// }

 // for (int i = 0; i < v2.size(); ++i)
 // {
 // 	/* code */
 // 	cout<<v2[i]<<" *";
 // }

return 0;
}