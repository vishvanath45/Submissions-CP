#include<iostream>
#include<stdlib.h>
#include<algorithm>
#include<functional>

using namespace std;

void merge_them(int a1[],int a2[],int a3[],int n1,int n2)
{
 int i=0,j=0,k=0;
 while(i<n1 && j<n2)
 {
     if(a1[i]<a2[j])
     {
         a3[k]=a1[i];
         i++;
     }
     else
     {
         a3[k]=a2[j];
         j++;
     }
    k++;
 }
 while(i<n1)
 {
     a3[k++]=a1[i++];
 }
 while(j<n2)
 {
     a3[k]=a2[j];
     k++;
     j++;
 }


}

int main()
{
    int i,n1,n2,a1[1000],a2[1000],a3[1000],p;
    cout<<"Enter max limit of array 1:"<<endl;
    cin>>n1;
    cout<<"Enter the array 1 numbers:"<<endl;
    for(i=0;i<n1;i++)
    {
        cin>>a1[i];
    }
    cout<<"Enter max limit of array 2:"<<endl;
    cin>>n2;
    cout<<"Enter the array 2 numbers:"<<endl;
    for(i=0;i<n2;i++)
    {
        cin>>a2[i];

    }
     sort(a1,a1+n1,less<int>());
     sort(a2,a2+n2,less<int>());
     cout<<"sorted array 1:"<<endl;
     for(i=0;i<n1;i++)
    {
        cout<<a1[i];

    }
    cout<<endl;
    cout<<"sorted array 2:"<<endl;
    for(i=0;i<n2;i++)
    {
        cout<<a2[i];

    }
    cout<<endl;
    merge_them(a1,a2,a3,n1,n2);
    cout<<"Array after merging:"<<endl;
    for (int i=0;i<n1+n2;i++)
        cout <<a3[i];




return 0;
}



















