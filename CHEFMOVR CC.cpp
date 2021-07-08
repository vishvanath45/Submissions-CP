// CHEFMOVR CC

#include<bits/stdc++.h>

using namespace std;


int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    long long int  t;

    cin>>t;

    long long int  len, jump;

    while(t--)
    {
        long long int  flag=0;
        cin>>len>>jump;

        long long int  arr[len];

        long long int  sum=0;
        double avgsum=0;


        for(long long int  i =0; i<len; i++)
        {
            cin>>arr[i];
            sum+=arr[i];
        }

        avgsum= (double)sum/len;

        // cout<<avgsum<<" avg sum \n";

        if(avgsum==floor(avgsum))
        {

            vector <long long int > v[jump];

            for(long long int  i =0; i<len ; i++)
            {
                v[i%jump].push_back(arr[i]);
            }

            long long int  counter=0;

            for(long long int  i =0 ; i< jump ; i++)
            {
                long long int  summ=0;
                for(long long int  j =0 ; j < v[i].size(); j++)
                {
                summ+=v[i][j];
                }

                 //cout<<" summ "<<summ<<" avg sum for that "<<summ/v[i].size()<<" \n";
                if((double)summ/v[i].size()!=avgsum)
                {
                flag=1;

                }
            }

            if(flag==0)
            {

            for(long long int  i =0 ; i<jump; i++ )
            {

                for(long long int  j =0 ; j <v[i].size(); j++)
                {
                    // cout<<v[i][j]<<"**";
                if(v[i][j]<avgsum)
                {
                long long int  ss = avgsum-v[i][j];
                counter+=ss;
                v[i][j+1]-=ss;
                }
                else if(v[i][j]>avgsum)
                {
                long long int  ss = v[i][j]-avgsum;
                counter+=ss;
                v[i][j+1]+=ss;
                }
                }
                // cout<<" cou "<<counter<<" $$ \n";

            }

             cout<<counter<<"\n";



            }
            else
            {
            cout<<"-1\n";
            }
        }
        else
        {
            cout<<"-1\n";
        }
    }
return 0;
}
