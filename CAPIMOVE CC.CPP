
// CAPIMOVE CC
// 50 50 points hi mile phir se karna h
#include<bits/stdc++.h>

using namespace std;

//going for 100 points
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int pop[n];
        int pos[n];
        for(int i=0; i<n; i++)
        {
            cin>>pop[i];
            pos[i]=i;
        }
        vector<int> arr[n];

        for(int i=0; i<n-1; i++)
        {
            int frt,endd;
            cin>>frt;
            cin>>endd;
            arr[frt-1].push_back(endd-1);
            arr[endd-1].push_back(frt-1);
        }


//create temporary array of pairs
        {
            std::pair<int, int> AB[n];

            //copy into pairs
            //Note that A values are put in "first" this is very important
            for( size_t i = 0; i<n; ++i)
            {
                AB[i].first  = pop[i];
                AB[i].second = pos[i];
            }

            std::sort(AB, AB+n);

            //Place back into arrays
            for( size_t i = 0; i<n; ++i)
            {
                pop[i] = AB[i].first;  //<- This is actually optional
                pos[i] = AB[i].second;
            }
        }


        vector <int> ansarr[n];

        for(int i=0; i<n; i++)
        {
            int xx=pos[n-1-i];
            int sze=arr[xx].size();

            for(int j=0; j<sze; j++)
            {
                ansarr[i].push_back(arr[xx][j]);
            }

            ansarr[i].push_back(xx);
        }


/*
        for(int i=0; i<n; i++)
        {
        int sze=ansarr[i].size();

        for(int j=0; j<sze; j++)
        {
        cout<<ansarr[i][j]<<" ";
        }
        cout<<"\n";

        }
*/



int fuckedupshit[n];

for(int i=0;i<n;i++)
    fuckedupshit[i]=-1;




    for(int i=0;i<n;i++)
    {
        int sze=ansarr[i].size();

        for(int j=0;j<sze;j++)
        {
            int dick=ansarr[i][j];
            if(fuckedupshit[dick]<0)
            fuckedupshit[dick]=-2;

        }



        for(int j=0;j<n;j++)
        {
            if(fuckedupshit[j]==-1)
            {

            //cout<<pos[n-1-i]<<"helloo \n";
                fuckedupshit[j]=pos[n-1-i];
            }
            else if(fuckedupshit[j]==-2)
                fuckedupshit[j]=-1;
        }

        int hunter=0;

        for(int yy=0;yy<n;yy++)
        {
        if(fuckedupshit[yy]<0)
        {
        hunter=1;
        break;
        }
        }

        if(hunter==0)
        {
        break;
        }



    }



    for(int i=0;i<n;i++)
    {
        cout<<fuckedupshit[i]+1<<" ";

    }



    /*

        int flag=0;

        for(int yy=0; yy<n; yy++)
        {

            flag=0;
            for(int i=0; i<n; i++)
            {

                int sze=ansarr[i].size();

                for(int hh=0; hh<sze; hh++)
                {
                    if(ansarr[i][hh]==yy)
                    {
                        flag=1;
                        break;
                    }
                    else
                    flag=0;

                }
                if(flag==0)
                {
                cout<<pos[n-1-i]+1<<" ";
                break;
                }



            }
        }


        */



        /*testing pourpose
        for(int i=0; i<n; i++)
        {
        int sze=arr[i].size();

        for(int j=0; j<sze; j++)
        {
        cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
        }
        */












    }










    return 0;

}


















/*
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int pop[n];
        int tpop[n];
        for(int i=0; i<n; i++)
            cin>>pop[i];
        vector<int> arr[n];

        for(int i=0; i<n-1; i++)
        {
            int frt,endd;
            cin>>frt;
            cin>>endd;
            arr[frt-1].push_back(endd-1);
            arr[endd-1].push_back(frt-1);
        }

        /*testing pourpose
        for(int i=0; i<n; i++)
        {
            int sze=arr[i].size();

            for(int j=0; j<sze; j++)
            {
                cout<<arr[i][j]<<" ";
            }
            cout<<"\n";



        }


        int wtf;
        for(int i=0; i<n; i++)
        {

            for(int j=0; j<n; j++)
               { tpop[j]=pop[j];

                }
                tpop[i]=-1;
            int sze=arr[i].size();

            for(int l=0; l<sze; l++)
            {

                int pkp=arr[i][l];
                tpop[pkp]=-1;

            }
           // for(int i2=0;i2<n;i2++)
           // cout<<tpop[i2]<<" ^^";

            //cout<<"@@@@@@@\n";


            int maxii=tpop[0];
            int maxiplace=0;
            for(int ii=0; ii<n; ii++)
            {

                if(tpop[ii]>maxii)
                {
                    maxiplace=ii;
                    maxii=tpop[ii];
                }

            }
            if(tpop[maxiplace]==-1)
            {
                cout<<"0 ";
            }
            else
            {
                cout<<maxiplace+1<<" ";
            }

        }




    }
    return 0;


}
*/
