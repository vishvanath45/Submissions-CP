// Gcd Euclidian and extended

#include<bits/stdc++.h>

using namespace std;

int euclidianGCD(int a, int b)
{
	if (b==0)
		return a;
	else 
		return GCD(b, a%b);
	// time complaxity is log(max(a,b));
}


int extendedEuclidian(int a, int b)


int main()
{
#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input_codemonk.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output_codemonk.txt", "w", stdout);
#endif

    int a,b,ans;
    cin>>a>>b;

    // if(a>b)
    	ans = GCD(a,b);
    // else
    // 	ans = GCD(b,a);

    cout<<ans;
    return 0;
}