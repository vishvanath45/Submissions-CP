// 789 C CF

#include<bits/stdc++.h>

//#define ll long long int


using namespace std;

long long int maxSubArraySum(long long int a[], int size)
{
    int max_so_far = a[0];
    int curr_max = a[0];

    for (int i = 1; i < size; i++)
    {
        curr_max = max(a[i], curr_max+a[i]);
        max_so_far = max(max_so_far, curr_max);
    }
    return max_so_far;
}


int main()
{

    long long int t;

    cin>>t;

    long long int arr[t];

    for(int i =0; i<t; i++)
        cin>>arr[i];

    long long int arr1[t];
    long long int arr2[t];

    for(int i =0 ; i<t-1 ; i++ )
    {
        if(i%2==0)
        {
            arr1[i]=-1*abs(arr[i]-arr[i+1]);
            arr2[i]=abs(arr[i]-arr[i+1]);
        }
        else
        {
            arr1[i]= abs(arr[i]-arr[i+1]);
            arr2[i]= -1*abs(arr[i]-arr[i+1]);
        }

    }






long long int m1 = maxSubArraySum( arr1 , t-1);

//cout<<m1<<"#\n";

long long int m2 = maxSubArraySum(arr2 , t-1);

//cout<<m2<<"##\n";
cout<<max(m1,m2);

    return 0;
}

