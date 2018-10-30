//hackerrank Largest Rectangle DATA structure stack

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#include<stack>


int main()
{
    int t;

    int arr[1000001];
   stack <int> s;
    int i,stacktop,area,maxarea,top;

    cin>>t;
    while(i++<t)
        {
        cin>>arr[i];
    }
    i=0;
    while(i<t)
        {
        if(s.empty()||arr[i]>s.top())
            s.push(i);
        else
            {
            while(arr[s.top()]<=arr[i])
                {
                top=s.top();
                s.pop();
                stacktop=s.top();

                if(s.empty())
                    {
                    area=arr[top]*i;
                }
                else
                    {
                    area=arr[top]*(i-stacktop-1);
                }
                if(area>=maxarea)
                    {
                    maxarea=area;
                }

            }
        }





   i++;
    }
    if(s.size()==t)
        {

        while(!s.empty())
            {
            top=s.top();
                s.pop();
                stacktop=s.top();

                if(s.empty())
                    {
                    area=arr[top]*i;
                }
                else
                    {
                    area=arr[top]*(i-stacktop-1);
                }

     if(area>=maxarea)
                    {
                    maxarea=area;
                }
        }



    }


    cout<<maxarea<<"\n";

    return 0;
}
