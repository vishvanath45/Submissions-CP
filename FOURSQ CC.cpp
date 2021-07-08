//FOURSQ CC

#include<bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin>>t;

    while(t--)
    {
        int size,query,mod;
        cin>>size;
        cin>>query;
        cin>>mod;

        int arr[size];
        for(int i=0; i<size; i++)
            cin>>arr[i];

        int qtype;
        while(query--)
        {
            cin>>qtype;
            if(qtype==1)
            {
                int postobeupdated;
                int updatedvalue;
                cin>>postobeupdated;
                cin>>updatedvalue;
                arr[postobeupdated-1]=updatedvalue;
            }
            else
            {
                int leftpos;
                int rightpos;
                cin>>leftpos>>rightpos;

                int multiple=1;

                for(int i=leftpos-1; i<rightpos; i++)
                    multiple=(multiple*arr[i])%mod;

                //cout<<multiple<<"**\n";

                for (int i = 0; i<32; i++)
                {
                    for (int j = i; j<32; j++)
                    {
                        for(int k = j; k<32; k++)
                            for (int l = k; l<32; l++)
                            {
                                if((i*i)+(j*j)+(k*k)+(l*l)==multiple)
                                {
                                    cout<<i<<" "<<j<<" "<<k<<" "<<l<<"\n";
                                    break;
                                }
                                break;
                            }
                            break;
                    }
                    break;
                }


            }
        }
    }

    return 0;



}
