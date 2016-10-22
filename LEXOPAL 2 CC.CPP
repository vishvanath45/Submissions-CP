
#include<bits/stdc++.h>

#include<stdio.h>
using namespace std;

int main()
{

    long long int tl,m,i,t,l,counter=0;

    cin>>t;

    char c[12346];
    while(t--)
    {

    cin>>c;
    l=strlen(c);
    tl=l;
    m=(l+1)/2;
    l--;
    i=0;
    while(m--)
    {
        counter=0;
      if(c[i]==c[l]&&c[i]!='.')
      {
          if(i<tl)
          {
          i++;
          }
          if(l>0)
          {l--;
          }
      }
      else if(c[i]=='.'&&c[l]=='.')
      {
          c[i]='a';
          c[l]='a';
      }
      else if(c[i]=='.')
      {
          c[i]=c[l];
      }
      else if(c[l]=='.')
      {
          c[l]=c[i];
      }
      else
      {
          cout<<"-1\n";
          counter=1;
          break;

      }


    }

if(!counter)
{
    cout<<c<<"\n";
}




    }



return 0;

}
