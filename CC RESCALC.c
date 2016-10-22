//CC RESCALC

#include<stdio.h>
#include<algorithm>
using namespace std;
#include<iostream>
#include<string.h>

int main()
{

    int np;
    cin>>np;


    int points[np]= {0};

    for(i=0; i<np; i++)
    {
        cin>>noc;

        int xx[6]= {0};

        int arr[noc];

        for(j=0; j<noc; j++)
        {
            cin>>arr[j];

            if(arr[j]==1)
            {
                xx[0]++;
            }
            else if(arr[j]==2)
            {
                xx[1]++;
            }
            else if(arr[j]==3)
            {
                xx[2]++;
            }
            else if(arr[j]==4)
            {
                xx[3]++;
            }
            else if(arr[j]==5)
            {
                xx[4]++;
            }
            else if(arr[j]==6)
            {
                xx[5]++;
            }
        }
int nozeros=0;
for(k=0;k<6;k++)
{
  if(xx[k]==0)
  {
      nozeros++;
  }


}
if(nozeros==0)
{

}


    }

}
