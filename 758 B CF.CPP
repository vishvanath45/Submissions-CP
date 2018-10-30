// CF CONTEST 758 B
// done afetr contest is over silly mistake soach nahi paaya
#include<bits/stdc++.h>

using namespace std;

int main()
{

    string arr;
    cin>>arr;
    int l=arr.length();

    int kr=0,kb=0,kg=0,ky=0;


    int addr=-1,addb=-1,addg=-1,addy=-1;
    for(int i=0;i<l;i++)
    {
        char ch;
        ch=arr[i];

        if(ch=='R'&&addr<0)
        {
            addr=i%4;
        }
        else if(ch=='G'&&addg<0)
        {
            addg=i%4;
        }
        else if(ch=='B'&&addb<0)
        {
            addb=i%4;
        }
        else if(ch=='Y'&&addy<0)
        {
            addy=i%4;
        }


        if((addr+addg+addb+addy)==6)
            break;
    }

  //  cout<<addr<<"*"<<addg<<"*"<<addb<<"*"<<addy<<"\n";

    for(int i=0;i<l;i++)
    {

    char ch=arr[i];
    if(ch=='!')
    {
        if(i%4==addr)
            kr++;
        else if(i%4==addg)
            kg++;
        else if(i%4==addb)
            kb++;
        else if(i%4==addy)
            ky++;
    }


    }

    cout<<kr<<kb<<ky<<kg<<"\n";


return 0;


}
