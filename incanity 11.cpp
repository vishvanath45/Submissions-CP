#include<bits/stdc++.h>

using namespace std;

struct ab
{
    int s;
    int i;


};

bool func(ab a,ab b)
{
    cout<<a.s<<"^^"<<b.s<<"\n";
    cout<<a.i<<"^*^"<<b.i<<"\n";
    if(a.s==b.s)
    {
        cout<<a.i<<"^^"<<b.i<<"\n";
        if(a.i<b.i)
           return true;
        else
            return false;

    }
    else {
            if(a.s>b.s)
        return true;
    else
        return false;}
}


int main()
{
    long n;
    cin>>n;



    int b=sqrt(n);
    int arr[b];
    int sum[b];
    int k=0;

        for (int i=2; i<=b; i++)
    {
        if (n%i==0)
        {

            if (n/i == i)
            arr[k++]=i;

            else
               {
                   arr[k++]=i;
                   arr[k++]=n/i;


               }
        }
    }

    ab arr2[b];


    int num;
    for(int i=0;i<k;i++)
    {
        int s=0;
    num = arr[i];
    while (num != 0)
    {
        s = s + num % 10;
        num = num / 10;
    }

    cout<<"sum"<<s<<"*"<<arr[i]<<"\n";

    arr2[i].s=s;
    arr2[i].i=arr[i];

    }

    sort(arr2,arr2+b,func);

    cout<<arr2[0].i<<"\n";
    return 0;





}
