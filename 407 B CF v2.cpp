// 407 B CF v2 using set.contain()

#include<bits/stdc++.h>
#define ll long long int
using namespace std;


/*

-2 -3 162 4
-1 2 6 -18
*/

int main()
{

    ll b,q,l,m;


    cin>>b>>q>>l>>m;

    set <ll> badno;


    ll ivalue;
    for(ll i =0; i<m; i++)
    {

        cin>>ivalue;
        if( ivalue <=l && ivalue>=-l )
            badno.insert(ivalue);

    }


    ll GP = b;

    int counter=0;

    if(q==1||b==0||q==-1)
    {
        if(badno.count(GP)==0)
            counter=-1;
        else
            counter=0;
    }
    else if(q!=0&&q!=1&&b!=0)
    {
        while(GP<=l&&GP>=-l)
        {

//cout<<GP<<"**\n";

            if(badno.count(GP)==0)
            {
                counter++;
            }
            else
            {
                //  cout<<"presernt \n";
                badno.erase(GP);
            }

            GP=GP*q;

        }
    }

    if(q==0)
    {
        if((badno.count(0)==0))
        {   if(b<=l&&b>=-l)
            cout<<"inf";
            else
            cout<<0;
            return 0;
        }
        else
        {
            if(badno.count(b)==0)
            {   if(b<=l&&b>=-l)
                cout<<1;
                else
                cout<<0;
                return 0;
            }
            else
            {
                cout<<0;
                return 0;

            }
        }
    }


    if(q==1||b==0)
    {
        if(badno.count(GP)==0&&GP<=l&&GP>=-1)
            counter=-1;
        else
            counter=0;
    }

    if(counter!=-1)
        cout<<counter;
    else
        cout<<"inf";


    return 0;
}



