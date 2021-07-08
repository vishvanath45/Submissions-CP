//gfg longest incresing subsequence


#include <bits/stdc++.h>
using namespace std;

int hcf(int n1, int n2)
{
int t1,t2;
if(n1<n2)
{
t1=n1+n2;
n1=t1-n1;
n2=t1-n1;
}
    if (n2 != 0)
       return hcf(n2, n1 % n2);
    else
       return n1;
}
int main()
{
    //code
    int  t;
    cin>>t;

    while(t--)
    {
        int size;
        cin>>size;
        int arr[size];
        for(int i=0; i<size; i++)
            cin>>arr[i];

        int lis[size];
        fill_n(lis, size,1);

        int i=1;
        int j=0;

        for(; i<size; i++)
        {
            for(j=0; j<i; j++)
            {
               int pkp=hcf(arr[j],arr[i]);
                if((arr[j]<arr[i]))
                {
                    if(lis[j]+1>lis[i])
                        lis[i]=lis[j]+1;


                }
            }



        }
        sort(lis,lis+size);
        cout<<lis[size-1]<<"\n";






    }









    /*int i;
    int t;
    cin>>t;
    while(t--)
    {
        int size;
        cin>>size;
        int maxele[size],arr[size];
        int countarr[size]={0};
        int ii=-1;

        while(++ii<size)
        {
            cin>>arr[ii];
        }

        maxele[0]=0;
        int maxe=arr[0];
        int count=1;

        for(i=1;i<size;i++)
        {
            if(arr[i]<maxe)
            {
                maxele[count]=i;
                count++;
                maxe=arr[i];
            }
            else
            {
            maxe=arr[i];
            }
        }
     int points[count]={0};
    for(i=0;i<count;i++)
    cout<<maxele[i]<<"*";
     cout<<"ends\n";



     for(i=0;i<count;i++)
     {
     int posi=maxele[i];    //position 0, 1, 2;
     int vali=arr[posi]; //value 10 , 90, 27

    cout<<"position reading "<<posi<<"\n";
    cout<<"value there "<<vali<<"\n";
     int mom;

     for(mom=posi;mom<size;mom++)
     {
    cout<<"position checking is "<<mom<<"\n";
        if(vali<=arr[mom])
        {
       cout<<"value was smaller from "<<arr[mom]<<"\n";
        points[i]++;
        vali=arr[mom];
        }
     }


     }
     sort(points,points+count);

    cout<<points[count-1]<<"\n";

        /*  garbage code complete shit i wrote
        int pkp=0;
        for(pkp=0;pkp<count;pkp++)
            {
            cout<<maxele[pkp]<<"*";
            }

            cout<<"max eel ends\n";
            int k=0;
        for(i=size-1-k;i>=0;i--)
        {
            int xyz=arr[i];
            cout<<"examining"<<xyz<<"\n";
            for(pkp=0;pkp<count;pkp++)
            {
                if(xyz>maxele[pkp])
                {
                    cout<<"increased"<<maxele[pkp]<<"\n";
                    countarr[pkp]++;
                }
                else if(xyz==maxele[pkp])
                {
                    cout<<"increased"<<maxele[pkp]<<"\n";
                countarr[pkp]++;
                count--;
                }

            }
            k++;
        }

        sort(countarr,countarr+count);

        cout<<countarr[0];

        cout<<"\n";
    }*/


    return 0;

}
