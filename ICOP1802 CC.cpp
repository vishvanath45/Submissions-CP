// ICOP1802 CC

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mp make_pair
#define M (ll)(1e9+7)
 

ll arr[10000];


int printPascal()
{
	ll pkp = 1;
  for (ll line = 1; line <= 100; line++)
  {
    ll C = 1;  // used to represent C(line, i)
    for (ll i = 1; i <= line; i++)  
    {
      arr[pkp++] = C;  // The first value in a line is always 1
      C = C * (line - i) / i;  
    }
  
  }
}


int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


ll t;
cin>>t;

while(t--)
{
	ll i,j,c;

cin>>i>>j>>c;



printPascal();

// for (int i = 1; i < 100; ++i)
// {
// 	 code 
// 	cout<<arr[i]<<" ";
// }

ll no_of_glasses_till_above = i*(i-1)/2;

ll pos_in_pascal = no_of_glasses_till_above + j;

ll pascal_value = arr[pos_in_pascal];

double p;

p = (1<<(i-1))/pascal_value;

// cout<<p<<" p\n";
if(p!=floor(p))
{
	p+=1;
}

// cout<<no_of_glasses_till_above<<" no_of_glasses_till_above\n";

ll water_req = (no_of_glasses_till_above + p)*c;

cout<<water_req<<"\n";




}
// ll no_of_glasses_in_row = i;

// ll water_fill_till_above = c*(i-1)*(i)/2;

// ll water_to_fill = 0;
// ll more_water_req;

// if(i%2==0)
// {
// 	if(j>i/2)
// 	{
// 		j = i-j+1;
// 	}
// 		more_water_req = 2*j*c;

// water_to_fill = water_fill_till_above+more_water_req;
// }
// else
// {



// 	if(j>(i/2)+1)
// 	{
// 		j = i-j+1;
// 		more_water_req = 2*j*c;
// 	}
// 	else if(j==(i/2)+1)
// 	{
// 		more_water_req = i*c;
// 	}
// 	else
// 	{
// 		more_water_req = 2*j*c;
// 	}



// water_to_fill = water_fill_till_above+more_water_req;


// }

// cout<<water_fill_till_above<<" "<<water_to_fill<<" *\n\n";


// cout<<water_to_fill<<"\n";

// }

return 0;
}
