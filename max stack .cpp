


#include<stdio.h>
#include<algorithm>
using namespace std;
#include<iostream>
#include<string.h>
#include<stack>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    stack <int> s;
    stack <int> aux;
    stack <int> max;

    int t,ch,data,r1,r2,r3;
    cin>>t;

    while(t--)
    {

        cin>>ch;

        switch(ch)
            {
            case 1:
           {
               cin>>data;

            s.push(data);
            if(!max.empty())
            {r1=max.top();}
               r2=max.empty();
            if((r2==1)||data>r1)
                {
                max.push(data);
            }


               break;}
            case 2:
            {r1=s.top();
             r2=max.top();
                if(r1==r2)
                {
                s.pop();
                max.pop();
            }
            else
                {
                s.pop();

            }
             break;}

            case 3:
           {
               r1=max.top();
               cout<<r1<<"\n";
            break;
           }}



    }













    return 0;
}
