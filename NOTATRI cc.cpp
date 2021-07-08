// NOTATRI

#include<bits/stdc++.h>

#define ll long long int

using namespace std;

int main()
{

 ll t=-1;

 while(1)
 {
 cin>>t;

 if(t==0)
 return 0;

std::vector<unsigned long long> arr(t);
 ll answer=0;
 for(int i=0;i<t;i++)
scanf("%lld",&arr[i]);

    ll k;
    ll j;
	sort(arr.begin(), arr.end());

 for(int i=0;i<t-2;i++)
 {


 	for(j=i+1;j<t-1;j++)
 	{
    k=j+1;

    while(k<t&&arr[i]+arr[j]>=arr[k])
     k++;


 		answer+=t-k;



 	}


 }



printf("%lld\n",answer);

}
 return 0;

 }

