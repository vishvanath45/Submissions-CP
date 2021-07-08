// 818 C CF


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

ll no_of_sofa;


cin>>no_of_sofa;

ll m, n ;
cin>>m>>n;

ll matrix[m][n]={0};

ll xintercept[n]={0};
ll yintercept[m]={0};

for(int i =0;i<no_of_sofa;i++)
{
	int x,y,z,zz;
	cin>>x>>y>>z>>zz;
	matrix[x-1][y-1]=1;
	xintercept[y-1]++;
	yintercept[x-1]++;

}

for (int i=0;i<m;i++){
	for (int j=0;j<n;j++){
		cout<<matrix[i][j]<<"\t";
	}
	cout<<"\n";
}

int dadasofa=0;

int left,right,top,bottem;

cin>>left>>right>>top>>bottem;


for(int i =0;i<m;i++)
for(int j =0;j<n;j++)
{
	if(matrix[i][j]==1)
	{	
		int counttop=0;
		int countbottem=0;
		int countright=0;
		int countleft=0;


		for(int q=j+1;q<m;q++)
			counttop+=yintercept[q];

		for(int q = j-1;q>=0;q--)
			countbottem+=yintercept[q];

		for(int q = i+1;q<n;q++)
			countright+=xintercept[q];

		for(int q= i-1 ; q>=0;q++)
			countleft+=xintercept[q];


		if(countleft==left&&countright==right&&counttop==top&&countbottem==bottem)
			dadasofa++;
	}

}
	cout<<dadasofa<<"\n";


return 0;

}