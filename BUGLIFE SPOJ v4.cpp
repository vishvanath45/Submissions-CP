// BUGLIFE SPOJ v4
// finally solved
// yay

#include<bits/stdc++.h>
using namespace std;

int visited[2010]= {0};
int current_length[2010]={0};
vector <int> v[2010];

int DFS(int i, int uptolength)
{	int flag =0;
	// cout<<i+1<<"*\n";
	for(vector<int>::iterator it =v[i].begin(); it<v[i].end() ; it++)
	{
		if(visited[*it]!=1)
		{
            visited[*it]=1;

             if(current_length[*it]==0)
           		current_length[*it]=uptolength+1;
			// cout<<current_length[*it]<<"!!!\n";


			flag = DFS(*it,current_length[*it]);

		}
		else 
		{
			if(abs(current_length[*it]-uptolength)%2==0&&abs((current_length[*it]-uptolength))>0)
			{
				return -1;
			}

		}

		if(flag==-1)
			break;
	}

	if(flag == -1)
		return -1;

	return 0;
}

int main()
{



	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
    #endif

	int t;
	cin>>t;
	int ff;
	int flag =0;
	for(ff = 0 ; ff < t ; ff++)
	{
	flag =0 ;
	int no_of_nodes=0;
	int links = 0;
	cin>>no_of_nodes>>links;

	int p,q;

	for(int i =0; i< no_of_nodes; i++)
	{
		visited[i]=0;
		current_length[i]=0;
		v[i].clear();
	}

	for(int i =0; i < links ; i++)
	{
		cin>>p>>q;
		v[p-1].push_back(q-1);
		v[q-1].push_back(p-1);
	}

	for(int i =0; i<no_of_nodes; i++)
	{
		if(visited[i]==0)
		{
			visited[i]=1;
			flag = DFS(i,current_length[i]);
		}
		if(flag ==-1)
			break;
	}
		// for(int i =0 ; i< no_of_nodes; i ++)
		// 	cout<<current_length[i]<<" @@ "; 

	if(flag == -1)
		cout<<"Scenario #"<<ff+1<<":\nSuspicious bugs found!\n";
	else 
		cout<<"Scenario #"<<ff+1<<":\nNo suspicious bugs found!\n";
	}

	return 0;
}