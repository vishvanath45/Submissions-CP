// merge sort v3

#include<bits/stdc++.h>

#define ll long long int

using namespace std;

ll arr[100009];
ll sum=0;

ll mergeit(ll arr[], ll left, ll mid, ll right )
{
    ll i, j, k;

cout<<left<<" "<<mid<<" "<<right<<"\n";

//   for(ll i =left; i<right; i++)
//     cout<<arr[i]<<" * ";
//        cout<<"\n";

    ll sze1=mid-left+1;
    ll sze2=right-mid;

    ll L[sze1],R[sze2];


    for(ll i =0; i<sze1; i++)
        L[i]=arr[left+i];

    for(ll j=0; j<sze2; j++)
        R[j]=arr[mid+1+j];

    i=j=0;
    k=left;

    while(i < sze1 && j < sze2)
    {

        if(L[i]<R[j])
        {
        sum+=L[i]*(right-mid-j);
      //      sum+=L[i];
         //   cout<<"sum every time "<<sum<<"\n";

            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while(i<sze1)
    {
        arr[k]=L[i];
        i++;
        k++;
    }

    while(j<sze2)
    {
        arr[k]=R[j];
        j++;
        k++;
    }


}

ll mergesort(ll arr[], ll left, ll right )
{



int i = 0;
int sze = right-left+1;


for(int i=1;i<=log(sze)/log(2);i++)
{
for(int j =0;j<sze;j+=2*i)
mergeit(arr,j,(i+j-1),j+2*i-1);
cout<<"\n";
}


}








/*
    ll mid;
    if(left<right)
    {
        mid = left +(right-left)/2;

        mergesort(arr,left,mid );
        mergesort(arr,mid+1,right);
        mergeit(arr,left,mid,right);

    }

}

*/



int main()
{


	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif
    ll x;

    cin>>x;

    while(x--)
    {
    ll t;
    cin>>t;



    for(ll i =0; i<t; i++)
        cin>>arr[i];


    mergesort(arr,0, t-1);

      for(ll i =0; i<t; i++)
        cout<<arr[i]<<" ";

//        cout<<sum<<"\n";
//        sum=0;

    }
    return 0;

}
