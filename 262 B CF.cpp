// 262 B CF

#include<bits/stdc++.h>
#define ll long long int
using namespace std;


int main()
{

    int n,k;

    cin>>n>>k;

    int arr[n];

    for(int i =0 ; i<n; i++)
        cin>>arr[i];


    sort(arr,arr+n);

    int p =0;
    int  i;

    for( i =0; i<k; i++)
    {
        if(arr[p]<0)
        {
            arr[p]= abs(arr[p]);
            p++;
        }
        else
        break;


    }

       sort(arr,arr+n);
    int krem = k-i;

    if(krem%2!=0)
    arr[0]=-1*arr[0];

    int sum =0;


    for(int i = 0 ; i <n;i++)
    sum+=arr[i];



cout<<sum;

return 0;



}
