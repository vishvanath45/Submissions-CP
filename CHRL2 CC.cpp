// CHRL2 CC

#include<stdio.h>
#include<iostream>
using namespace std;
#include<algorithm>
#include<string.h>
int main()
{
    char s[10000];

    scanf("%s",s);


    int l;
    l=strlen(s);

    int i=0;
    int cf=0,hf=0,ef=0,ff=0;

    for(i=0;i<l;i++)
    {

        if(s[i]=='C')
        {
            cf++;


        }
        else if(s[i]=='H')
        {
            if(cf>hf)
            {
                hf++;

            }


        }
        else if(s[i]=='E')
        {
            if(hf>ef)
            {
                ef++;

            }


        }
        else if(s[i]=='F')
        {
            if(ef>ff)
            {
                ff++;

            }


        }







    }

    cout<<ff<<"\n";


    return 0;


}









