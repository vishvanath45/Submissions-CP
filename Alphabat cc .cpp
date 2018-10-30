
//cc   ALPHABAT


#include<stdio.h>
#include<algorithm>
using namespace std;
#include<iostream>
#include<string.h>



int main()
{

    int i,j,m,count;
    char s[26],p[26];

    scanf("%s",s);

    int pl,sl;
    sl=strlen(s);

    int n;
    char x;
    cin>>n;

    for(i=0; i<n; i++)
    {
        count=0;

        scanf("%s",p);

        pl=strlen(p);


        for(j=0; j<pl; j++)
        {
            x=p[j];

            for(m=0; m<sl; m++)
            {

                if(x == s[m] )
                {
                    count++;
                }


            }



        }

        if(count==pl)
        {
            cout<<"Yes\n";

        }
        else
        {

            cout<<"No\n";
        }


    }

    return 0;

}




