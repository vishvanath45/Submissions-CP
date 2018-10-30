//SNCOUP CC

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



for(int i =0;i<100000;i++)
    cout<<1<<" ";


/*
    ll t;
    scanf("%lld",&t);

        ll size;
    for(int pkp =0 ;pkp<t;pkp++)
    {
        ll ans=0;

        ll temp=0;

        ll location;
        ll m =0;
        ll n =0;

        scanf("%lld",&size);

        string s1,s2;
        scanf("%s",s1);
        scanf("%s",s2);

        int ss1=0,ss2=0;

        for(int k=0;k<size;k++)
        {
            if(s1[k]=='*')
                ss1++;
            if(s2[k]=='*')
                ss2++;
        }


        for(location=0; location<size; location++)
        {
            if(s1[location]=='*'&&s2[location]=='.'&& m==0 )
                m=1;
            else if(s1[location]=='*' &&(s2[location]=='.')&& m==1)
            {
                ans++;
                n=0;
            }
            else if(s1[location]=='*' &&(s2[location]=='*')&& m==1)
            {
                ans++;
                n=1;
            }
            else if(s1[location]=='*'&&s2[location]=='*' && n==0 )
            {
                n=1;
                m=1;
            }
            else if(s1[location]=='.'&&s2[location]=='*' && n==0 )
            {
                n=1;
            }
             else if(s1[location]=='.' && s2[location]=='*'&&n==1)
            {
            {
                ans++;
                m=0;
            }
            }
            else if(s1[location]=='*'&&s2[location]=='*')
            {
            if(n==1)
            {
                ans++;
                m=1;
                }
            }

        }

        if(ss1>0&&ss2>0)
        printf("%lld\n",ans+1);
        else
        printf("%lld\n",ans);
    }



// while(t--)
// {

// 	int dumb=0;

// 	int size;
// 	cin>>size;

// 	char arr[2][size];

// 	for(int k =0 ;k<2;k++)
// 		for(int h=0;h<size;h++)
// 			cin>>arr[k][h];

// int count=0;
// int flag =0;

// 	for(int h = 0 ; h <size-1;h++)
// 	{
// 		if(arr[0][h]=='*'||arr[1][h]=='*')
// 		{
// 			count++;
// 			if(flag==0&&arr[0][h]=='*'&&arr[1][h]=='*')
// 				flag=1;
// 		}

// 		if(((arr[0][h]=='.'&&arr[1][h]=='*')&&(arr[0][h+1]=='*'&&arr[1][h+1]=='.')))
// 			{dumb++;
// 				h++;
// 			}
// 		if(((arr[0][h]=='*'&&arr[1][h]=='.')&&(arr[0][h+1]=='.'&&arr[1][h+1]=='*')))
// 			{dumb++;
// 				h++;
// 			}

// 	}


// 		if(arr[0][size-1]=='*'&&arr[1][size-1]=='*')
// 				flag=1;

// 		if(arr[0][size-1]=='.'&&arr[1][size-1]=='.')
// 			if(count>0)
// 				count--;

// 			if(dumb>0)
// 				flag=0;

// 		cout<<count+flag-dumb-1<<"\n";


// }

*/
return 0;

}
