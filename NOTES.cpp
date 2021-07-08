//check whether a number is power of two.
bool ispowoftwo(int x)
{
	return (!(x&(x-1)));
}

#include<bits/stdc++.h>

using namespace std;


// count no. of 1 in binary rep of number
// int countone(int x)
// {
// 	count=0;

// 	while(n)
// 	{
// 		n = n&(n-1);
// 		count++;

// 	}

// 	return count;

// }



//---------------------------
// posiible subset of all sets.

int possible_subset(string A)
{
	int n = A.length();

	for (int i =0 ;i<(1<<n);++i)
	{
		for(int j =0 ; j<n ; ++j )
		{
			if(i&(1<<j))
				cout<<A[j];
			
		}
		cout<<"\n";
	}

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

string ch;
cin>>ch;


possible_subset(ch);


return 0;

}