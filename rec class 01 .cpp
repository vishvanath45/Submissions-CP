#include<bits/stdc++.h>

#define ll long long int

using namespace std;

int main()
{

    int t;
    cin>>t;

    string s;
    while(t--)
    {
        cin>>s;

        int length=s.length();

        int arr[length];

        for(int i=0; i<length; i++)
            arr[i]=s[i]-'0';


        int laste=arr[length-1];
        int i;
        for(i =length-2;i>=0;i++)
        {
        if(arr[i]<laste)
        {
        swap(arr[i],laste);
        break;
        }
        }
        int oldi=i;

        int a2sze=length-i-1;

        int arr2[a2sze];

        i++;
        int pp=0;
        for(;i<length;i++)
        {
        arr2[pp++]=arr[i];
        }


        sort(arr2,arr2+a2sze);

        oldi++;
        i=0;
        for( ;oldi<length;oldi++)
        {

        arr[oldi]=arr2[i++];
        }


        for(i=0;i<length;i++)
        cout<<arr[i];
    }
    return 0;

}
