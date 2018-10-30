//230 B CF

#include<bits/stdc++.h>

using namespace std;
#define ll long long int
double sqrt2(double x) {
    if (x <= 0)
        return 0;       // if negative number throw an exception?
    int exp = 0;
    x = frexp(x, &exp); // extract binary exponent from x
    if (exp & 1) {      // we want exponent to be even
        exp--;
        x *= 2;
    }
    double y = (1+x)/2; // first approximation
    double z = 0;
    while (y != z) {    // yes, we CAN compare doubles here!
        z = y;
        y = (y + x/y) / 2;
    }
    return ldexp(y, exp/2); // multiply answer by 2^(exp/2)
}

inline bool isprime( int number )
{
 if ( ( (!(number & 1)) && number != 2 ) || (number < 2) || (number % 3 == 0 && number != 3) )
  return (false);

 for( int k = 1; 36*k*k-12*k < number;++k)
  if ( (number % (6*k+1) == 0) || (number % (6*k-1) == 0) )
   return (false);
  return true;
 }


int main()
{

	ll t;
	cin>>t;

	ll n;
	double pkp;
	while(t--)
	{
		cin>>n;

		pkp= sqrt2(n);

		if(pkp!=ceil(pkp))
			cout<<"NO\n";
		else
			{	if(isprime(pkp))
				cout<<"YES\n";
				else
				cout<<"NO\n";

	}
	}

return 0;
}
