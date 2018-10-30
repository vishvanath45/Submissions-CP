//KOL15 A

#include<stdio.h>
#include<algorithm>
using namespace std;
#include<iostream>
#include<string>
int main()
{
    int t;
    cin>>t;
    int ss;

    string s;

    int l;

    char ch;

    int sum;
    while(t--)
    {
        sum=0;
        cin>>s;

        l=s.size();

        int k;
        while(l--)
        {

            ch=s[l];

            if(ch=='1')
            {
                sum+=1;

            }
            else if(ch=='2')
            {

                sum+=2;
            }
            else if(ch=='3')
            {

                sum+=3;
            }
            else if(ch=='4')
            {

                sum+=4;
            }
            else if(ch=='5')
            {

                sum+=5;
            }
            else if(ch=='6')
            {

                sum+=6;
            }
            else if(ch=='7')
            {

                sum+=7;
            }
            else if(ch=='8')
            {

                sum+=8;
            }
            else if(ch=='9')
            {

                sum+=9;
            }else if(ch=='0')
{

    sum+=0;
}



        }

        cout<<sum<<"\n";

    }


    return 0;


}
