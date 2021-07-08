// Binary exponantiation

#include<bits/stdc++.h>

using namespace std;


int Binaryexponantiation(int x , int n)
{
	if(n==0)
		return 1;
	if(n==1)
		return x;
	if(n%2==0)
		return Binaryexponantiation(x*x,n/2);
	else
		return x*Binaryexponantiation(x*x,(n-1)/2);
}


int main()
{
#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input_codemonk.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output_codemonk.txt", "w", stdout);
#endif

    long long int xx;
    cin>>xx;
    long long int pow;
    cin>>pow;

    cout<<Binaryexponantiation(xx,pow);


    return 0;

}