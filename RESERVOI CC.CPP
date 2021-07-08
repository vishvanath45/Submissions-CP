//RESERVOI CC
// got 100 points
// got 100 points
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int h,w;
        cin>>h>>w;

        int arr[h][w];

        for(int i=0; i<h; i++)
        {
            for(int j=0; j<w; j++)
            {
                char ch;
                cin>>ch;
                if(ch=='B')
                    arr[i][j]=1;
                else if(ch=='A')
                    arr[i][j]=0;
                else
                    arr[i][j]=-1;
            }
        }
        int flag=0;
        for(int i=0; i<w; i++)
        {

            for(int j=0; j<h-1; j++)
            {
                if((arr[j][i]==1&&arr[j+1][i]==0)||(arr[j][i]==-1&&arr[j+1][i]==0)||(arr[j][i]==1&&arr[j+1][i]==-1))
                {
                    flag =1;
                    break;
                }

            }
            if(flag==1)
            {
                break;
            }

        }

        //water flowing sideways

        for(int i=0; i<h; i++)
        {
            if(arr[i][0]==-1||arr[i][w-1]==-1)
            {
                flag=1;
                break;
            }
        }

        //water flowing with air

        for(int i=0; i<h; i++)
        {
            for(int j=0; j<w-1; j++)
            {
                if(arr[i][j]+arr[i][j+1]==-1)
                {
                    flag =1;
                    break;
                }
            }

            if(flag==1)
            {
                break;
            }
        }






        if(flag==0)
            cout<<"yes\n";
        else
            cout<<"no\n";
    }


    return 0;

}
