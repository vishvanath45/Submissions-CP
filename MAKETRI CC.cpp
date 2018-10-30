//MAKETRI


/*
7 5 10
1 3 5 9 10 13 16


4 5 6
*/
#include<bits/stdc++.h>

#define ll unsigned long long int

using namespace std;

struct Interval
{
	ll s,e;
};

bool mycomp(Interval a, Interval b)
{
return a.s > b.s;
}


void mergeIntervals(Interval arr[], ll n, ll  l, ll  r)
{


    ll index = 0;
        sort(arr, arr+n, mycomp);

    for (ll i=0; i<n; i++)
    {

        if (index != 0 && arr[index-1].s <= arr[i].e)
        {
            while (index != 0 && arr[index-1].s <= arr[i].e)
            {
                arr[index-1].e = max(arr[index-1].e, arr[i].e);
                arr[index-1].s = min(arr[index-1].s, arr[i].s);
                index--;
            }
        }
        else
            arr[index] = arr[i];

        index++;
    }

    ll sum=0;




 //  cout << "\n The Merged Intervals are: ";
   //for (ll i = 0; i < index; i++)
//cout << "[" << arr[i].s << ", " << arr[i].e << "] \n ";

    for (ll i = 0; i < index; i++)
        {
        //cout << "[" << arr[i].s << ", " << arr[i].e << "] \n ";

        if(arr[i].s<l&&arr[i].e<l)
        {
        sum+=0;
       // cout<<"c1\n";
        }
        else if(arr[i].s<l&&arr[i].e<=r)
        {
        sum+=arr[i].e-l+1;
       // cout<<"c2\n";
        }
        else if(arr[i].s>=l&&arr[i].e<=r)
        {
        //cout<<"c3\n";
        sum+=arr[i].e-arr[i].s+1;
        }
        else if(arr[i].s>=l&&arr[i].s<=r&&arr[i].e>r)
        {
        //cout<<"c4\n";
        sum+=r-arr[i].s+1;
        }
        else if(arr[i].s<=l&&arr[i].e>=r)
        {
        sum+=r-l+1;
        }
        else if(arr[i].s>r)
        {
        //cout<<"c5\n";
        sum+=0;
        }


       // cout<<"current sum is "<<sum<<"\n";

        }

        /*
                if(arr[i].s<l||arr[i].e>r)
        {
        if(arr[i].s<l)
            arr[i].s=l;
        if(arr[i].e>r)
            arr[i].e=r;

        cout<<arr[i].s<<"\n";
       // cout<<arr[i].e<<"\n";

       sum+=arr[i].e-arr[i].s+1;
        }
        else
        {
        //cout<<arr[i].s<<"\n";
       // cout<<arr[i].e<<"\n";
        sum+=arr[i].e-arr[i].s+1;
        }
        */



       printf("%lld\n",sum);

}

int main()
{

	ll n,l,r;
    ll t;
   // cin>>t;

 //  while(t--)
 //  {
	cin>>n;

	ll arr[n];

	cin>>l>>r;

	for(ll i=0;i<n;i++)
		scanf("%lld",&arr[i]);

//Interval arr2[n]={0};


sort(arr,arr+n);
ll pkp=0;


Interval arr2[n-1]={0};

for(ll i=0;i<n-1;i++)
	{


		if(arr[i]!=arr[i+1])
		{
		ll mom= (arr[i+1]-arr[i]+1);
		ll dad= (arr[i]+arr[i+1]-1);


			arr2[pkp].s=mom;
			arr2[pkp].e=dad;
            pkp++;


        }

	}



mergeIntervals(arr2,pkp,l,r);
//}

return 0;

}
