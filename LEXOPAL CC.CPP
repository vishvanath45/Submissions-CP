//CC LEXOPAL


#include<stdio.h>
#include<algorithm>


using namespace std;
#include<math.h>
#include<string.h>
#include<iostream>

int main()
{
    long long int t,sl,i,pp,mm,hh,kk;



    scanf("%lld",&t);

    while(t--)
    {
        char c[12347];

        scanf("%s",c);

        sl=strlen(c);
        pp=sl;
        mm=sl;
        kk=sl;
        mm=(mm/2)+4;
        sl--;
        hh=0;
        i=0;
        while(mm--)
        {

            if(c[i]==c[sl]&&c[i]!='.')
            {
                i++;
                sl--;
                if(sl<0)
                {
                    break;
                }

            }
            else if(c[sl]=='.'&&c[i]=='.')
            {
                c[sl]='a';
                c[i]='a';
            }
            else if(c[i]=='.')
            {
                c[i]=c[sl];
            }
            else if(c[sl]=='.')
            {
                c[sl]=c[in];
            }
            else
            {
                hh=-1;
                printf("-1\n");
                break;

            }


        }
        if(kk%2!=0)
        {if(c[kk/2]=='.')
        {
             c[kk/2]='a';
        }}
        else
        {
        if((((kk/2)+1)<pp)&&c[(kk/2)+1]=='.')
        {
           c[(kk/2)+1]='a';
        }
        }

        if(hh!=-1)
        {
          for(i=0;i<pp;i++)
          {
              if(c[i]=='.')
              {
                  c[i]='a';
              }
              cout<<c[i];

          }
          cout<<"\n";

        }


    }

    return 0;


}
