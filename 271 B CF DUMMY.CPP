#include<bits/stdc++.h>
using namespace std;

vector<int> prime;

void createsieve(long long int n)
{
	long long int p=0;
	long long int i=0;

	for(p=2;p*p<=n;p++)
		{
			if(prime[p]==true)
			{
				for(i=2*p;i<=n;i+=p)
					prime[i]=false;
			}
		}
}

long long int howfar(int n)
{
long long int m;
m=n;

while(prime[m]==false)
{m++;
}
return m-n;
}
int main()
{
	long long int i=0;
	long long int j=0;

	for(i=1;i<=1000000;i++)
		prime.push_back(true);

	createsieve(1000000);

	prime[1]=false;
	prime[0]=false;

	long long int n,m;

	cin >> n >> m;

	vector<vector <long long int> > matrix;

	for(i=0;i<n;i++)
		{
			vector<long long int> temp;
			for(j=0;j<m;j++)
				{
					long long int item;
					cin >> item;
					temp.push_back(item);
				}
			matrix.push_back(temp);
		}

	long long int min_row=100001;

	for(i=0;i<n;i++)
		{
			long long int row_moves=0;
			for(j=0;j<m;j++)
				{
					if(prime[matrix[i][j]])
						continue;
					else
						row_moves+=(howfar(matrix[i][j]));

				}

			if(row_moves<min_row)
				min_row=row_moves;

		}

	long long int min_col=100001;

	for(j=0;j<m;j++)
		{
			long long int col_moves=0;
			for(i=0;i<n;i++)
				{
					if(prime[matrix[i][j]])
						continue;
					else
						col_moves+=(howfar(matrix[i][j]));

				}

			if(col_moves<min_col)
				min_col=col_moves;

		}

	if(min_row<min_col)
		cout << min_row;
	else
		cout << min_col;

	return 0;

}
