#include<bits/stdc++.h>

using namespace std;

#define ll long long int

ll bs(ll arr[], ll low, ll high , ll to_find )
{
    while(low<high)
    {
        ll mid = (low+high)/2;

            if(arr[mid]==to_find)
            {
            return mid;
            }
            else if(arr[mid]>to_find)
            {
                return bs(arr,low, mid-1, to_find);
            }
            else if(arr[mid]<to_find)
            {
                return bs(arr, mid+1, high, to_find);
            }
            else
            {
                return -1;
            }
    }

    if(low>high)
        return -1;
    

}
int blablabla(ll array[], ll n, ll to_find)
{
    

    ll counter=0;
    sort(array, array+n);

    ll i =0;
    ll j =0;
    ll k = n-1;
    int m=0;

        for(int i =0 ; i< n-1; i++)
        {
            for(int j = i+1; j< n; j++)
            {
                ll pkp = to_find-array[i]-array[j];
                // cout<<pkp<<"$$$\n";
                int ansss = bs(array, j+1 ,n , pkp);
                if(ansss>=0)
                if(array[ansss]+array[i]+array[j]==to_find)
                    cout<<array[i]<<" "<<array[j]<<" "<<array[ansss]<<"\n";
            }
        }
        k--;
        m++;
        //cout<<k<<"@@@@@\n";
    }




int main()
{


#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif

    ll x,n,i;
    cin>>x;
    cin>>n;
    ll array[n];
    for(i=0;i<n;i++)
        cin>>array[i];

    ll pkp = blablabla(array, n, x);

    if(pkp==0)
        cout<<"nothing found\n";


    return 0;
}
