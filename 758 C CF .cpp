// CF CONTEST 758 C

#include<bits/stdc++.h>

using namespace std;

int main()
{

    long long int n,m,k,x,y;

    cin>>n>>m>>k>>x>>y;
    long long   int yy=(2*n*m)-(2*m);


    if(yy==0)
    {
        long long int mina,maxa,sq;
        long long int rota=k/m;
        long long int rem=k%m;
        if(rem==0)
        {
        //cout<<"rota\n";
            maxa=rota;
            mina=rota;
            sq=rota;
        }
        else
        {
            maxa=rota+1;
            mina=rota;
            if(x<=rem)
                sq=rota+1;
            else
                sq=rota;
        }
       // cout<<"wdeded\n";
        cout<<maxa<<" "<<mina<<" "<<sq<<"\n";
        return 0;

    }

    long long int remaining=k%(yy);
    long long int times=k/(yy);

    long long int minq,maxq,sq;

    if(k/(n*m)==0)
    {
    if(remaining==n*m)
    {
    minq=1;
    maxq=1;
    sq=1;
    }
    else
    {
    minq=0;
    maxq=1;
    if(remaining>=(m*(x-1)+y))
    sq=1;
    else
    sq=0;
    }
    cout<<"efeeeee\n";
    cout<<maxq<<" "<<minq<<" "<<sq<<"\n";
return 0;
    }



    if(remaining==0)
    {
        cout<<"fuck\n";
        if(n>2)
        {minq=times;
        maxq=times*2;
        }
        else
        {minq=times;
        maxq=times;
        }

        if(x==1||x==n)
            sq=times;
        else
            sq=2*times;
    }
    else if(remaining<=n*m)
    {
       cout<<"fuck2\n";
        if(remaining==n*m)
        {
         cout<<"fj3ren\n";
            minq=times+1;
            maxq=2*times+1;

            if(x==1||x==n)
                sq=times+1;
            else
                sq=2*times+1;
        }
        else
        {
        cout<<"fjen\n";
        cout<<remaining<<"&&\n";
            minq=times;
            if(remaining>m)
            maxq=2*times+1;
            else
            maxq=2*times;
            if(n<=2)
            maxq=maxq/2;
            int kk=(m*(x-1)+y);
            if(remaining>=(kk))
            {
            cout<<"shit\n";
                if(x==1||x==n)
                {
                    sq=times+1;
                }
                else
                {
                    sq=2*times+1;
                }
            }
            else
            {
            cout<<"bullshit \n";
            if(x==1||x==n)
            sq=times;
            else
            sq=2*times;
            }


        }




    }
    else
    {
        cout<<"fuck3\n";
        minq=times+1;
        maxq=2*times+2;

        if(x==1||x==n)
        {
        sq=times+1;
        }
        else
        {
        remaining=remaining-(n*m);
        x=n-x+1;

        if(remaining>=(m*(x-1)+y-m))
        sq=(times*2)+2;
        else
        sq=(times*2)+1;

        }
    }


    cout<<maxq<<" "<<minq<<" "<<sq<<"\n";



    return 0;

}
