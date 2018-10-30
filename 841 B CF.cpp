// 841 B CF

#include<bits/stdc++.h>

using namespace std;
#define ll long long int

int main()
{


 ll n;
 cin>>n;

ll kk;

 for(ll i =0 ; i<n; i++)
 	{	 
 		cin>>kk;

 			if(kk%2==1)
 			{
 				cout<<"First\n";
 				return 0;
 			}
 	}


 		cout<<"Second\n";
 		return 0;

 	



// ll oore[n];

// ll alleven = 1;
// ll allodd = 1;

// if(prefixsum[0]%2==0)
//  	{oore[0]=0;
//  		allodd=0;
//  	}
//  else
//  	{oore[0]=1;
//  		alleven=0;
//  	}

//  for(ll i =1 ; i< n ;i++)
//  {
//  	prefixsum[i]+=prefixsum[i-1];
//  	 	if(prefixsum[i]%2==0)
//  	{
//  		oore[i]=0;
//  		allodd=0;
//  	}
//  	else
//  	{
//  		oore[i]=1;
//  		alleven=0;
//  	}

//  }

// if((oore[0]+oore[n-1])==1)
// {
// 	cout<<"First\n";
// 	return 0;
// }



// if(alleven==1||allodd==1)
// {
// 	cout<<"Second\n";
// 	return 0;
// }

// 	cout<<"First\n";
// 	return 0;
 	return 0;

}









