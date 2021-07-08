//SEBIHWY CC
#include<bits/stdc++.h>

using namespace std;

int main()
{  int tt;
    cin>>tt;
    while(tt--)
    {
        double xx,s,sg,fg,d,t,aa,bb,cc,dd,ee,ff;
        cin>>s>>sg>>fg>>d>>t;

xx=s+(180*d/t);


dd=abs(xx-sg);
ee=abs(xx-fg);


    if(dd<ee)
        cout<<"SEBI\n";
    else if(ee<dd)
        cout<<"FATHER\n";
    else if(ee==dd)
        cout<<"DRAW\n";

    }

    return 0;




}

