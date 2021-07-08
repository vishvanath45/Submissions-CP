//codechef BASE

#include<bits/stdc++.h>
using namespace std;

long long int ctob(long long int N, long long int b)
{

     long long int x=N%b;
        N=N/b;

    if(x<0)
    N=N+1;

     if(N!=0)
     {
     int kek=ctob(N, b);
     if(kek==999)
     {
     return 999;
     }
     else
     {
     return -1;
     }
    }
    else
    {
    if(x==1)
    {
    return 999;
    }
    else
    {
    return -1;
    }
    }


}

int main()

{

    long long int t,N,n2,b,counter=0;
    cin>>t;
    while(t--)
    {
    cin>>N;
    n2=N;

    if(n2==1)
    {
    cout<<"INFINITY\n";
    }
    else
    {

    if(N<=1)
    {counter=0;
    }
    else
    {
    long long int lol=sqrt(N);
    for(b=2;b<=lol/*(N/2)+1/*sqrt(N)*/;b++)
    {

    int papa=ctob(N,b);
    if(papa==999)
    {
   //cout<<b<<"bbbb\n";
     counter++;
    }
    }

    /*long long int papa=ctob(N,(N/2)+1);
    if(papa==999)
    {
    //cout<<b<<"bbbb\n";
     counter++;
    }*/
}
    //cout<<counter<<"\n";

   if(N>1)
   cout<<counter+N-(N/2)/*+N-(N/2)-1*/<<"\n";
   else
   cout<<0<<"\n";


    counter=0;

}
}
    return 0;

}
